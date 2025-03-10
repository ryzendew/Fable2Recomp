#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BB465C"))) PPC_WEAK_FUNC(sub_82BB465C);
PPC_FUNC_IMPL(__imp__sub_82BB465C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4660"))) PPC_WEAK_FUNC(sub_82BB4660);
PPC_FUNC_IMPL(__imp__sub_82BB4660) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82bb46a0
	if (ctx.cr6.lt) goto loc_82BB46A0;
	// cmpwi cr6,r4,145
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 145, ctx.xer);
	// bgt cr6,0x82bb46a0
	if (ctx.cr6.gt) goto loc_82BB46A0;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4690
	if (ctx.cr6.eq) goto loc_82BB4690;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r9,r11,6120
	ctx.r9.s64 = ctx.r11.s64 + 6120;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82BB4690:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// addi r9,r11,5536
	ctx.r9.s64 = ctx.r11.s64 + 5536;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_82BB46A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB46A8"))) PPC_WEAK_FUNC(sub_82BB46A8);
PPC_FUNC_IMPL(__imp__sub_82BB46A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB46B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-9996
	ctx.r4.s64 = ctx.r10.s64 + -9996;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r29,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 3;
	// bl 0x82bc6c30
	ctx.lr = 0x82BB46D4;
	sub_82BC6C30(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r30,r7,-9968
	ctx.r30.s64 = ctx.r7.s64 + -9968;
	// lwz r11,-9968(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9968);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb4718
	if (ctx.cr6.eq) goto loc_82BB4718;
loc_82BB46E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB46F8;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB4708;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb46e8
	if (!ctx.cr6.eq) goto loc_82BB46E8;
loc_82BB4718:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB4724;
	sub_82BC55B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9496
	ctx.r4.s64 = ctx.r11.s64 + -9496;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4734;
	sub_8219CDA8(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,19208
	ctx.r4.s64 = ctx.r10.s64 + 19208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4748;
	sub_8227B7E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4764
	if (ctx.cr6.lt) goto loc_82BB4764;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4764:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4778;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4798;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,19832
	ctx.r4.s64 = ctx.r8.s64 + 19832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB47AC;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb47c0
	if (ctx.cr6.lt) goto loc_82BB47C0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB47C0:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB47D4;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB47F4;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,23392
	ctx.r4.s64 = ctx.r8.s64 + 23392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4808;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb481c
	if (ctx.cr6.lt) goto loc_82BB481C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB481C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4830;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26372
	ctx.r4.s64 = ctx.r10.s64 + 26372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4850;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,20784
	ctx.r4.s64 = ctx.r8.s64 + 20784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4864;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4878
	if (ctx.cr6.lt) goto loc_82BB4878;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4878:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB488C;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26380
	ctx.r4.s64 = ctx.r10.s64 + 26380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB48AC;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21088
	ctx.r4.s64 = ctx.r8.s64 + 21088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB48C0;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb48d4
	if (ctx.cr6.lt) goto loc_82BB48D4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB48D4:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB48E8;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26388
	ctx.r4.s64 = ctx.r10.s64 + 26388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4908;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21384
	ctx.r4.s64 = ctx.r8.s64 + 21384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB491C;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4930
	if (ctx.cr6.lt) goto loc_82BB4930;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB4930:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB4944;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB4964;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,21536
	ctx.r4.s64 = ctx.r8.s64 + 21536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB4978;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb498c
	if (ctx.cr6.lt) goto loc_82BB498C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB498C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB49A0;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,-9984
	ctx.r5.s64 = ctx.r10.s64 + -9984;
	// addi r4,r8,-10004
	ctx.r4.s64 = ctx.r8.s64 + -10004;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BB49C8;
	sub_82BC7060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB49D4;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB49DC"))) PPC_WEAK_FUNC(sub_82BB49DC);
PPC_FUNC_IMPL(__imp__sub_82BB49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB49E0"))) PPC_WEAK_FUNC(sub_82BB49E0);
PPC_FUNC_IMPL(__imp__sub_82BB49E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB49E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB4A04;
	sub_82BB5C30(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb4a28
	if (!ctx.cr6.lt) goto loc_82BB4A28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb4a30
	if (!ctx.cr6.eq) goto loc_82BB4A30;
loc_82BB4A28:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bb4a34
	goto loc_82BB4A34;
loc_82BB4A30:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BB4A34:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82bb4a68
	if (!ctx.cr6.eq) goto loc_82BB4A68;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB4A68:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb4aac
	if (!ctx.cr6.eq) goto loc_82BB4AAC;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4A7C;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb4af8
	if (ctx.cr6.eq) goto loc_82BB4AF8;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB4AAC:
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82bb4aec
	if (!ctx.cr6.eq) goto loc_82BB4AEC;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ABC;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ACC;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4ADC;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB4AEC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4AF8;
	sub_82BC6A18(ctx, base);
loc_82BB4AF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB4B04"))) PPC_WEAK_FUNC(sub_82BB4B04);
PPC_FUNC_IMPL(__imp__sub_82BB4B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4B08"))) PPC_WEAK_FUNC(sub_82BB4B08);
PPC_FUNC_IMPL(__imp__sub_82BB4B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB4B10;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4B20;
	sub_82BB5BD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4b44
	if (ctx.cr6.lt) goto loc_82BB4B44;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB4B44:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb4ba0
	if (ctx.cr6.eq) goto loc_82BB4BA0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB4B5C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb4b6c
	if (!ctx.cr6.eq) goto loc_82BB4B6C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb4bac
	goto loc_82BB4BAC;
loc_82BB4B6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb4b88
	if (ctx.cr6.lt) goto loc_82BB4B88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB4B88;
	sub_8227B8B8(ctx, base);
loc_82BB4B88:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4ba0
	if (ctx.cr6.lt) goto loc_82BB4BA0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB4BA0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb4bc4
	if (!ctx.cr0.eq) goto loc_82BB4BC4;
loc_82BB4BAC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB4BC4;
	sub_82BC68F0(ctx, base);
loc_82BB4BC4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BB4BD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4bf4
	if (ctx.cr6.eq) goto loc_82BB4BF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4bd0
	if (ctx.cr6.eq) goto loc_82BB4BD0;
loc_82BB4BF4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4c28
	if (!ctx.cr6.eq) goto loc_82BB4C28;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB4C28:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BB4C34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4c58
	if (ctx.cr6.eq) goto loc_82BB4C58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4c34
	if (ctx.cr6.eq) goto loc_82BB4C34;
loc_82BB4C58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4c8c
	if (!ctx.cr6.eq) goto loc_82BB4C8C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB4C8C:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BB4C98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4cbc
	if (ctx.cr6.eq) goto loc_82BB4CBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4c98
	if (ctx.cr6.eq) goto loc_82BB4C98;
loc_82BB4CBC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4cf0
	if (!ctx.cr6.eq) goto loc_82BB4CF0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB4CF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BB4CFC;
	sub_82BC5D40(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4d14
	if (ctx.cr6.lt) goto loc_82BB4D14;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BB4D14:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5c88
	ctx.lr = 0x82BB4D3C;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb4d68
	if (ctx.cr6.eq) goto loc_82BB4D68;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb4d68
	if (!ctx.cr6.eq) goto loc_82BB4D68;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4D68;
	sub_82BC6A18(ctx, base);
loc_82BB4D68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB4D74"))) PPC_WEAK_FUNC(sub_82BB4D74);
PPC_FUNC_IMPL(__imp__sub_82BB4D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4D78"))) PPC_WEAK_FUNC(sub_82BB4D78);
PPC_FUNC_IMPL(__imp__sub_82BB4D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB4D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4D90;
	sub_82BB5BD0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,1876
	ctx.r31.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4db4
	if (ctx.cr6.lt) goto loc_82BB4DB4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB4DB4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb4e10
	if (ctx.cr6.eq) goto loc_82BB4E10;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB4DCC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb4ddc
	if (!ctx.cr6.eq) goto loc_82BB4DDC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bb4e1c
	goto loc_82BB4E1C;
loc_82BB4DDC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb4df8
	if (ctx.cr6.lt) goto loc_82BB4DF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB4DF8;
	sub_8227B8B8(ctx, base);
loc_82BB4DF8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb4e10
	if (ctx.cr6.lt) goto loc_82BB4E10;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB4E10:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bb4e34
	if (!ctx.cr0.eq) goto loc_82BB4E34;
loc_82BB4E1C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB4E34;
	sub_82BC68F0(ctx, base);
loc_82BB4E34:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB4E40;
	sub_821885C0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BB4E4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4e70
	if (ctx.cr6.eq) goto loc_82BB4E70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4e4c
	if (ctx.cr6.eq) goto loc_82BB4E4C;
loc_82BB4E70:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4e88
	if (!ctx.cr6.eq) goto loc_82BB4E88;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB4E88:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BB4E94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4eb8
	if (ctx.cr6.eq) goto loc_82BB4EB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4e94
	if (ctx.cr6.eq) goto loc_82BB4E94;
loc_82BB4EB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4ed0
	if (!ctx.cr6.eq) goto loc_82BB4ED0;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB4ED0:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BB4EDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb4f00
	if (ctx.cr6.eq) goto loc_82BB4F00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb4edc
	if (ctx.cr6.eq) goto loc_82BB4EDC;
loc_82BB4F00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb4f18
	if (!ctx.cr6.eq) goto loc_82BB4F18;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB4F18:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB4F28;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB4F34"))) PPC_WEAK_FUNC(sub_82BB4F34);
PPC_FUNC_IMPL(__imp__sub_82BB4F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB4F38"))) PPC_WEAK_FUNC(sub_82BB4F38);
PPC_FUNC_IMPL(__imp__sub_82BB4F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4F58;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4F68;
	sub_82BB5BD0(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb4f88
	if (ctx.cr6.eq) goto loc_82BB4F88;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82BB4F88:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb4fa0
	if (ctx.cr6.lt) goto loc_82BB4FA0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB4FA0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB4FD8"))) PPC_WEAK_FUNC(sub_82BB4FD8);
PPC_FUNC_IMPL(__imp__sub_82BB4FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB4FF8;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5008;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5018;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5028;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5044
	if (ctx.cr6.lt) goto loc_82BB5044;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5044:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB507C"))) PPC_WEAK_FUNC(sub_82BB507C);
PPC_FUNC_IMPL(__imp__sub_82BB507C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5080"))) PPC_WEAK_FUNC(sub_82BB5080);
PPC_FUNC_IMPL(__imp__sub_82BB5080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB50A0;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB50B0;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb50f8
	if (ctx.cr6.lt) goto loc_82BB50F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB50F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5130"))) PPC_WEAK_FUNC(sub_82BB5130);
PPC_FUNC_IMPL(__imp__sub_82BB5130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5138;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5148;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5158;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB5164;
	sub_82BB5C30(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb51a8
	if (ctx.cr6.eq) goto loc_82BB51A8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB51A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB51B0"))) PPC_WEAK_FUNC(sub_82BB51B0);
PPC_FUNC_IMPL(__imp__sub_82BB51B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB51D0;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB51E0;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5228
	if (ctx.cr6.lt) goto loc_82BB5228;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5228:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5260"))) PPC_WEAK_FUNC(sub_82BB5260);
PPC_FUNC_IMPL(__imp__sub_82BB5260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5278;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5288;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB5294;
	sub_82BB5C30(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb52d8
	if (ctx.cr6.eq) goto loc_82BB52D8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB52D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB52E0"))) PPC_WEAK_FUNC(sub_82BB52E0);
PPC_FUNC_IMPL(__imp__sub_82BB52E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5300;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5310;
	sub_821885C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb534c
	if (ctx.cr6.lt) goto loc_82BB534C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB534C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5384"))) PPC_WEAK_FUNC(sub_82BB5384);
PPC_FUNC_IMPL(__imp__sub_82BB5384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5388"))) PPC_WEAK_FUNC(sub_82BB5388);
PPC_FUNC_IMPL(__imp__sub_82BB5388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB53AC;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BB53BC;
	sub_821885C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82bb5c30
	ctx.lr = 0x82BB53C8;
	sub_82BB5C30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb5400
	if (ctx.cr6.eq) goto loc_82BB5400;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BB5400:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB541C"))) PPC_WEAK_FUNC(sub_82BB541C);
PPC_FUNC_IMPL(__imp__sub_82BB541C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5420"))) PPC_WEAK_FUNC(sub_82BB5420);
PPC_FUNC_IMPL(__imp__sub_82BB5420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5440;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5450;
	sub_82BB5BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bb2d38
	ctx.lr = 0x82BB5460;
	sub_82BB2D38(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB54A4"))) PPC_WEAK_FUNC(sub_82BB54A4);
PPC_FUNC_IMPL(__imp__sub_82BB54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB54A8"))) PPC_WEAK_FUNC(sub_82BB54A8);
PPC_FUNC_IMPL(__imp__sub_82BB54A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB54C8;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB54D8;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5538"))) PPC_WEAK_FUNC(sub_82BB5538);
PPC_FUNC_IMPL(__imp__sub_82BB5538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5558;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5568;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f3,f12,f10,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmsubs f4,f11,f0,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f7.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmsubs f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb55bc
	if (ctx.cr6.lt) goto loc_82BB55BC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB55BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB55F4"))) PPC_WEAK_FUNC(sub_82BB55F4);
PPC_FUNC_IMPL(__imp__sub_82BB55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB55F8"))) PPC_WEAK_FUNC(sub_82BB55F8);
PPC_FUNC_IMPL(__imp__sub_82BB55F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5614;
	sub_82BB5BD0(ctx, base);
	// bl 0x82bb2d98
	ctx.lr = 0x82BB5618;
	sub_82BB2D98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5630
	if (ctx.cr6.lt) goto loc_82BB5630;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5630:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5664"))) PPC_WEAK_FUNC(sub_82BB5664);
PPC_FUNC_IMPL(__imp__sub_82BB5664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5668"))) PPC_WEAK_FUNC(sub_82BB5668);
PPC_FUNC_IMPL(__imp__sub_82BB5668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5684;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB56D8"))) PPC_WEAK_FUNC(sub_82BB56D8);
PPC_FUNC_IMPL(__imp__sub_82BB56D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB56F4;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5744"))) PPC_WEAK_FUNC(sub_82BB5744);
PPC_FUNC_IMPL(__imp__sub_82BB5744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5748"))) PPC_WEAK_FUNC(sub_82BB5748);
PPC_FUNC_IMPL(__imp__sub_82BB5748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5768;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5778;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB57E8"))) PPC_WEAK_FUNC(sub_82BB57E8);
PPC_FUNC_IMPL(__imp__sub_82BB57E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5808;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5818;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5884"))) PPC_WEAK_FUNC(sub_82BB5884);
PPC_FUNC_IMPL(__imp__sub_82BB5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5888"))) PPC_WEAK_FUNC(sub_82BB5888);
PPC_FUNC_IMPL(__imp__sub_82BB5888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB58A8;
	sub_82BB5BD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB58B8;
	sub_82BB5BD0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82bb58cc
	if (ctx.cr6.lt) goto loc_82BB58CC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB58CC:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82bb58e4
	if (!ctx.cr6.lt) goto loc_82BB58E4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB58E4:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82bb58fc
	if (ctx.cr6.lt) goto loc_82BB58FC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB58FC:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5918
	if (ctx.cr6.lt) goto loc_82BB5918;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5918:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5950"))) PPC_WEAK_FUNC(sub_82BB5950);
PPC_FUNC_IMPL(__imp__sub_82BB5950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5970;
	sub_82BB5BD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5980;
	sub_82BB5BD0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82bb5994
	if (ctx.cr6.gt) goto loc_82BB5994;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB5994:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82bb59ac
	if (!ctx.cr6.gt) goto loc_82BB59AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB59AC:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82bb59c4
	if (ctx.cr6.gt) goto loc_82BB59C4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82BB59C4:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb59e0
	if (ctx.cr6.lt) goto loc_82BB59E0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB59E0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5A18"))) PPC_WEAK_FUNC(sub_82BB5A18);
PPC_FUNC_IMPL(__imp__sub_82BB5A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5A30;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5A40;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB5A50;
	sub_821885C0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f1,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f6,f7,f1,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fmadds f3,f4,f1,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5aa4
	if (ctx.cr6.lt) goto loc_82BB5AA4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5AA4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB5ACC"))) PPC_WEAK_FUNC(sub_82BB5ACC);
PPC_FUNC_IMPL(__imp__sub_82BB5ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5AD0"))) PPC_WEAK_FUNC(sub_82BB5AD0);
PPC_FUNC_IMPL(__imp__sub_82BB5AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5AF0;
	sub_82BB5BD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BB5B00;
	sub_82BBC658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb2e00
	ctx.lr = 0x82BB5B0C;
	sub_82BB2E00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5b24
	if (ctx.cr6.lt) goto loc_82BB5B24;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB5B24:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5B5C"))) PPC_WEAK_FUNC(sub_82BB5B5C);
PPC_FUNC_IMPL(__imp__sub_82BB5B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5B60"))) PPC_WEAK_FUNC(sub_82BB5B60);
PPC_FUNC_IMPL(__imp__sub_82BB5B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB5B7C;
	sub_82BB5BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-9812
	ctx.r4.s64 = ctx.r10.s64 + -9812;
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB5BB4;
	sub_82BC5C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5BCC"))) PPC_WEAK_FUNC(sub_82BB5BCC);
PPC_FUNC_IMPL(__imp__sub_82BB5BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5BD0"))) PPC_WEAK_FUNC(sub_82BB5BD0);
PPC_FUNC_IMPL(__imp__sub_82BB5BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-9996
	ctx.r5.s64 = ctx.r11.s64 + -9996;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BB5BF4;
	sub_82BC6CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb5c14
	if (!ctx.cr6.eq) goto loc_82BB5C14;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-10024
	ctx.r5.s64 = ctx.r11.s64 + -10024;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB5C14;
	sub_82BC67F0(ctx, base);
loc_82BB5C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5C30"))) PPC_WEAK_FUNC(sub_82BB5C30);
PPC_FUNC_IMPL(__imp__sub_82BB5C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6558
	ctx.lr = 0x82BB5C50;
	sub_82BC6558(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9996
	ctx.r5.s64 = ctx.r11.s64 + -9996;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1408
	ctx.lr = 0x82BB5C68;
	sub_821E1408(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BB5C74;
	sub_82BC5FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB5C90"))) PPC_WEAK_FUNC(sub_82BB5C90);
PPC_FUNC_IMPL(__imp__sub_82BB5C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB5C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-9716
	ctx.r4.s64 = ctx.r10.s64 + -9716;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r29,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 3;
	// bl 0x82bc6c30
	ctx.lr = 0x82BB5CBC;
	sub_82BC6C30(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r30,r7,-9688
	ctx.r30.s64 = ctx.r7.s64 + -9688;
	// lwz r11,-9688(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb5d00
	if (ctx.cr6.eq) goto loc_82BB5D00;
loc_82BB5CD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB5CE0;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BB5CF0;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb5cd0
	if (!ctx.cr6.eq) goto loc_82BB5CD0;
loc_82BB5D00:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB5D0C;
	sub_82BC55B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9496
	ctx.r4.s64 = ctx.r11.s64 + -9496;
	// bl 0x8219cda8
	ctx.lr = 0x82BB5D1C;
	sub_8219CDA8(ctx, base);
	// lis r10,-32069
	ctx.r10.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,24528
	ctx.r4.s64 = ctx.r10.s64 + 24528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB5D30;
	sub_8227B7E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5d4c
	if (ctx.cr6.lt) goto loc_82BB5D4C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB5D4C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB5D60;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB5D80;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,25312
	ctx.r4.s64 = ctx.r8.s64 + 25312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB5D94;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5da8
	if (ctx.cr6.lt) goto loc_82BB5DA8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB5DA8:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB5DBC;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB5DDC;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,26472
	ctx.r4.s64 = ctx.r8.s64 + 26472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB5DF0;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5e04
	if (ctx.cr6.lt) goto loc_82BB5E04;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB5E04:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB5E18;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BB5E38;
	sub_8219CDA8(ctx, base);
	// lis r8,-32069
	ctx.r8.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,26280
	ctx.r4.s64 = ctx.r8.s64 + 26280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB5E4C;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb5e60
	if (ctx.cr6.lt) goto loc_82BB5E60;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB5E60:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BB5E74;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,-9704
	ctx.r5.s64 = ctx.r10.s64 + -9704;
	// addi r4,r8,-9724
	ctx.r4.s64 = ctx.r8.s64 + -9724;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BB5E9C;
	sub_82BC7060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB5EA8;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB5EB0"))) PPC_WEAK_FUNC(sub_82BB5EB0);
PPC_FUNC_IMPL(__imp__sub_82BB5EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB5EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bb6820
	ctx.lr = 0x82BB5ED4;
	sub_82BB6820(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb5ef8
	if (!ctx.cr6.lt) goto loc_82BB5EF8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb5f00
	if (!ctx.cr6.eq) goto loc_82BB5F00;
loc_82BB5EF8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bb5f04
	goto loc_82BB5F04;
loc_82BB5F00:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BB5F04:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82bb5f38
	if (!ctx.cr6.eq) goto loc_82BB5F38;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r11,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r11.u8);
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// stb r11,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB5F38:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bb5f64
	if (!ctx.cr6.eq) goto loc_82BB5F64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB5F4C;
	sub_82BB67C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB5F64:
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82bb5fb4
	if (!ctx.cr6.eq) goto loc_82BB5FB4;
	// bl 0x82bb6880
	ctx.lr = 0x82BB5F74;
	sub_82BB6880(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// addi r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB5F84;
	sub_82BB6880(ctx, base);
	// stb r3,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r3.u8);
	// addi r4,r30,3
	ctx.r4.s64 = ctx.r30.s64 + 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB5F94;
	sub_82BB6880(ctx, base);
	// stb r3,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r3.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB5FA4;
	sub_82BB6880(ctx, base);
	// stb r3,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB5FB4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB5FC0;
	sub_82BC6A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB5FCC"))) PPC_WEAK_FUNC(sub_82BB5FCC);
PPC_FUNC_IMPL(__imp__sub_82BB5FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB5FD0"))) PPC_WEAK_FUNC(sub_82BB5FD0);
PPC_FUNC_IMPL(__imp__sub_82BB5FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB5FD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB5FE8;
	sub_82BB67C0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,1876
	ctx.r28.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb600c
	if (ctx.cr6.lt) goto loc_82BB600C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BB600C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb6068
	if (ctx.cr6.eq) goto loc_82BB6068;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB6024;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb6034
	if (!ctx.cr6.eq) goto loc_82BB6034;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb6074
	goto loc_82BB6074;
loc_82BB6034:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb6050
	if (ctx.cr6.lt) goto loc_82BB6050;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB6050;
	sub_8227B8B8(ctx, base);
loc_82BB6050:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb6068
	if (ctx.cr6.lt) goto loc_82BB6068;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82BB6068:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb608c
	if (!ctx.cr0.eq) goto loc_82BB608C;
loc_82BB6074:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB608C;
	sub_82BC68F0(ctx, base);
loc_82BB608C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,11932
	ctx.r10.s64 = ctx.r10.s64 + 11932;
loc_82BB6098:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb60bc
	if (ctx.cr6.eq) goto loc_82BB60BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb6098
	if (ctx.cr6.eq) goto loc_82BB6098;
loc_82BB60BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb6100
	if (!ctx.cr6.eq) goto loc_82BB6100;
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB6100:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9656
	ctx.r10.s64 = ctx.r10.s64 + -9656;
loc_82BB610C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb6130
	if (ctx.cr6.eq) goto loc_82BB6130;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb610c
	if (ctx.cr6.eq) goto loc_82BB610C;
loc_82BB6130:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb6174
	if (!ctx.cr6.eq) goto loc_82BB6174;
	// lbz r8,1(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB6174:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9652
	ctx.r10.s64 = ctx.r10.s64 + -9652;
loc_82BB6180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb61a4
	if (ctx.cr6.eq) goto loc_82BB61A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb6180
	if (ctx.cr6.eq) goto loc_82BB6180;
loc_82BB61A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb61e8
	if (!ctx.cr6.eq) goto loc_82BB61E8;
	// lbz r8,2(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB61E8:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-20172
	ctx.r10.s64 = ctx.r10.s64 + -20172;
loc_82BB61F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb6218
	if (ctx.cr6.eq) goto loc_82BB6218;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb61f4
	if (ctx.cr6.eq) goto loc_82BB61F4;
loc_82BB6218:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb625c
	if (!ctx.cr6.eq) goto loc_82BB625C;
	// lbz r8,3(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BB625C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BB6268;
	sub_82BC5D40(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb6280
	if (ctx.cr6.lt) goto loc_82BB6280;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82BB6280:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5c88
	ctx.lr = 0x82BB62A8;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bb62d4
	if (ctx.cr6.eq) goto loc_82BB62D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb62d4
	if (!ctx.cr6.eq) goto loc_82BB62D4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB62D4;
	sub_82BC6A18(ctx, base);
loc_82BB62D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB62E0"))) PPC_WEAK_FUNC(sub_82BB62E0);
PPC_FUNC_IMPL(__imp__sub_82BB62E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB62E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB62F8;
	sub_82BB67C0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,1876
	ctx.r31.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb631c
	if (ctx.cr6.lt) goto loc_82BB631C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB631C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bb6378
	if (ctx.cr6.eq) goto loc_82BB6378;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB6334;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb6344
	if (!ctx.cr6.eq) goto loc_82BB6344;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bb6384
	goto loc_82BB6384;
loc_82BB6344:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb6360
	if (ctx.cr6.lt) goto loc_82BB6360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB6360;
	sub_8227B8B8(ctx, base);
loc_82BB6360:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb6378
	if (ctx.cr6.lt) goto loc_82BB6378;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB6378:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bb639c
	if (!ctx.cr0.eq) goto loc_82BB639C;
loc_82BB6384:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB639C;
	sub_82BC68F0(ctx, base);
loc_82BB639C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,11932
	ctx.r10.s64 = ctx.r10.s64 + 11932;
loc_82BB63A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb63cc
	if (ctx.cr6.eq) goto loc_82BB63CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb63a8
	if (ctx.cr6.eq) goto loc_82BB63A8;
loc_82BB63CC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb63f0
	if (!ctx.cr6.eq) goto loc_82BB63F0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB63E0;
	sub_82BB6880(ctx, base);
	// stb r3,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB63F0:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9656
	ctx.r10.s64 = ctx.r10.s64 + -9656;
loc_82BB63FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb6420
	if (ctx.cr6.eq) goto loc_82BB6420;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb63fc
	if (ctx.cr6.eq) goto loc_82BB63FC;
loc_82BB6420:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb6444
	if (!ctx.cr6.eq) goto loc_82BB6444;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB6434;
	sub_82BB6880(ctx, base);
	// stb r3,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB6444:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9652
	ctx.r10.s64 = ctx.r10.s64 + -9652;
loc_82BB6450:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb6474
	if (ctx.cr6.eq) goto loc_82BB6474;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb6450
	if (ctx.cr6.eq) goto loc_82BB6450;
loc_82BB6474:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bb6498
	if (!ctx.cr6.eq) goto loc_82BB6498;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb6880
	ctx.lr = 0x82BB6488;
	sub_82BB6880(ctx, base);
	// stb r3,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB6498:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-20172
	ctx.r10.s64 = ctx.r10.s64 + -20172;
loc_82BB64A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bb64c8
	if (ctx.cr6.eq) goto loc_82BB64C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bb64a4
	if (ctx.cr6.eq) goto loc_82BB64A4;
loc_82BB64C8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82bb64ec
	if (!ctx.cr6.eq) goto loc_82BB64EC;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82bb6880
	ctx.lr = 0x82BB64DC;
	sub_82BB6880(ctx, base);
	// stb r3,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r3.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BB64EC:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB64F8;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6504"))) PPC_WEAK_FUNC(sub_82BB6504);
PPC_FUNC_IMPL(__imp__sub_82BB6504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6508"))) PPC_WEAK_FUNC(sub_82BB6508);
PPC_FUNC_IMPL(__imp__sub_82BB6508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB6528;
	sub_82BB67C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB6538;
	sub_82BB67C0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb6558
	if (ctx.cr6.lt) goto loc_82BB6558;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB6558:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6590"))) PPC_WEAK_FUNC(sub_82BB6590);
PPC_FUNC_IMPL(__imp__sub_82BB6590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB6598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB65A8;
	sub_82BB67C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB65B8;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// addi r28,r11,-9760
	ctx.r28.s64 = ctx.r11.s64 + -9760;
	// ble cr6,0x82bb65dc
	if (!ctx.cr6.gt) goto loc_82BB65DC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB65DC;
	sub_82BC67F0(ctx, base);
loc_82BB65DC:
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB65EC;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// ble cr6,0x82bb6608
	if (!ctx.cr6.gt) goto loc_82BB6608;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB6608;
	sub_82BC67F0(ctx, base);
loc_82BB6608:
	// stb r29,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r29.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB6618;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// ble cr6,0x82bb6634
	if (!ctx.cr6.gt) goto loc_82BB6634;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB6634;
	sub_82BC67F0(ctx, base);
loc_82BB6634:
	// stb r29,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r29.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB6644;
	sub_82BC6F00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,255
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 255, ctx.xer);
	// ble cr6,0x82bb6660
	if (!ctx.cr6.gt) goto loc_82BB6660;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB6660;
	sub_82BC67F0(ctx, base);
loc_82BB6660:
	// stb r29,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r29.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb667c
	if (ctx.cr6.lt) goto loc_82BB667C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BB667C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB66A4"))) PPC_WEAK_FUNC(sub_82BB66A4);
PPC_FUNC_IMPL(__imp__sub_82BB66A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB66A8"))) PPC_WEAK_FUNC(sub_82BB66A8);
PPC_FUNC_IMPL(__imp__sub_82BB66A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB66C8;
	sub_82BB67C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB66D8;
	sub_82BB67C0(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb671c
	if (!ctx.cr6.eq) goto loc_82BB671C;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb671c
	if (!ctx.cr6.eq) goto loc_82BB671C;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb671c
	if (!ctx.cr6.eq) goto loc_82BB671C;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82bb6720
	if (ctx.cr6.eq) goto loc_82BB6720;
loc_82BB671C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82BB6720:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6768"))) PPC_WEAK_FUNC(sub_82BB6768);
PPC_FUNC_IMPL(__imp__sub_82BB6768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bb67c0
	ctx.lr = 0x82BB6784;
	sub_82BB67C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-9648
	ctx.r4.s64 = ctx.r10.s64 + -9648;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB67A8;
	sub_82BC5C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB67C0"))) PPC_WEAK_FUNC(sub_82BB67C0);
PPC_FUNC_IMPL(__imp__sub_82BB67C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-9716
	ctx.r5.s64 = ctx.r11.s64 + -9716;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BB67E4;
	sub_82BC6CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bb6804
	if (!ctx.cr6.eq) goto loc_82BB6804;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-9780
	ctx.r5.s64 = ctx.r11.s64 + -9780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB6804;
	sub_82BC67F0(ctx, base);
loc_82BB6804:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6820"))) PPC_WEAK_FUNC(sub_82BB6820);
PPC_FUNC_IMPL(__imp__sub_82BB6820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6558
	ctx.lr = 0x82BB6840;
	sub_82BC6558(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-9716
	ctx.r5.s64 = ctx.r11.s64 + -9716;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1408
	ctx.lr = 0x82BB6858;
	sub_821E1408(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BB6864;
	sub_82BC5FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6880"))) PPC_WEAK_FUNC(sub_82BB6880);
PPC_FUNC_IMPL(__imp__sub_82BB6880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB689C;
	sub_82BC6F00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,255
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 255, ctx.xer);
	// ble cr6,0x82bb68bc
	if (!ctx.cr6.gt) goto loc_82BB68BC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-9760
	ctx.r5.s64 = ctx.r11.s64 + -9760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BB68BC;
	sub_82BC67F0(ctx, base);
loc_82BB68BC:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB68D8"))) PPC_WEAK_FUNC(sub_82BB68D8);
PPC_FUNC_IMPL(__imp__sub_82BB68D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82BB68E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r27,r11,1876
	ctx.r27.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb6904
	if (ctx.cr6.lt) goto loc_82BB6904;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB6904:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r28,r11,1744
	ctx.r28.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bb6964
	if (ctx.cr6.eq) goto loc_82BB6964;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB6924;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb6934
	if (!ctx.cr6.eq) goto loc_82BB6934;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// b 0x82bb6970
	goto loc_82BB6970;
loc_82BB6934:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb6950
	if (ctx.cr6.lt) goto loc_82BB6950;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB6950;
	sub_8227B8B8(ctx, base);
loc_82BB6950:
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb6964
	if (ctx.cr6.lt) goto loc_82BB6964;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB6964:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bb6980
	if (!ctx.cr0.eq) goto loc_82BB6980;
loc_82BB6970:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB6980;
	sub_82BC68F0(ctx, base);
loc_82BB6980:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bne cr6,0x82bb69e0
	if (!ctx.cr6.eq) goto loc_82BB69E0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82bb69c0
	if (!ctx.cr6.lt) goto loc_82BB69C0;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bb69c0
	if (ctx.cr6.eq) goto loc_82BB69C0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb69d0
	if (ctx.cr6.eq) goto loc_82BB69D0;
loc_82BB69C0:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB69D0;
	sub_82BC68F0(ctx, base);
loc_82BB69D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB69DC;
	sub_822AF338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BB69E0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB69E8;
	sub_82BB1E58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB69F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BB6A00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb6a00
	if (!ctx.cr6.eq) goto loc_82BB6A00;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r28,r10,-9520
	ctx.r28.s64 = ctx.r10.s64 + -9520;
	// addi r26,r8,-9404
	ctx.r26.s64 = ctx.r8.s64 + -9404;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BB6A34;
	sub_82BA8718(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,93
	ctx.r7.s64 = 93;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB6A48;
	sub_82BA8F18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b64
	if (ctx.cr6.eq) goto loc_82BB6B64;
	// lis r24,-31924
	ctx.r24.s64 = -2092171264;
	// lis r23,-31924
	ctx.r23.s64 = -2092171264;
loc_82BB6A60:
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x82ca3980
	ctx.lr = 0x82BB6A70;
	sub_82CA3980(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb6a9c
	if (ctx.cr6.eq) goto loc_82BB6A9C;
	// subf r20,r29,r31
	ctx.r20.s64 = ctx.r31.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cd828
	ctx.lr = 0x82BB6A90;
	sub_822CD828(ctx, base);
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// stbx r21,r20,r28
	PPC_STORE_U8(ctx.r20.u32 + ctx.r28.u32, ctx.r21.u8);
	// b 0x82bb6abc
	goto loc_82BB6ABC;
loc_82BB6A9C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_82BB6AA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82bb6aa4
	if (!ctx.cr6.eq) goto loc_82BB6AA4;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82BB6ABC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB6AC4;
	sub_82188CF0(ctx, base);
	// lwz r11,-6880(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -6880);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb6af8
	if (!ctx.cr6.eq) goto loc_82BB6AF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b64
	if (ctx.cr6.eq) goto loc_82BB6B64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB6AF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb6b50
	goto loc_82BB6B50;
loc_82BB6AF8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB6B14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6876(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -6876);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb6b54
	if (!ctx.cr6.eq) goto loc_82BB6B54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb6b5c
	if (!ctx.cr6.eq) goto loc_82BB6B5C;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82bb6b54
	if (!ctx.cr6.eq) goto loc_82BB6B54;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB6B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB6B50:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BB6B54:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb6b64
	if (ctx.cr6.eq) goto loc_82BB6B64;
loc_82BB6B5C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bb6a60
	if (!ctx.cr6.eq) goto loc_82BB6A60;
loc_82BB6B64:
	// bl 0x82ba8718
	ctx.lr = 0x82BB6B68;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BB6B74;
	sub_82BA9068(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bb6ba4
	if (ctx.cr6.eq) goto loc_82BB6BA4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BB6BA4:
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB6BBC"))) PPC_WEAK_FUNC(sub_82BB6BBC);
PPC_FUNC_IMPL(__imp__sub_82BB6BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6BC0"))) PPC_WEAK_FUNC(sub_82BB6BC0);
PPC_FUNC_IMPL(__imp__sub_82BB6BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb6c00
	if (!ctx.cr6.lt) goto loc_82BB6C00;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb6c00
	if (ctx.cr6.eq) goto loc_82BB6C00;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb6c18
	if (ctx.cr6.eq) goto loc_82BB6C18;
loc_82BB6C00:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB6C18;
	sub_82BC68F0(ctx, base);
loc_82BB6C18:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB6C24;
	sub_822AF338(ctx, base);
	// lbz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r10,18856
	ctx.r8.s64 = ctx.r10.s64 + 18856;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb6c5c
	if (!ctx.cr6.eq) goto loc_82BB6C5C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x82bb6c84
	goto loc_82BB6C84;
loc_82BB6C5C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BB6C60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb6c60
	if (!ctx.cr6.eq) goto loc_82BB6C60;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB6C84;
	sub_8219CDA8(ctx, base);
loc_82BB6C84:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB6C9C"))) PPC_WEAK_FUNC(sub_82BB6C9C);
PPC_FUNC_IMPL(__imp__sub_82BB6C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB6CA0"))) PPC_WEAK_FUNC(sub_82BB6CA0);
PPC_FUNC_IMPL(__imp__sub_82BB6CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB6CA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r27,r11,1876
	ctx.r27.s64 = ctx.r11.s64 + 1876;
	// addi r29,r10,1744
	ctx.r29.s64 = ctx.r10.s64 + 1744;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb6ce4
	if (!ctx.cr6.lt) goto loc_82BB6CE4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82bb6ce4
	if (ctx.cr6.eq) goto loc_82BB6CE4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb6cf4
	if (ctx.cr6.eq) goto loc_82BB6CF4;
loc_82BB6CE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB6CF4;
	sub_82BC68F0(ctx, base);
loc_82BB6CF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB6D00;
	sub_822AF338(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb6d1c
	if (ctx.cr6.lt) goto loc_82BB6D1C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB6D1C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb6d74
	if (ctx.cr6.eq) goto loc_82BB6D74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB6D30;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb6d40
	if (!ctx.cr6.eq) goto loc_82BB6D40;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb6d80
	goto loc_82BB6D80;
loc_82BB6D40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb6d5c
	if (ctx.cr6.lt) goto loc_82BB6D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB6D5C;
	sub_8227B8B8(ctx, base);
loc_82BB6D5C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb6d74
	if (ctx.cr6.lt) goto loc_82BB6D74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB6D74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb6d90
	if (!ctx.cr0.eq) goto loc_82BB6D90;
loc_82BB6D80:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB6D90;
	sub_82BC68F0(ctx, base);
loc_82BB6D90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB6D98;
	sub_82188CF0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r3,5,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82bb1e58
	ctx.lr = 0x82BB6DAC;
	sub_82BB1E58(ctx, base);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,-6868(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6868);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb6e24
	if (!ctx.cr6.eq) goto loc_82BB6E24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB6DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB6DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6E24:
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lwz r10,-6872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6872);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82bb6e94
	if (!ctx.cr6.eq) goto loc_82BB6E94;
	// bctrl 
	ctx.lr = 0x82BB6E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB6E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r4,r7
	ctx.r4.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6E94:
	// bctrl 
	ctx.lr = 0x82BB6E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB6EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb706c
	if (ctx.cr6.eq) goto loc_82BB706C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,30,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82bb7050
	if (ctx.cr6.gt) goto loc_82BB7050;
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,28396
	ctx.r12.s64 = ctx.r12.s64 + 28396;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BB6F04;
	case 1:
		goto loc_82BB6F04;
	case 2:
		goto loc_82BB6F44;
	case 3:
		goto loc_82BB6F70;
	case 4:
		goto loc_82BB6FA8;
	case 5:
		goto loc_82BB7024;
	default:
		__builtin_unreachable();
	}
	// lwz r21,28420(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28420);
	// lwz r21,28420(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28420);
	// lwz r21,28484(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28484);
	// lwz r21,28528(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28528);
	// lwz r21,28584(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28584);
	// lwz r21,28708(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28708);
loc_82BB6F04:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6F44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6F70:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6FA8:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb6ff4
	if (!ctx.cr6.eq) goto loc_82BB6FF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82BB6FC0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BB6FC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb6fc4
	if (!ctx.cr6.eq) goto loc_82BB6FC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB6FE8;
	sub_8219CDA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB6FF4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb6fc0
	if (!ctx.cr6.eq) goto loc_82BB6FC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB7024:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB7050:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9396
	ctx.r4.s64 = ctx.r11.s64 + -9396;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB7060;
	sub_82BC6A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BB706C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb7084
	if (ctx.cr6.lt) goto loc_82BB7084;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB7084:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb70dc
	if (ctx.cr6.eq) goto loc_82BB70DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB7098;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb70a8
	if (!ctx.cr6.eq) goto loc_82BB70A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bb70e4
	goto loc_82BB70E4;
loc_82BB70A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb70c4
	if (ctx.cr6.lt) goto loc_82BB70C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB70C4;
	sub_8227B8B8(ctx, base);
loc_82BB70C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb70dc
	if (ctx.cr6.lt) goto loc_82BB70DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82BB70DC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_82BB70E4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9356
	ctx.r4.s64 = ctx.r11.s64 + -9356;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB70F4;
	sub_82BC6A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7100"))) PPC_WEAK_FUNC(sub_82BB7100);
PPC_FUNC_IMPL(__imp__sub_82BB7100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82BB7108;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// addi r26,r10,1744
	ctx.r26.s64 = ctx.r10.s64 + 1744;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb7144
	if (!ctx.cr6.lt) goto loc_82BB7144;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb7144
	if (ctx.cr6.eq) goto loc_82BB7144;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb7154
	if (ctx.cr6.eq) goto loc_82BB7154;
loc_82BB7144:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7154;
	sub_82BC68F0(ctx, base);
loc_82BB7154:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB7160;
	sub_822AF338(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb717c
	if (ctx.cr6.lt) goto loc_82BB717C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB717C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb71d8
	if (ctx.cr6.eq) goto loc_82BB71D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB7194;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb71a4
	if (!ctx.cr6.eq) goto loc_82BB71A4;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82bb71e4
	goto loc_82BB71E4;
loc_82BB71A4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb71c0
	if (ctx.cr6.lt) goto loc_82BB71C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB71C0;
	sub_8227B8B8(ctx, base);
loc_82BB71C0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb71d8
	if (ctx.cr6.lt) goto loc_82BB71D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB71D8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb71f4
	if (!ctx.cr0.eq) goto loc_82BB71F4;
loc_82BB71E4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB71F4;
	sub_82BC68F0(ctx, base);
loc_82BB71F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB71FC;
	sub_82188CF0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r3,5,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82bb1e58
	ctx.lr = 0x82BB7210;
	sub_82BB1E58(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB7220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31924
	ctx.r8.s64 = -2092171264;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r6,r7,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,-6872(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6872);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb72b4
	if (!ctx.cr6.eq) goto loc_82BB72B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb7264
	if (!ctx.cr6.lt) goto loc_82BB7264;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb7264
	if (ctx.cr6.eq) goto loc_82BB7264;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bb7274
	if (ctx.cr6.eq) goto loc_82BB7274;
loc_82BB7264:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7274;
	sub_82BC68F0(ctx, base);
loc_82BB7274:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BB7284;
	sub_82BC5A30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,80(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// xori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 ^ 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB72A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_82BB72B4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB72D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bb74f8
	if (ctx.cr6.eq) goto loc_82BB74F8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r11,30,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82bb74b8
	if (ctx.cr6.gt) goto loc_82BB74B8;
	// lis r12,-32069
	ctx.r12.s64 = -2101673984;
	// addi r12,r12,29452
	ctx.r12.s64 = ctx.r12.s64 + 29452;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BB7324;
	case 1:
		goto loc_82BB7324;
	case 2:
		goto loc_82BB7338;
	case 3:
		goto loc_82BB734C;
	case 4:
		goto loc_82BB73A4;
	case 5:
		goto loc_82BB746C;
	default:
		__builtin_unreachable();
	}
	// lwz r21,29476(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29476);
	// lwz r21,29476(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29476);
	// lwz r21,29496(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29496);
	// lwz r21,29516(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29516);
	// lwz r21,29604(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29604);
	// lwz r21,29804(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 29804);
loc_82BB7324:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BB7330;
	sub_82BC6F00(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x82bb74c8
	goto loc_82BB74C8;
loc_82BB7338:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BB7344;
	sub_821885C0(ctx, base);
	// stfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// b 0x82bb74c8
	goto loc_82BB74C8;
loc_82BB734C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb7374
	if (!ctx.cr6.lt) goto loc_82BB7374;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb7374
	if (ctx.cr6.eq) goto loc_82BB7374;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bb7384
	if (ctx.cr6.eq) goto loc_82BB7384;
loc_82BB7374:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7384;
	sub_82BC68F0(ctx, base);
loc_82BB7384:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BB7390;
	sub_82BC5A30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// b 0x82bb74c8
	goto loc_82BB74C8;
loc_82BB73A4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb73bc
	if (ctx.cr6.lt) goto loc_82BB73BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB73BC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb7414
	if (ctx.cr6.eq) goto loc_82BB7414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB73D0;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb73e0
	if (!ctx.cr6.eq) goto loc_82BB73E0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82bb7420
	goto loc_82BB7420;
loc_82BB73E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb73fc
	if (ctx.cr6.lt) goto loc_82BB73FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB73FC;
	sub_8227B8B8(ctx, base);
loc_82BB73FC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb7414
	if (ctx.cr6.lt) goto loc_82BB7414;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB7414:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb7430
	if (!ctx.cr0.eq) goto loc_82BB7430;
loc_82BB7420:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7430;
	sub_82BC68F0(ctx, base);
loc_82BB7430:
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// sth r27,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r27.u16);
	// sth r27,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r27.u16);
	// beq cr6,0x82bb7454
	if (ctx.cr6.eq) goto loc_82BB7454;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ba8850
	ctx.lr = 0x82BB7454;
	sub_82BA8850(ctx, base);
loc_82BB7454:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ba8ac8
	ctx.lr = 0x82BB7460;
	sub_82BA8AC8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ba8800
	ctx.lr = 0x82BB7468;
	sub_82BA8800(ctx, base);
	// b 0x82bb74c8
	goto loc_82BB74C8;
loc_82BB746C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb7494
	if (!ctx.cr6.lt) goto loc_82BB7494;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb7494
	if (ctx.cr6.eq) goto loc_82BB7494;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb74a4
	if (ctx.cr6.eq) goto loc_82BB74A4;
loc_82BB7494:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB74A4;
	sub_82BC68F0(ctx, base);
loc_82BB74A4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB74B0;
	sub_822AF338(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x82bb74c8
	goto loc_82BB74C8;
loc_82BB74B8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9316
	ctx.r4.s64 = ctx.r11.s64 + -9316;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB74C8;
	sub_82BC6A18(ctx, base);
loc_82BB74C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r5,r10,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB74EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_82BB74F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb7510
	if (ctx.cr6.lt) goto loc_82BB7510;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB7510:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb7568
	if (ctx.cr6.eq) goto loc_82BB7568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB7524;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb7534
	if (!ctx.cr6.eq) goto loc_82BB7534;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82bb7570
	goto loc_82BB7570;
loc_82BB7534:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb7550
	if (ctx.cr6.lt) goto loc_82BB7550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB7550;
	sub_8227B8B8(ctx, base);
loc_82BB7550:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb7568
	if (ctx.cr6.lt) goto loc_82BB7568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB7568:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
loc_82BB7570:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-9276
	ctx.r4.s64 = ctx.r11.s64 + -9276;
	// bl 0x82bc6a18
	ctx.lr = 0x82BB7580;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB758C"))) PPC_WEAK_FUNC(sub_82BB758C);
PPC_FUNC_IMPL(__imp__sub_82BB758C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB7590"))) PPC_WEAK_FUNC(sub_82BB7590);
PPC_FUNC_IMPL(__imp__sub_82BB7590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB7598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// addi r28,r10,1744
	ctx.r28.s64 = ctx.r10.s64 + 1744;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb75d4
	if (!ctx.cr6.lt) goto loc_82BB75D4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb75d4
	if (ctx.cr6.eq) goto loc_82BB75D4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb75e4
	if (ctx.cr6.eq) goto loc_82BB75E4;
loc_82BB75D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB75E4;
	sub_82BC68F0(ctx, base);
loc_82BB75E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB75F0;
	sub_822AF338(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb760c
	if (ctx.cr6.lt) goto loc_82BB760C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB760C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb7664
	if (ctx.cr6.eq) goto loc_82BB7664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB7620;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb7630
	if (!ctx.cr6.eq) goto loc_82BB7630;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb7670
	goto loc_82BB7670;
loc_82BB7630:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb764c
	if (ctx.cr6.lt) goto loc_82BB764C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB764C;
	sub_8227B8B8(ctx, base);
loc_82BB764C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb7664
	if (ctx.cr6.lt) goto loc_82BB7664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB7664:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb7680
	if (!ctx.cr0.eq) goto loc_82BB7680;
loc_82BB7670:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7680;
	sub_82BC68F0(ctx, base);
loc_82BB7680:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB7688;
	sub_82188CF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r3,5,0,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bb1e58
	ctx.lr = 0x82BB769C;
	sub_82BB1E58(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB76AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB76C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7700"))) PPC_WEAK_FUNC(sub_82BB7700);
PPC_FUNC_IMPL(__imp__sub_82BB7700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB7708;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb773c
	if (!ctx.cr6.lt) goto loc_82BB773C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb773c
	if (ctx.cr6.eq) goto loc_82BB773C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb7754
	if (ctx.cr6.eq) goto loc_82BB7754;
loc_82BB773C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7754;
	sub_82BC68F0(ctx, base);
loc_82BB7754:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB775C;
	sub_82BB1E58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r10,-6344
	ctx.r6.s64 = ctx.r10.s64 + -6344;
	// addi r5,r9,-6332
	ctx.r5.s64 = ctx.r9.s64 + -6332;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BB7798;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f9ae0
	ctx.lr = 0x82BB77A8;
	sub_823F9AE0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB77B4;
	sub_822AF338(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,32(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB77CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB77E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x82bc5cd8
	ctx.lr = 0x82BB77FC;
	sub_82BC5CD8(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bb7868
	if (ctx.cr6.eq) goto loc_82BB7868;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82BB781C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x82bc5f48
	ctx.lr = 0x82BB784C;
	sub_82BC5F48(ctx, base);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82bb781c
	if (!ctx.cr6.eq) goto loc_82BB781C;
loc_82BB7868:
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82ba8718
	ctx.lr = 0x82BB7878;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BB7884;
	sub_82BA9068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7890"))) PPC_WEAK_FUNC(sub_82BB7890);
PPC_FUNC_IMPL(__imp__sub_82BB7890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BB7898;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb78cc
	if (!ctx.cr6.lt) goto loc_82BB78CC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb78cc
	if (ctx.cr6.eq) goto loc_82BB78CC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb78e4
	if (ctx.cr6.eq) goto loc_82BB78E4;
loc_82BB78CC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB78E4;
	sub_82BC68F0(ctx, base);
loc_82BB78E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB78F0;
	sub_822AF338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB78FC;
	sub_82BB1E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB7910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82bb3368
	ctx.lr = 0x82BB7918;
	sub_82BB3368(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB7930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB7944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB7988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB799C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x8219cda8
	ctx.lr = 0x82BB79AC;
	sub_8219CDA8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB79B8"))) PPC_WEAK_FUNC(sub_82BB79B8);
PPC_FUNC_IMPL(__imp__sub_82BB79B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB79C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb79f4
	if (!ctx.cr6.lt) goto loc_82BB79F4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82bb79f4
	if (ctx.cr6.eq) goto loc_82BB79F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb7a0c
	if (ctx.cr6.eq) goto loc_82BB7A0C;
loc_82BB79F4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7A0C;
	sub_82BC68F0(ctx, base);
loc_82BB7A0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB7A18;
	sub_822AF338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB7A24;
	sub_82BB1E58(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB7A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB7A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb7a88
	if (ctx.cr6.eq) goto loc_82BB7A88;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,3
	ctx.r8.s64 = 3;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27348);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82bb7aac
	goto loc_82BB7AAC;
loc_82BB7A88:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r10,3
	ctx.r10.s64 = 3;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27348(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27348);
	ctx.f0.f64 = double(temp.f32);
loc_82BB7AAC:
	// frsp f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// bl 0x82bb3368
	ctx.lr = 0x82BB7AD0;
	sub_82BB3368(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r30,76
	ctx.r29.s64 = ctx.r30.s64 + 76;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB7AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,1
	ctx.r28.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB7B34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,3
	ctx.r3.s64 = 3;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7B68"))) PPC_WEAK_FUNC(sub_82BB7B68);
PPC_FUNC_IMPL(__imp__sub_82BB7B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BB7B70;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r22,r11,1876
	ctx.r22.s64 = ctx.r11.s64 + 1876;
	// addi r29,r10,1744
	ctx.r29.s64 = ctx.r10.s64 + 1744;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r31,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 3;
	// bge cr6,0x82bb7bb8
	if (!ctx.cr6.lt) goto loc_82BB7BB8;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82bb7bb8
	if (ctx.cr6.eq) goto loc_82BB7BB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb7bc8
	if (ctx.cr6.eq) goto loc_82BB7BC8;
loc_82BB7BB8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7BC8;
	sub_82BC68F0(ctx, base);
loc_82BB7BC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB7BD4;
	sub_822AF338(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB7BE4;
	sub_82BB5BD0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BB7BF4;
	sub_82BB5BD0(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x82bb7c58
	if (!ctx.cr6.eq) goto loc_82BB7C58;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb7c30
	if (!ctx.cr6.lt) goto loc_82BB7C30;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82bb7c30
	if (ctx.cr6.eq) goto loc_82BB7C30;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bb7c40
	if (ctx.cr6.eq) goto loc_82BB7C40;
loc_82BB7C30:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB7C40;
	sub_82BC68F0(ctx, base);
loc_82BB7C40:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BB7C4C;
	sub_82BC5A30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 ^ 1;
loc_82BB7C58:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB7C60;
	sub_82BB1E58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r28,r11,-8700
	ctx.r28.s64 = ctx.r11.s64 + -8700;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r10,-6344
	ctx.r6.s64 = ctx.r10.s64 + -6344;
	// addi r5,r9,-6332
	ctx.r5.s64 = ctx.r9.s64 + -6332;
	// lfs f0,-7896(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -7896);
	ctx.f0.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BB7C9C;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823f9ae0
	ctx.lr = 0x82BB7CAC;
	sub_823F9AE0(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82284810
	ctx.lr = 0x82BB7CB8;
	sub_82284810(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82bb7d28
	if (!ctx.cr6.eq) goto loc_82BB7D28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB7CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bb7d28
	if (!ctx.cr6.gt) goto loc_82BB7D28;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82BB7CF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB7D14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bb7cf0
	if (ctx.cr6.lt) goto loc_82BB7CF0;
loc_82BB7D28:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lfs f0,-18756(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -18756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r11,-6944
	ctx.r28.s64 = ctx.r11.s64 + -6944;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82BB7D78;
	sub_82CA2C60(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB7D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82bb7ee0
	if (ctx.cr6.eq) goto loc_82BB7EE0;
loc_82BB7DA8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bb7ec4
	if (ctx.cr6.eq) goto loc_82BB7EC4;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb7ec4
	if (ctx.cr6.eq) goto loc_82BB7EC4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BB7DD4;
	sub_82CA2C60(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB7DF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 + 188;
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f7,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f10,216(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfs f8,224(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f6,228(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stfs f5,248(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// beq cr6,0x82bb7e54
	if (ctx.cr6.eq) goto loc_82BB7E54;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82BB7E54:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bb7e7c
	if (ctx.cr6.eq) goto loc_82BB7E7C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82BB7E7C:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb43a0
	ctx.lr = 0x82BB7E88;
	sub_82BB43A0(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82bb7ea0
	if (ctx.cr6.gt) goto loc_82BB7EA0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BB7EA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb7ec4
	if (!ctx.cr6.eq) goto loc_82BB7EC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bb42a0
	ctx.lr = 0x82BB7EB8;
	sub_82BB42A0(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bb42a0
	ctx.lr = 0x82BB7EC4;
	sub_82BB42A0(ctx, base);
loc_82BB7EC4:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb7da8
	if (!ctx.cr6.eq) goto loc_82BB7DA8;
loc_82BB7EE0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82bb7f04
	if (ctx.cr6.eq) goto loc_82BB7F04;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// stfs f13,4(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
loc_82BB7F04:
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82bb7f28
	if (ctx.cr6.eq) goto loc_82BB7F28;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + 4, temp.u32);
	// stfs f12,8(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + 8, temp.u32);
loc_82BB7F28:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb7f40
	if (ctx.cr6.lt) goto loc_82BB7F40;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82BB7F40:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb7f70
	if (ctx.cr6.lt) goto loc_82BB7F70;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_82BB7F70:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r25,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r25.u32);
	// stw r7,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r7.u32);
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,176(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82ba8718
	ctx.lr = 0x82BB7F9C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BB7FA8;
	sub_82BA9068(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB7FB8"))) PPC_WEAK_FUNC(sub_82BB7FB8);
PPC_FUNC_IMPL(__imp__sub_82BB7FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB7FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb7ff4
	if (!ctx.cr6.lt) goto loc_82BB7FF4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb7ff4
	if (ctx.cr6.eq) goto loc_82BB7FF4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb800c
	if (ctx.cr6.eq) goto loc_82BB800C;
loc_82BB7FF4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82bc68f0
	ctx.lr = 0x82BB800C;
	sub_82BC68F0(ctx, base);
loc_82BB800C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB8018;
	sub_822AF338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BB8028;
	sub_82BBC658(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BB803C;
	sub_82CA2C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB8044;
	sub_82BB1E58(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,40(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB806C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lfs f13,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-8700(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8700);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,56(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,8(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,24(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 24, temp.u32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,32(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,36(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// stfs f4,56(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 56, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb80c8
	if (ctx.cr6.lt) goto loc_82BB80C8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BB80C8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB80F0"))) PPC_WEAK_FUNC(sub_82BB80F0);
PPC_FUNC_IMPL(__imp__sub_82BB80F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BB80F8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// addi r28,r10,1744
	ctx.r28.s64 = ctx.r10.s64 + 1744;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r22,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r22.s64 = ctx.r8.s32 >> 3;
	// bge cr6,0x82bb8140
	if (!ctx.cr6.lt) goto loc_82BB8140;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb8140
	if (ctx.cr6.eq) goto loc_82BB8140;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb8150
	if (ctx.cr6.eq) goto loc_82BB8150;
loc_82BB8140:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB8150;
	sub_82BC68F0(ctx, base);
loc_82BB8150:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB815C;
	sub_822AF338(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x82bb8214
	if (!ctx.cr6.gt) goto loc_82BB8214;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5870
	ctx.lr = 0x82BB8180;
	sub_82BC5870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb82e4
	if (ctx.cr6.eq) goto loc_82BB82E4;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb81a0
	if (ctx.cr6.lt) goto loc_82BB81A0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB81A0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb81f8
	if (ctx.cr6.eq) goto loc_82BB81F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB81B4;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb81c4
	if (!ctx.cr6.eq) goto loc_82BB81C4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bb8204
	goto loc_82BB8204;
loc_82BB81C4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb81e0
	if (ctx.cr6.lt) goto loc_82BB81E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB81E0;
	sub_8227B8B8(ctx, base);
loc_82BB81E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb81f8
	if (ctx.cr6.lt) goto loc_82BB81F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BB81F8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bb8214
	if (!ctx.cr0.eq) goto loc_82BB8214;
loc_82BB8204:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB8214;
	sub_82BC68F0(ctx, base);
loc_82BB8214:
	// cmpwi cr6,r22,3
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 3, ctx.xer);
	// bne cr6,0x82bb8264
	if (!ctx.cr6.eq) goto loc_82BB8264;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb8244
	if (!ctx.cr6.lt) goto loc_82BB8244;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb8244
	if (ctx.cr6.eq) goto loc_82BB8244;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb8254
	if (ctx.cr6.eq) goto loc_82BB8254;
loc_82BB8244:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB8254;
	sub_82BC68F0(ctx, base);
loc_82BB8254:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB8260;
	sub_822AF338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82BB8264:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb827c
	if (ctx.cr6.eq) goto loc_82BB827C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB8278;
	sub_82188CF0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82BB827C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB8284;
	sub_82BB1E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB8298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82bb856c
	if (ctx.cr6.eq) goto loc_82BB856C;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82bb8350
	if (!ctx.cr6.eq) goto loc_82BB8350;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9204
	ctx.r4.s64 = ctx.r10.s64 + -9204;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB82C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB82D4;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB82E4:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb8318
	if (!ctx.cr6.lt) goto loc_82BB8318;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb8318
	if (ctx.cr6.eq) goto loc_82BB8318;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bb8318
	if (!ctx.cr6.eq) goto loc_82BB8318;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB8310;
	sub_822AF338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82bb8214
	goto loc_82BB8214;
loc_82BB8318:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9236
	ctx.r4.s64 = ctx.r10.s64 + -9236;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8340;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB8350:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bb8394
	if (!ctx.cr6.eq) goto loc_82BB8394;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9164
	ctx.r4.s64 = ctx.r10.s64 + -9164;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8384;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB8394:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82BB8398:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82bb8400
	if (ctx.cr6.eq) goto loc_82BB8400;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb8398
	if (!ctx.cr6.eq) goto loc_82BB8398;
	// lbz r11,30(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 30);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82bb8438
	if (ctx.cr6.eq) goto loc_82BB8438;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82bb8438
	if (ctx.cr6.eq) goto loc_82BB8438;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb8438
	if (ctx.cr6.eq) goto loc_82BB8438;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9072
	ctx.r4.s64 = ctx.r10.s64 + -9072;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB83E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB83F0;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB8400:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9124
	ctx.r4.s64 = ctx.r10.s64 + -9124;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB841C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8428;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB8438:
	// lbz r11,30(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 30);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x82bb8534
	if (ctx.cr6.gt) goto loc_82BB8534;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82bb8534
	if (ctx.cr6.eq) goto loc_82BB8534;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bb8534
	if (ctx.cr6.eq) goto loc_82BB8534;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82bb8534
	if (ctx.cr6.eq) goto loc_82BB8534;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82bb8534
	if (ctx.cr6.eq) goto loc_82BB8534;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82BB8470:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB848C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb84a8
	if (!ctx.cr6.eq) goto loc_82BB84A8;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb8470
	if (!ctx.cr6.eq) goto loc_82BB8470;
	// b 0x82bb84ac
	goto loc_82BB84AC;
loc_82BB84A8:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82BB84AC:
	// lwz r30,12(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bb84f4
	if (ctx.cr6.eq) goto loc_82BB84F4;
loc_82BB84B8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB84D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb84f0
	if (!ctx.cr6.eq) goto loc_82BB84F0;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82bb84b8
	if (!ctx.cr6.eq) goto loc_82BB84B8;
	// b 0x82bb84f4
	goto loc_82BB84F4;
loc_82BB84F0:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82BB84F4:
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82bb856c
	if (ctx.cr6.eq) goto loc_82BB856C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-8972
	ctx.r4.s64 = ctx.r10.s64 + -8972;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8524;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB8534:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-9028
	ctx.r4.s64 = ctx.r10.s64 + -9028;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB855C;
	sub_82BC55B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB856C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823f99e8
	ctx.lr = 0x82BB8588;
	sub_823F99E8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823f99e8
	ctx.lr = 0x82BB859C;
	sub_823F99E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82284810
	ctx.lr = 0x82BB85A8;
	sub_82284810(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bb85f4
	if (!ctx.cr6.gt) goto loc_82BB85F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BB85BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB85E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bb85bc
	if (ctx.cr6.lt) goto loc_82BB85BC;
loc_82BB85F4:
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r11,28584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28584);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28584, ctx.r11.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82bb865c
	if (!ctx.cr6.gt) goto loc_82BB865C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-8916
	ctx.r4.s64 = ctx.r10.s64 + -8916;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8628;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8634;
	sub_82BC55B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823f9a78
	ctx.lr = 0x82BB8640;
	sub_823F9A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f9a78
	ctx.lr = 0x82BB864C;
	sub_823F9A78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BB865C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB8680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB8694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB86B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB86C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BB86DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,48(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 48);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BB86F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB8708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB871C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BB8734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28584);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,28584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28584, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bl 0x823f9a78
	ctx.lr = 0x82BB8770;
	sub_823F9A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f9a78
	ctx.lr = 0x82BB877C;
	sub_823F9A78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB878C"))) PPC_WEAK_FUNC(sub_82BB878C);
PPC_FUNC_IMPL(__imp__sub_82BB878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB8790"))) PPC_WEAK_FUNC(sub_82BB8790);
PPC_FUNC_IMPL(__imp__sub_82BB8790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BB8798;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r28,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 3;
	// blt cr6,0x82bb87c4
	if (ctx.cr6.lt) goto loc_82BB87C4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB87C4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// addi r30,r10,1744
	ctx.r30.s64 = ctx.r10.s64 + 1744;
	// beq cr6,0x82bb8828
	if (ctx.cr6.eq) goto loc_82BB8828;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB87E8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb87f8
	if (!ctx.cr6.eq) goto loc_82BB87F8;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// b 0x82bb8834
	goto loc_82BB8834;
loc_82BB87F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb8814
	if (ctx.cr6.lt) goto loc_82BB8814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB8814;
	sub_8227B8B8(ctx, base);
loc_82BB8814:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb8828
	if (ctx.cr6.lt) goto loc_82BB8828;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BB8828:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r24,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r24.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82bb8844
	if (!ctx.cr0.eq) goto loc_82BB8844;
loc_82BB8834:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB8844;
	sub_82BC68F0(ctx, base);
loc_82BB8844:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb886c
	if (!ctx.cr6.lt) goto loc_82BB886C;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bb886c
	if (ctx.cr6.eq) goto loc_82BB886C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb887c
	if (ctx.cr6.eq) goto loc_82BB887C;
loc_82BB886C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB887C;
	sub_82BC68F0(ctx, base);
loc_82BB887C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB8888;
	sub_822AF338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82bb88b4
	if (!ctx.cr6.eq) goto loc_82BB88B4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9f40
	ctx.lr = 0x82BB88AC;
	sub_82BB9F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82bb88e4
	goto loc_82BB88E4;
loc_82BB88B4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82bb88e4
	if (!ctx.cr6.eq) goto loc_82BB88E4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9f40
	ctx.lr = 0x82BB88CC;
	sub_82BB9F40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9f40
	ctx.lr = 0x82BB88E0;
	sub_82BB9F40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82BB88E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB88EC;
	sub_82BB1E58(ctx, base);
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// beq cr6,0x82bb8904
	if (ctx.cr6.eq) goto loc_82BB8904;
	// addi r26,r1,116
	ctx.r26.s64 = ctx.r1.s64 + 116;
loc_82BB8904:
	// clrlwi r28,r29,24
	ctx.r28.u64 = ctx.r29.u32 & 0xFF;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bb8918
	if (ctx.cr6.eq) goto loc_82BB8918;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_82BB8918:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82188cf0
	ctx.lr = 0x82BB8924;
	sub_82188CF0(ctx, base);
	// clrlwi r4,r3,1
	ctx.r4.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// lwz r11,24(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB894C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82bb8980
	if (!ctx.cr6.lt) goto loc_82BB8980;
loc_82BB895C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bb895c
	if (ctx.cr6.lt) goto loc_82BB895C;
loc_82BB8980:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r10,-8868
	ctx.r4.s64 = ctx.r10.s64 + -8868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB899C;
	sub_82BC5C08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1ed0
	ctx.lr = 0x82BB89A4;
	sub_82BB1ED0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB89B0"))) PPC_WEAK_FUNC(sub_82BB89B0);
PPC_FUNC_IMPL(__imp__sub_82BB89B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bb9068
	ctx.lr = 0x82BB89C4;
	sub_82BB9068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB89D8"))) PPC_WEAK_FUNC(sub_82BB89D8);
PPC_FUNC_IMPL(__imp__sub_82BB89D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb9068
	ctx.lr = 0x82BB89EC;
	sub_82BB9068(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB8A00"))) PPC_WEAK_FUNC(sub_82BB8A00);
PPC_FUNC_IMPL(__imp__sub_82BB8A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bb9600
	ctx.lr = 0x82BB8A14;
	sub_82BB9600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB8A28"))) PPC_WEAK_FUNC(sub_82BB8A28);
PPC_FUNC_IMPL(__imp__sub_82BB8A28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82bb9600
	ctx.lr = 0x82BB8A3C;
	sub_82BB9600(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB8A50"))) PPC_WEAK_FUNC(sub_82BB8A50);
PPC_FUNC_IMPL(__imp__sub_82BB8A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BB8A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb8be8
	if (ctx.cr6.eq) goto loc_82BB8BE8;
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10704
	ctx.r4.s64 = ctx.r11.s64 + 10704;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r28,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r8.s32 >> 3;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB8AA8;
	sub_8227B7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1548
	ctx.lr = 0x82BB8AB8;
	sub_821E1548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1548
	ctx.lr = 0x82BB8AC8;
	sub_821E1548(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821e1548
	ctx.lr = 0x82BB8AD8;
	sub_821E1548(ctx, base);
	// lhz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bb8b38
	if (!ctx.cr6.eq) goto loc_82BB8B38;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// bl 0x8219cda8
	ctx.lr = 0x82BB8AFC;
	sub_8219CDA8(ctx, base);
	// lhz r9,22(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// addi r27,r28,2
	ctx.r27.s64 = ctx.r28.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x821e1548
	ctx.lr = 0x82BB8B14;
	sub_821E1548(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5e98
	ctx.lr = 0x82BB8B20;
	sub_822A5E98(ctx, base);
	// lhz r8,22(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// bl 0x821e1548
	ctx.lr = 0x82BB8B34;
	sub_821E1548(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_82BB8B38:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lbz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82bb9d30
	ctx.lr = 0x82BB8B68;
	sub_82BB9D30(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r4,17(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82bb9d30
	ctx.lr = 0x82BB8B80;
	sub_82BB9D30(ctx, base);
	// addic. r4,r28,1
	ctx.xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r4.s64 = ctx.r28.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bne 0x82bb8b94
	if (!ctx.cr0.eq) goto loc_82BB8B94;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82bb8ba4
	goto loc_82BB8BA4;
loc_82BB8B94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BB8B9C;
	sub_82BC5448(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82BB8BA4:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r4,24864
	ctx.r4.s64 = ctx.r4.s64 + 24864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r8,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BB8BDC;
	sub_822C05F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8BE8;
	sub_82BC55B8(ctx, base);
loc_82BB8BE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB8BF0"))) PPC_WEAK_FUNC(sub_82BB8BF0);
PPC_FUNC_IMPL(__imp__sub_82BB8BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BB8BF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// stw r25,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r25.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// rlwinm r9,r10,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bb8f48
	if (ctx.cr6.eq) goto loc_82BB8F48;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb8c48
	if (ctx.cr6.eq) goto loc_82BB8C48;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb8f48
	if (!ctx.cr6.eq) goto loc_82BB8F48;
loc_82BB8C48:
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10704
	ctx.r4.s64 = ctx.r11.s64 + 10704;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r24,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 3;
	// bl 0x8227b7e0
	ctx.lr = 0x82BB8C74;
	sub_8227B7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1548
	ctx.lr = 0x82BB8C84;
	sub_821E1548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1548
	ctx.lr = 0x82BB8C94;
	sub_821E1548(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821e1548
	ctx.lr = 0x82BB8CA4;
	sub_821E1548(ctx, base);
	// lhz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bb8d08
	if (!ctx.cr6.eq) goto loc_82BB8D08;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// bl 0x8219cda8
	ctx.lr = 0x82BB8CCC;
	sub_8219CDA8(ctx, base);
	// lhz r9,22(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// addi r29,r24,2
	ctx.r29.s64 = ctx.r24.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// bl 0x821e1548
	ctx.lr = 0x82BB8CE4;
	sub_821E1548(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a5e98
	ctx.lr = 0x82BB8CF0;
	sub_822A5E98(ctx, base);
	// lhz r8,22(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// bl 0x821e1548
	ctx.lr = 0x82BB8D04;
	sub_821E1548(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82BB8D08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r5,r7,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r8,r4,30,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x7;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bgt cr6,0x82bb8f2c
	if (ctx.cr6.gt) goto loc_82BB8F2C;
	// lis r12,-32068
	ctx.r12.s64 = -2101608448;
	// addi r12,r12,-29308
	ctx.r12.s64 = ctx.r12.s64 + -29308;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u64) {
	case 0:
		goto loc_82BB8D9C;
	case 1:
		goto loc_82BB8D9C;
	case 2:
		goto loc_82BB8DF0;
	case 3:
		goto loc_82BB8E18;
	case 4:
		goto loc_82BB8E5C;
	case 5:
		goto loc_82BB8EDC;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-29284(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29284);
	// lwz r21,-29284(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29284);
	// lwz r21,-29200(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29200);
	// lwz r21,-29160(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29160);
	// lwz r21,-29092(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -29092);
	// lwz r21,-28964(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28964);
loc_82BB8D9C:
	// extsw r9,r25
	ctx.r9.s64 = ctx.r25.s32;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// extsw r8,r27
	ctx.r8.s64 = ctx.r27.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// b 0x82bb8f04
	goto loc_82BB8F04;
loc_82BB8DF0:
	// lfs f0,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82bb8ef8
	goto loc_82BB8EF8;
loc_82BB8E18:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// cntlzw r10,r27
	ctx.r10.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// cntlzw r9,r25
	ctx.r9.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// xori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 ^ 1;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// b 0x82bb8f04
	goto loc_82BB8F04;
loc_82BB8E5C:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,3224
	ctx.r30.s64 = ctx.r11.s64 + 3224;
	// bne cr6,0x82bb8e74
	if (!ctx.cr6.eq) goto loc_82BB8E74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB8E74:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BB8E78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bb8e78
	if (!ctx.cr6.eq) goto loc_82BB8E78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB8E9C;
	sub_8219CDA8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bb8eac
	if (!ctx.cr6.eq) goto loc_82BB8EAC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BB8EAC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82BB8EB0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb8eb0
	if (!ctx.cr6.eq) goto loc_82BB8EB0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB8ED8;
	sub_8219CDA8(ctx, base);
	// b 0x82bb8f04
	goto loc_82BB8F04;
loc_82BB8EDC:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82BB8EF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BB8F04:
	// addi r6,r24,1
	ctx.r6.s64 = ctx.r24.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821931e8
	ctx.lr = 0x82BB8F18;
	sub_821931E8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB8F24;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82BB8F2C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-8852
	ctx.r4.s64 = ctx.r10.s64 + -8852;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB8F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BB8F48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB8F50"))) PPC_WEAK_FUNC(sub_82BB8F50);
PPC_FUNC_IMPL(__imp__sub_82BB8F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BB8F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// srawi r26,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r8.s32 >> 3;
	// bl 0x821e1498
	ctx.lr = 0x82BB8F8C;
	sub_821E1498(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,-1
	ctx.r24.s64 = -1;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82bb9050
	if (!ctx.cr6.gt) goto loc_82BB9050;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BB8FC4:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb9034
	if (!ctx.cr6.eq) goto loc_82BB9034;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bb9034
	if (!ctx.cr6.eq) goto loc_82BB9034;
	// lhz r10,22(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lhz r9,22(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb9034
	if (!ctx.cr6.eq) goto loc_82BB9034;
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// lhz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bb9034
	if (!ctx.cr6.eq) goto loc_82BB9034;
	// addi r4,r26,1
	ctx.r4.s64 = ctx.r26.s64 + 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB901C;
	sub_821E1548(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5940
	ctx.lr = 0x82BB902C;
	sub_82BC5940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb904c
	if (!ctx.cr6.eq) goto loc_82BB904C;
loc_82BB9034:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bb8fc4
	if (ctx.cr6.lt) goto loc_82BB8FC4;
	// b 0x82bb9050
	goto loc_82BB9050;
loc_82BB904C:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82BB9050:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB905C;
	sub_82BC55B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9068"))) PPC_WEAK_FUNC(sub_82BB9068);
PPC_FUNC_IMPL(__imp__sub_82BB9068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82BB9070;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r20,r11,1876
	ctx.r20.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb9098
	if (ctx.cr6.lt) goto loc_82BB9098;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82BB9098:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r30,r11,1744
	ctx.r30.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bb90f8
	if (ctx.cr6.eq) goto loc_82BB90F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB90B8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb90c8
	if (!ctx.cr6.eq) goto loc_82BB90C8;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x82bb9104
	goto loc_82BB9104;
loc_82BB90C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb90e4
	if (ctx.cr6.lt) goto loc_82BB90E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB90E4;
	sub_8227B8B8(ctx, base);
loc_82BB90E4:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb90f8
	if (ctx.cr6.lt) goto loc_82BB90F8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82BB90F8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r26,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r26.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82bb9114
	if (!ctx.cr0.eq) goto loc_82BB9114;
loc_82BB9104:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB9114;
	sub_82BC68F0(ctx, base);
loc_82BB9114:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB911C;
	sub_82188CF0(ctx, base);
	// clrlwi r24,r3,1
	ctx.r24.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82bb91d0
	if (!ctx.cr6.eq) goto loc_82BB91D0;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-7044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7044);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bb9168
	if (ctx.cr6.eq) goto loc_82BB9168;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-7052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7052);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bb9168
	if (ctx.cr6.eq) goto loc_82BB9168;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-7048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7048);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bb9168
	if (ctx.cr6.eq) goto loc_82BB9168;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r11,-7040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7040);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bb91d0
	if (!ctx.cr6.eq) goto loc_82BB91D0;
loc_82BB9168:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-10936
	ctx.r5.s64 = ctx.r11.s64 + -10936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BB917C;
	sub_821E1408(ctx, base);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r9,-8792
	ctx.r4.s64 = ctx.r9.s64 + -8792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,18848(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18848);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB9198;
	sub_82BC5C08(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8219ee00
	ctx.lr = 0x82BB91AC;
	sub_8219EE00(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BB91D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb91f8
	if (!ctx.cr6.lt) goto loc_82BB91F8;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82bb91f8
	if (ctx.cr6.eq) goto loc_82BB91F8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bb9208
	if (ctx.cr6.eq) goto loc_82BB9208;
loc_82BB91F8:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB9208;
	sub_82BC68F0(ctx, base);
loc_82BB9208:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bb9230
	if (!ctx.cr6.lt) goto loc_82BB9230;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x82bb9230
	if (ctx.cr6.eq) goto loc_82BB9230;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb9240
	if (ctx.cr6.eq) goto loc_82BB9240;
loc_82BB9230:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB9240;
	sub_82BC68F0(ctx, base);
loc_82BB9240:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB924C;
	sub_822AF338(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB9260;
	sub_821E1548(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB926C;
	sub_822AF338(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r30,r10,-8728
	ctx.r30.s64 = ctx.r10.s64 + -8728;
	// addi r28,r8,-8612
	ctx.r28.s64 = ctx.r8.s64 + -8612;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BB9290;
	sub_82BA8718(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,387
	ctx.r7.s64 = 387;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB92A4;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// bl 0x82bb9c50
	ctx.lr = 0x82BB92C0;
	sub_82BB9C50(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB92D0;
	sub_82BB1E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9b60
	ctx.lr = 0x82BB92E0;
	sub_82BB9B60(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bb937c
	if (ctx.cr6.eq) goto loc_82BB937C;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// bl 0x8219cda8
	ctx.lr = 0x82BB9308;
	sub_8219CDA8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c88
	ctx.lr = 0x82BB9314;
	sub_82BC5C88(ctx, base);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11572
	ctx.r4.s64 = ctx.r8.s64 + -11572;
	// lwz r5,-10064(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10064);
	// bl 0x8219cda8
	ctx.lr = 0x82BB932C;
	sub_8219CDA8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c88
	ctx.lr = 0x82BB9338;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82bb935c
	if (ctx.cr6.eq) goto loc_82BB935C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82bcbd48
	ctx.lr = 0x82BB9354;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb9374
	if (ctx.cr6.eq) goto loc_82BB9374;
loc_82BB935C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BB9368;
	sub_82BC59D0(ctx, base);
	// sth r3,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r3.u16);
	// sth r27,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r27.u16);
	// b 0x82bb9384
	goto loc_82BB9384;
loc_82BB9374:
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x82bb9548
	goto loc_82BB9548;
loc_82BB937C:
	// sth r27,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r27.u16);
	// sth r22,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r22.u16);
loc_82BB9384:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb8f50
	ctx.lr = 0x82BB9398;
	sub_82BB8F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82bb9498
	if (!ctx.cr6.eq) goto loc_82BB9498;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82bb9438
	if (!ctx.cr6.lt) goto loc_82BB9438;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB93BC;
	sub_821E1548(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bb93d4
	if (ctx.cr6.lt) goto loc_82BB93D4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82BB93D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc77f0
	ctx.lr = 0x82BB93FC;
	sub_82BC77F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r10,-30128
	ctx.r6.s64 = ctx.r10.s64 + -30128;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB9428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bba130
	ctx.lr = 0x82BB9434;
	sub_82BBA130(ctx, base);
	// b 0x82bb95d8
	goto loc_82BB95D8;
loc_82BB9438:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r6,r8,-30128
	ctx.r6.s64 = ctx.r8.s64 + -30128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,112(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB946C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r10,-30128
	ctx.r6.s64 = ctx.r10.s64 + -30128;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB9494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb95d8
	goto loc_82BB95D8;
loc_82BB9498:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82bb9544
	if (ctx.cr6.lt) goto loc_82BB9544;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lis r9,-32068
	ctx.r9.s64 = -2101608448;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r6,r9,-30128
	ctx.r6.s64 = ctx.r9.s64 + -30128;
	// lwzx r25,r26,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB94D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r10,r27,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r27.s64;
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BB94F4;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB9510;
	sub_821E1548(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82bc78c0
	ctx.lr = 0x82BB9520;
	sub_82BC78C0(ctx, base);
	// bl 0x82ba8718
	ctx.lr = 0x82BB9524;
	sub_82BA8718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9530;
	sub_82BA9068(ctx, base);
	// bl 0x82ba8718
	ctx.lr = 0x82BB9534;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9540;
	sub_82BA9068(ctx, base);
	// b 0x82bb95d8
	goto loc_82BB95D8;
loc_82BB9544:
	// li r23,3
	ctx.r23.s64 = 3;
loc_82BB9548:
	// bl 0x82ba8718
	ctx.lr = 0x82BB954C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9558;
	sub_82BA9068(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-10936
	ctx.r5.s64 = ctx.r11.s64 + -10936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BB956C;
	sub_821E1408(ctx, base);
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// beq cr6,0x82bb95a4
	if (ctx.cr6.eq) goto loc_82BB95A4;
	// cmpwi cr6,r23,3
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 3, ctx.xer);
	// bne cr6,0x82bb95c4
	if (!ctx.cr6.eq) goto loc_82BB95C4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r8,-8536
	ctx.r4.s64 = ctx.r8.s64 + -8536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB95A0;
	sub_82BC5C08(ctx, base);
	// b 0x82bb95c4
	goto loc_82BB95C4;
loc_82BB95A4:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-8584
	ctx.r4.s64 = ctx.r8.s64 + -8584;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB95C4;
	sub_82BC5C08(ctx, base);
loc_82BB95C4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8219ee00
	ctx.lr = 0x82BB95D8;
	sub_8219EE00(ctx, base);
loc_82BB95D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r23
	ctx.r10.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9600"))) PPC_WEAK_FUNC(sub_82BB9600);
PPC_FUNC_IMPL(__imp__sub_82BB9600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BB9608;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r10,1876
	ctx.r30.s64 = ctx.r10.s64 + 1876;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r9,1744
	ctx.r29.s64 = ctx.r9.s64 + 1744;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bb964c
	if (!ctx.cr6.lt) goto loc_82BB964C;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb964c
	if (ctx.cr6.eq) goto loc_82BB964C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82bb965c
	if (ctx.cr6.eq) goto loc_82BB965C;
loc_82BB964C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB965C;
	sub_82BC68F0(ctx, base);
loc_82BB965C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,24
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 24, ctx.xer);
	// bne cr6,0x82bb9704
	if (!ctx.cr6.eq) goto loc_82BB9704;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r26,3
	ctx.r26.s64 = 3;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb9690
	if (ctx.cr6.lt) goto loc_82BB9690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB9690:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bb96e8
	if (ctx.cr6.eq) goto loc_82BB96E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BB96A4;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb96b4
	if (!ctx.cr6.eq) goto loc_82BB96B4;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x82bb96f4
	goto loc_82BB96F4;
loc_82BB96B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bb96d0
	if (ctx.cr6.lt) goto loc_82BB96D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BB96D0;
	sub_8227B8B8(ctx, base);
loc_82BB96D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bb96e8
	if (ctx.cr6.lt) goto loc_82BB96E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BB96E8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r28,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r28.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82bb9704
	if (!ctx.cr0.eq) goto loc_82BB9704;
loc_82BB96F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB9704;
	sub_82BC68F0(ctx, base);
loc_82BB9704:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BB9710;
	sub_82BC5448(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bb9724
	if (ctx.cr6.eq) goto loc_82BB9724;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82bb9734
	if (ctx.cr6.eq) goto loc_82BB9734;
loc_82BB9724:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BB9734;
	sub_82BC68F0(ctx, base);
loc_82BB9734:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BB9740;
	sub_822AF338(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821e1498
	ctx.lr = 0x82BB9754;
	sub_821E1498(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x822af338
	ctx.lr = 0x82BB9784;
	sub_822AF338(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r30,r6,-8728
	ctx.r30.s64 = ctx.r6.s64 + -8728;
	// addi r27,r4,-8612
	ctx.r27.s64 = ctx.r4.s64 + -8612;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BB97A8;
	sub_82BA8718(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,525
	ctx.r7.s64 = 525;
	// bl 0x82ba8f18
	ctx.lr = 0x82BB97BC;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// beq cr6,0x82bb97e8
	if (ctx.cr6.eq) goto loc_82BB97E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BB97DC;
	sub_82188CF0(ctx, base);
	// clrlwi r11,r3,5
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFF;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82bb97ec
	goto loc_82BB97EC;
loc_82BB97E8:
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
loc_82BB97EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9c50
	ctx.lr = 0x82BB97F4;
	sub_82BB9C50(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb1e58
	ctx.lr = 0x82BB9800;
	sub_82BB1E58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb9b60
	ctx.lr = 0x82BB9810;
	sub_82BB9B60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bb98ac
	if (ctx.cr6.eq) goto loc_82BB98AC;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,3488
	ctx.r4.s64 = ctx.r10.s64 + 3488;
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// bl 0x8219cda8
	ctx.lr = 0x82BB9838;
	sub_8219CDA8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c88
	ctx.lr = 0x82BB9844;
	sub_82BC5C88(ctx, base);
	// lis r9,-31950
	ctx.r9.s64 = -2093875200;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-11572
	ctx.r4.s64 = ctx.r8.s64 + -11572;
	// lwz r5,-10064(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10064);
	// bl 0x8219cda8
	ctx.lr = 0x82BB985C;
	sub_8219CDA8(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5c88
	ctx.lr = 0x82BB9868;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82bb988c
	if (ctx.cr6.eq) goto loc_82BB988C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82bcbd48
	ctx.lr = 0x82BB9884;
	sub_82BCBD48(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bb98a4
	if (ctx.cr6.eq) goto loc_82BB98A4;
loc_82BB988C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc59d0
	ctx.lr = 0x82BB9898;
	sub_82BC59D0(ctx, base);
	// sth r3,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r3.u16);
	// sth r24,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r24.u16);
	// b 0x82bb98b4
	goto loc_82BB98B4;
loc_82BB98A4:
	// li r24,2
	ctx.r24.s64 = 2;
	// b 0x82bb9aa4
	goto loc_82BB9AA4;
loc_82BB98AC:
	// sth r24,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r24.u16);
	// sth r23,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r23.u16);
loc_82BB98B4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb8f50
	ctx.lr = 0x82BB98C8;
	sub_82BB8F50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82bb99e8
	if (!ctx.cr6.eq) goto loc_82BB99E8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge cr6,0x82bb9970
	if (!ctx.cr6.lt) goto loc_82BB9970;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB98EC;
	sub_821E1548(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BB98F8;
	sub_82BC5448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc77f0
	ctx.lr = 0x82BB9928;
	sub_82BC77F0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BB9940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r4,-29712
	ctx.r5.s64 = ctx.r4.s64 + -29712;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB9960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bba130
	ctx.lr = 0x82BB996C;
	sub_82BBA130(ctx, base);
	// b 0x82bb9b34
	goto loc_82BB9B34;
loc_82BB9970:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB9990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32068
	ctx.r7.s64 = -2101608448;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r7,-29712
	ctx.r5.s64 = ctx.r7.s64 + -29712;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB99B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BB99C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32068
	ctx.r7.s64 = -2101608448;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r7,-29712
	ctx.r5.s64 = ctx.r7.s64 + -29712;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BB99E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bb9b34
	goto loc_82BB9B34;
loc_82BB99E8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82bb9aa0
	if (ctx.cr6.lt) goto loc_82BB9AA0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r26,r27,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwzx r28,r26,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB9A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r8,-29712
	ctx.r5.s64 = ctx.r8.s64 + -29712;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,64(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BB9A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// subf r10,r27,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r27.s64;
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82caa2e0
	ctx.lr = 0x82BB9A50;
	sub_82CAA2E0(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// stw r8,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1548
	ctx.lr = 0x82BB9A6C;
	sub_821E1548(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82bc78c0
	ctx.lr = 0x82BB9A7C;
	sub_82BC78C0(ctx, base);
	// bl 0x82ba8718
	ctx.lr = 0x82BB9A80;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9A8C;
	sub_82BA9068(ctx, base);
	// bl 0x82ba8718
	ctx.lr = 0x82BB9A90;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9A9C;
	sub_82BA9068(ctx, base);
	// b 0x82bb9b34
	goto loc_82BB9B34;
loc_82BB9AA0:
	// li r24,3
	ctx.r24.s64 = 3;
loc_82BB9AA4:
	// bl 0x82ba8718
	ctx.lr = 0x82BB9AA8;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82ba9068
	ctx.lr = 0x82BB9AB4;
	sub_82BA9068(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-10936
	ctx.r5.s64 = ctx.r11.s64 + -10936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BB9AC8;
	sub_821E1408(ctx, base);
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82bb9b00
	if (ctx.cr6.eq) goto loc_82BB9B00;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// bne cr6,0x82bb9b20
	if (!ctx.cr6.eq) goto loc_82BB9B20;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r8,-8416
	ctx.r4.s64 = ctx.r8.s64 + -8416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB9AFC;
	sub_82BC5C08(ctx, base);
	// b 0x82bb9b20
	goto loc_82BB9B20;
loc_82BB9B00:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,18848
	ctx.r9.s64 = ctx.r11.s64 + 18848;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,-8464
	ctx.r4.s64 = ctx.r8.s64 + -8464;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BB9B20;
	sub_82BC5C08(ctx, base);
loc_82BB9B20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x8219ee00
	ctx.lr = 0x82BB9B34;
	sub_8219EE00(ctx, base);
loc_82BB9B34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cntlzw r10,r24
	ctx.r10.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9B5C"))) PPC_WEAK_FUNC(sub_82BB9B5C);
PPC_FUNC_IMPL(__imp__sub_82BB9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9B60"))) PPC_WEAK_FUNC(sub_82BB9B60);
PPC_FUNC_IMPL(__imp__sub_82BB9B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BB9B68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r8,3488
	ctx.r4.s64 = ctx.r8.s64 + 3488;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r28,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r7.s32 >> 3;
	// bl 0x8219cda8
	ctx.lr = 0x82BB9B98;
	sub_8219CDA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x821cf230
	ctx.lr = 0x82BB9BA8;
	sub_821CF230(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r5,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r5.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82BB9BD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// lwz r4,-16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x822cdf48
	ctx.lr = 0x82BB9BE8;
	sub_822CDF48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82bb9c24
	if (ctx.cr6.eq) goto loc_82BB9C24;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5940
	ctx.lr = 0x82BB9C0C;
	sub_82BC5940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bb9c30
	if (!ctx.cr6.eq) goto loc_82BB9C30;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82bb9bd4
	goto loc_82BB9BD4;
loc_82BB9C24:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82bb9c34
	goto loc_82BB9C34;
loc_82BB9C30:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82BB9C34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB9C40;
	sub_82BC55B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BB9C4C"))) PPC_WEAK_FUNC(sub_82BB9C4C);
PPC_FUNC_IMPL(__imp__sub_82BB9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9C50"))) PPC_WEAK_FUNC(sub_82BB9C50);
PPC_FUNC_IMPL(__imp__sub_82BB9C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r8,3488
	ctx.r4.s64 = ctx.r8.s64 + 3488;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,-10068(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10068);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r31,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r7.s32 >> 3;
	// bl 0x8219cda8
	ctx.lr = 0x82BB9C8C;
	sub_8219CDA8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x821cf230
	ctx.lr = 0x82BB9C9C;
	sub_821CF230(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r5,-31950
	ctx.r5.s64 = -2093875200;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,-11556
	ctx.r4.s64 = ctx.r4.s64 + -11556;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,-10072(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10072);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// bl 0x8219cda8
	ctx.lr = 0x82BB9CCC;
	sub_8219CDA8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// bl 0x821cf230
	ctx.lr = 0x82BB9CDC;
	sub_821CF230(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bl 0x822af338
	ctx.lr = 0x82BB9D00;
	sub_822AF338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BB9D10;
	sub_82BC55B8(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9D2C"))) PPC_WEAK_FUNC(sub_82BB9D2C);
PPC_FUNC_IMPL(__imp__sub_82BB9D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BB9D30"))) PPC_WEAK_FUNC(sub_82BB9D30);
PPC_FUNC_IMPL(__imp__sub_82BB9D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82bb9f0c
	if (ctx.cr6.gt) goto loc_82BB9F0C;
	// lis r12,-32068
	ctx.r12.s64 = -2101608448;
	// addi r12,r12,-25236
	ctx.r12.s64 = ctx.r12.s64 + -25236;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BB9EDC;
	case 1:
		goto loc_82BB9D88;
	case 2:
		goto loc_82BB9D88;
	case 3:
		goto loc_82BB9DD4;
	case 4:
		goto loc_82BB9E0C;
	case 5:
		goto loc_82BB9E4C;
	case 6:
		goto loc_82BB9EA4;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-24868(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24868);
	// lwz r21,-25208(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25208);
	// lwz r21,-25208(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25208);
	// lwz r21,-25132(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25132);
	// lwz r21,-25076(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25076);
	// lwz r21,-25012(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -25012);
	// lwz r21,-24924(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24924);
loc_82BB9D88:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9DD4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9E0C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9E4C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bb9e64
	if (!ctx.cr6.eq) goto loc_82BB9E64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r10,3224
	ctx.r4.s64 = ctx.r10.s64 + 3224;
loc_82BB9E64:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82BB9E68:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82bb9e68
	if (!ctx.cr6.eq) goto loc_82BB9E68;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BB9E8C;
	sub_8219CDA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9EA4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9EDC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BB9F0C:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-8336
	ctx.r4.s64 = ctx.r10.s64 + -8336;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BB9F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BB9F40"))) PPC_WEAK_FUNC(sub_82BB9F40);
PPC_FUNC_IMPL(__imp__sub_82BB9F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BB9F48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82bc5448
	ctx.lr = 0x82BB9F60;
	sub_82BC5448(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r10,r11,1876
	ctx.r10.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bba108
	if (ctx.cr6.eq) goto loc_82BBA108;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82bba108
	if (ctx.cr6.gt) goto loc_82BBA108;
	// lis r12,-32068
	ctx.r12.s64 = -2101608448;
	// addi r12,r12,-24684
	ctx.r12.s64 = ctx.r12.s64 + -24684;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BBA0F8;
	case 1:
		goto loc_82BB9FD0;
	case 2:
		goto loc_82BBA0D8;
	case 3:
		goto loc_82BB9FB4;
	case 4:
		goto loc_82BB9FF8;
	case 5:
		goto loc_82BBA108;
	case 6:
		goto loc_82BBA108;
	case 7:
		goto loc_82BBA0D8;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-24328(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24328);
	// lwz r21,-24624(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24624);
	// lwz r21,-24360(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24360);
	// lwz r21,-24652(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24652);
	// lwz r21,-24584(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24584);
	// lwz r21,-24312(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24312);
	// lwz r21,-24312(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24312);
	// lwz r21,-24360(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24360);
loc_82BB9FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188568
	ctx.lr = 0x82BB9FC0;
	sub_82188568(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BB9FD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5a30
	ctx.lr = 0x82BB9FDC;
	sub_82BC5A30(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BB9FF8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r28,r11,-8728
	ctx.r28.s64 = ctx.r11.s64 + -8728;
	// addi r26,r10,-15140
	ctx.r26.s64 = ctx.r10.s64 + -15140;
	// bl 0x82ba8718
	ctx.lr = 0x82BBA00C;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,766
	ctx.r7.s64 = 766;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBA020;
	sub_82BA8F18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bba0c4
	if (ctx.cr6.eq) goto loc_82BBA0C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BBA038;
	sub_82BC5448(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bba088
	if (ctx.cr6.eq) goto loc_82BBA088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBA050;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bba060
	if (!ctx.cr6.eq) goto loc_82BBA060;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82bba090
	goto loc_82BBA090;
loc_82BBA060:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bba07c
	if (ctx.cr6.lt) goto loc_82BBA07C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBA07C;
	sub_8227B8B8(ctx, base);
loc_82BBA07C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5448
	ctx.lr = 0x82BBA088;
	sub_82BC5448(ctx, base);
loc_82BBA088:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82BBA090:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// sth r29,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r29.u16);
	// sth r29,6(r28)
	PPC_STORE_U16(ctx.r28.u32 + 6, ctx.r29.u16);
	// beq cr6,0x82bba0b0
	if (ctx.cr6.eq) goto loc_82BBA0B0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ba8850
	ctx.lr = 0x82BBA0B0;
	sub_82BA8850(ctx, base);
loc_82BBA0B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBA0C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBA0D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBA0E4;
	sub_822AF338(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBA0F8:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBA108:
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-8312
	ctx.r4.s64 = ctx.r10.s64 + -8312;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBA124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA130"))) PPC_WEAK_FUNC(sub_82BBA130);
PPC_FUNC_IMPL(__imp__sub_82BBA130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bba190
	if (!ctx.cr6.eq) goto loc_82BBA190;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BBA190;
	sub_82BBF648(ctx, base);
loc_82BBA190:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBA1D4"))) PPC_WEAK_FUNC(sub_82BBA1D4);
PPC_FUNC_IMPL(__imp__sub_82BBA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBA1D8"))) PPC_WEAK_FUNC(sub_82BBA1D8);
PPC_FUNC_IMPL(__imp__sub_82BBA1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBA1E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-8240
	ctx.r4.s64 = ctx.r10.s64 + -8240;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r29,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 3;
	// bl 0x82bc6c30
	ctx.lr = 0x82BBA204;
	sub_82BC6C30(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r30,r7,-8208
	ctx.r30.s64 = ctx.r7.s64 + -8208;
	// lwz r11,-8208(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bba248
	if (ctx.cr6.eq) goto loc_82BBA248;
loc_82BBA218:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA228;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBA238;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bba218
	if (!ctx.cr6.eq) goto loc_82BBA218;
loc_82BBA248:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BBA254;
	sub_82BC55B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9496
	ctx.r4.s64 = ctx.r11.s64 + -9496;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA264;
	sub_8219CDA8(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22984
	ctx.r4.s64 = ctx.r10.s64 + -22984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA278;
	sub_8227B7E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba294
	if (ctx.cr6.lt) goto loc_82BBA294;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA294:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA2A8;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA2C8;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-22360
	ctx.r4.s64 = ctx.r8.s64 + -22360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA2DC;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba2f0
	if (ctx.cr6.lt) goto loc_82BBA2F0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA2F0:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA304;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA324;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-20328
	ctx.r4.s64 = ctx.r8.s64 + -20328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA338;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba34c
	if (ctx.cr6.lt) goto loc_82BBA34C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA34C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA360;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26372
	ctx.r4.s64 = ctx.r10.s64 + 26372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA380;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-21408
	ctx.r4.s64 = ctx.r8.s64 + -21408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA394;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba3a8
	if (ctx.cr6.lt) goto loc_82BBA3A8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA3A8:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA3BC;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26380
	ctx.r4.s64 = ctx.r10.s64 + 26380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA3DC;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-21104
	ctx.r4.s64 = ctx.r8.s64 + -21104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA3F0;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba404
	if (ctx.cr6.lt) goto loc_82BBA404;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA404:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA418;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,26388
	ctx.r4.s64 = ctx.r10.s64 + 26388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA438;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-20808
	ctx.r4.s64 = ctx.r8.s64 + -20808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA44C;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba460
	if (ctx.cr6.lt) goto loc_82BBA460;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA460:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA474;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBA494;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-20656
	ctx.r4.s64 = ctx.r8.s64 + -20656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBA4A8;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba4bc
	if (ctx.cr6.lt) goto loc_82BBA4BC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBA4BC:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBA4D0;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,-8224
	ctx.r5.s64 = ctx.r10.s64 + -8224;
	// addi r4,r8,-3232
	ctx.r4.s64 = ctx.r8.s64 + -3232;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BBA4F8;
	sub_82BC7060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BBA504;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA50C"))) PPC_WEAK_FUNC(sub_82BBA50C);
PPC_FUNC_IMPL(__imp__sub_82BBA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBA510"))) PPC_WEAK_FUNC(sub_82BBA510);
PPC_FUNC_IMPL(__imp__sub_82BBA510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BBA518;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r27,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bbb168
	ctx.lr = 0x82BBA534;
	sub_82BBB168(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bba558
	if (!ctx.cr6.lt) goto loc_82BBA558;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bba560
	if (!ctx.cr6.eq) goto loc_82BBA560;
loc_82BBA558:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bba564
	goto loc_82BBA564;
loc_82BBA560:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BBA564:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82bba598
	if (!ctx.cr6.eq) goto loc_82BBA598;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BBA598:
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r27,r4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bba5dc
	if (!ctx.cr6.eq) goto loc_82BBA5DC;
	// bl 0x82bbb108
	ctx.lr = 0x82BBA5AC;
	sub_82BBB108(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bba628
	if (ctx.cr6.eq) goto loc_82BBA628;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BBA5DC:
	// addi r28,r29,3
	ctx.r28.s64 = ctx.r29.s64 + 3;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82bba61c
	if (!ctx.cr6.eq) goto loc_82BBA61C;
	// bl 0x821885c0
	ctx.lr = 0x82BBA5EC;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBA5FC;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBA60C;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BBA61C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBA628;
	sub_82BC6A18(ctx, base);
loc_82BBA628:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA634"))) PPC_WEAK_FUNC(sub_82BBA634);
PPC_FUNC_IMPL(__imp__sub_82BBA634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBA638"))) PPC_WEAK_FUNC(sub_82BBA638);
PPC_FUNC_IMPL(__imp__sub_82BBA638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBA640;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBA650;
	sub_82BBB108(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bba674
	if (ctx.cr6.lt) goto loc_82BBA674;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BBA674:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bba6d0
	if (ctx.cr6.eq) goto loc_82BBA6D0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBA68C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bba69c
	if (!ctx.cr6.eq) goto loc_82BBA69C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bba6dc
	goto loc_82BBA6DC;
loc_82BBA69C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bba6b8
	if (ctx.cr6.lt) goto loc_82BBA6B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBA6B8;
	sub_8227B8B8(ctx, base);
loc_82BBA6B8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bba6d0
	if (ctx.cr6.lt) goto loc_82BBA6D0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BBA6D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bba6f4
	if (!ctx.cr0.eq) goto loc_82BBA6F4;
loc_82BBA6DC:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBA6F4;
	sub_82BC68F0(ctx, base);
loc_82BBA6F4:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BBA700:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bba724
	if (ctx.cr6.eq) goto loc_82BBA724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bba700
	if (ctx.cr6.eq) goto loc_82BBA700;
loc_82BBA724:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bba758
	if (!ctx.cr6.eq) goto loc_82BBA758;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBA758:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BBA764:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bba788
	if (ctx.cr6.eq) goto loc_82BBA788;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bba764
	if (ctx.cr6.eq) goto loc_82BBA764;
loc_82BBA788:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bba7bc
	if (!ctx.cr6.eq) goto loc_82BBA7BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBA7BC:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BBA7C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bba7ec
	if (ctx.cr6.eq) goto loc_82BBA7EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bba7c8
	if (ctx.cr6.eq) goto loc_82BBA7C8;
loc_82BBA7EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bba820
	if (!ctx.cr6.eq) goto loc_82BBA820;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBA820:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BBA82C;
	sub_82BC5D40(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bba844
	if (ctx.cr6.lt) goto loc_82BBA844;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BBA844:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5c88
	ctx.lr = 0x82BBA86C;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bba898
	if (ctx.cr6.eq) goto loc_82BBA898;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bba898
	if (!ctx.cr6.eq) goto loc_82BBA898;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBA898;
	sub_82BC6A18(ctx, base);
loc_82BBA898:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBA8A4"))) PPC_WEAK_FUNC(sub_82BBA8A4);
PPC_FUNC_IMPL(__imp__sub_82BBA8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBA8A8"))) PPC_WEAK_FUNC(sub_82BBA8A8);
PPC_FUNC_IMPL(__imp__sub_82BBA8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBA8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBA8C0;
	sub_82BBB108(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,1876
	ctx.r31.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bba8e4
	if (ctx.cr6.lt) goto loc_82BBA8E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BBA8E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82bba940
	if (ctx.cr6.eq) goto loc_82BBA940;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBA8FC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bba90c
	if (!ctx.cr6.eq) goto loc_82BBA90C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bba94c
	goto loc_82BBA94C;
loc_82BBA90C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bba928
	if (ctx.cr6.lt) goto loc_82BBA928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBA928;
	sub_8227B8B8(ctx, base);
loc_82BBA928:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bba940
	if (ctx.cr6.lt) goto loc_82BBA940;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BBA940:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bba964
	if (!ctx.cr0.eq) goto loc_82BBA964;
loc_82BBA94C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBA964;
	sub_82BC68F0(ctx, base);
loc_82BBA964:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBA970;
	sub_821885C0(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9824
	ctx.r10.s64 = ctx.r10.s64 + -9824;
loc_82BBA97C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bba9a0
	if (ctx.cr6.eq) goto loc_82BBA9A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bba97c
	if (ctx.cr6.eq) goto loc_82BBA97C;
loc_82BBA9A0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bba9b8
	if (!ctx.cr6.eq) goto loc_82BBA9B8;
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBA9B8:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9820
	ctx.r10.s64 = ctx.r10.s64 + -9820;
loc_82BBA9C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bba9e8
	if (ctx.cr6.eq) goto loc_82BBA9E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bba9c4
	if (ctx.cr6.eq) goto loc_82BBA9C4;
loc_82BBA9E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bbaa00
	if (!ctx.cr6.eq) goto loc_82BBAA00;
	// stfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBAA00:
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-9816
	ctx.r10.s64 = ctx.r10.s64 + -9816;
loc_82BBAA0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bbaa30
	if (ctx.cr6.eq) goto loc_82BBAA30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bbaa0c
	if (ctx.cr6.eq) goto loc_82BBAA0C;
loc_82BBAA30:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82bbaa48
	if (!ctx.cr6.eq) goto loc_82BBAA48;
	// stfs f1,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBAA48:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBAA58;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBAA64"))) PPC_WEAK_FUNC(sub_82BBAA64);
PPC_FUNC_IMPL(__imp__sub_82BBAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBAA68"))) PPC_WEAK_FUNC(sub_82BBAA68);
PPC_FUNC_IMPL(__imp__sub_82BBAA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAA88;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAA98;
	sub_82BBB108(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82bbaab8
	if (ctx.cr6.eq) goto loc_82BBAAB8;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82BBAAB8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbaad0
	if (ctx.cr6.lt) goto loc_82BBAAD0;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBAAD0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAB08"))) PPC_WEAK_FUNC(sub_82BBAB08);
PPC_FUNC_IMPL(__imp__sub_82BBAB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAB28;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBAB38;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBAB48;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBAB58;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbab74
	if (ctx.cr6.lt) goto loc_82BBAB74;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBAB74:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBABAC"))) PPC_WEAK_FUNC(sub_82BBABAC);
PPC_FUNC_IMPL(__imp__sub_82BBABAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBABB0"))) PPC_WEAK_FUNC(sub_82BBABB0);
PPC_FUNC_IMPL(__imp__sub_82BBABB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBABD0;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBABE0;
	sub_82BBB108(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbac28
	if (ctx.cr6.lt) goto loc_82BBAC28;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBAC28:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAC60"))) PPC_WEAK_FUNC(sub_82BBAC60);
PPC_FUNC_IMPL(__imp__sub_82BBAC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBAC68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAC78;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAC88;
	sub_82BBB108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb168
	ctx.lr = 0x82BBAC94;
	sub_82BBB168(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fadds f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bbacd8
	if (ctx.cr6.eq) goto loc_82BBACD8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BBACD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBACE0"))) PPC_WEAK_FUNC(sub_82BBACE0);
PPC_FUNC_IMPL(__imp__sub_82BBACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAD00;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAD10;
	sub_82BBB108(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbad58
	if (ctx.cr6.lt) goto loc_82BBAD58;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBAD58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAD90"))) PPC_WEAK_FUNC(sub_82BBAD90);
PPC_FUNC_IMPL(__imp__sub_82BBAD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBAD98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBADA8;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bbb108
	ctx.lr = 0x82BBADB8;
	sub_82BBB108(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb168
	ctx.lr = 0x82BBADC4;
	sub_82BBB168(ctx, base);
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bbae08
	if (ctx.cr6.eq) goto loc_82BBAE08;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BBAE08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBAE10"))) PPC_WEAK_FUNC(sub_82BBAE10);
PPC_FUNC_IMPL(__imp__sub_82BBAE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAE30;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBAE40;
	sub_821885C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f9,f12,f1
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbae7c
	if (ctx.cr6.lt) goto loc_82BBAE7C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBAE7C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAEB4"))) PPC_WEAK_FUNC(sub_82BBAEB4);
PPC_FUNC_IMPL(__imp__sub_82BBAEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBAEB8"))) PPC_WEAK_FUNC(sub_82BBAEB8);
PPC_FUNC_IMPL(__imp__sub_82BBAEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAEDC;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBAEEC;
	sub_821885C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82bbb168
	ctx.lr = 0x82BBAEF8;
	sub_82BBB168(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82bbaf30
	if (ctx.cr6.eq) goto loc_82BBAF30;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82BBAF30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAF4C"))) PPC_WEAK_FUNC(sub_82BBAF4C);
PPC_FUNC_IMPL(__imp__sub_82BBAF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBAF50"))) PPC_WEAK_FUNC(sub_82BBAF50);
PPC_FUNC_IMPL(__imp__sub_82BBAF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAF70;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAF80;
	sub_82BBB108(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bb2d38
	ctx.lr = 0x82BBAF90;
	sub_82BB2D38(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBAFD4"))) PPC_WEAK_FUNC(sub_82BBAFD4);
PPC_FUNC_IMPL(__imp__sub_82BBAFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBAFD8"))) PPC_WEAK_FUNC(sub_82BBAFD8);
PPC_FUNC_IMPL(__imp__sub_82BBAFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBAFE0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBAFF4;
	sub_82BBB108(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBB004;
	sub_82BB5BD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f2,f11
	ctx.f2.f64 = double(float(sqrt(ctx.f11.f64)));
	// bl 0x8219ec50
	ctx.lr = 0x82BBB024;
	sub_8219EC50(ctx, base);
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fneg f31,f9
	ctx.f31.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// bl 0x8219ec50
	ctx.lr = 0x82BBB03C;
	sub_8219EC50(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb06c
	if (ctx.cr6.lt) goto loc_82BBB06C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBB06C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB098"))) PPC_WEAK_FUNC(sub_82BBB098);
PPC_FUNC_IMPL(__imp__sub_82BBB098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbb108
	ctx.lr = 0x82BBB0B4;
	sub_82BBB108(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-8144
	ctx.r4.s64 = ctx.r10.s64 + -8144;
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82bc5c08
	ctx.lr = 0x82BBB0EC;
	sub_82BC5C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB104"))) PPC_WEAK_FUNC(sub_82BBB104);
PPC_FUNC_IMPL(__imp__sub_82BBB104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB108"))) PPC_WEAK_FUNC(sub_82BBB108);
PPC_FUNC_IMPL(__imp__sub_82BBB108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-8240
	ctx.r5.s64 = ctx.r11.s64 + -8240;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BBB12C;
	sub_82BC6CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bbb14c
	if (!ctx.cr6.eq) goto loc_82BBB14C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-8264
	ctx.r5.s64 = ctx.r11.s64 + -8264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BBB14C;
	sub_82BC67F0(ctx, base);
loc_82BBB14C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB168"))) PPC_WEAK_FUNC(sub_82BBB168);
PPC_FUNC_IMPL(__imp__sub_82BBB168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bc6558
	ctx.lr = 0x82BBB188;
	sub_82BC6558(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8240
	ctx.r5.s64 = ctx.r11.s64 + -8240;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// bl 0x821e1408
	ctx.lr = 0x82BBB1A0;
	sub_821E1408(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BBB1AC;
	sub_82BC5FF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB1C8"))) PPC_WEAK_FUNC(sub_82BBB1C8);
PPC_FUNC_IMPL(__imp__sub_82BBB1C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6552
	ctx.r9.s64 = ctx.r10.s64 + 6552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// bl 0x82cc0620
	ctx.lr = 0x82BBB200;
	sub_82CC0620(ctx, base);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// bl 0x82bbb228
	ctx.lr = 0x82BBB210;
	sub_82BBB228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB228"))) PPC_WEAK_FUNC(sub_82BBB228);
PPC_FUNC_IMPL(__imp__sub_82BBB228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbb288
	if (!ctx.cr6.eq) goto loc_82BBB288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x82BBB250;
	sub_8221EB58(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,16960
	ctx.r9.u64 = ctx.r11.u64 | 16960;
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// mulld r6,r8,r9
	ctx.r6.s64 = ctx.r8.s64 * ctx.r9.s64;
	// divd r5,r6,r7
	ctx.r5.s64 = ctx.r6.s64 / ctx.r7.s64;
	// std r5,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r5.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBB288:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB2A4"))) PPC_WEAK_FUNC(sub_82BBB2A4);
PPC_FUNC_IMPL(__imp__sub_82BBB2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB2A8"))) PPC_WEAK_FUNC(sub_82BBB2A8);
PPC_FUNC_IMPL(__imp__sub_82BBB2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbb310
	if (ctx.cr6.eq) goto loc_82BBB310;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x82BBB2D0;
	sub_8221EB58(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,16960
	ctx.r9.u64 = ctx.r11.u64 | 16960;
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// mulld r6,r8,r9
	ctx.r6.s64 = ctx.r8.s64 * ctx.r9.s64;
	// stb r10,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r10.u8);
	// divd r4,r6,r7
	ctx.r4.s64 = ctx.r6.s64 / ctx.r7.s64;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBB310:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB32C"))) PPC_WEAK_FUNC(sub_82BBB32C);
PPC_FUNC_IMPL(__imp__sub_82BBB32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB330"))) PPC_WEAK_FUNC(sub_82BBB330);
PPC_FUNC_IMPL(__imp__sub_82BBB330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbb388
	if (ctx.cr6.eq) goto loc_82BBB388;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8221eb58
	ctx.lr = 0x82BBB358;
	sub_8221EB58(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r10,r11,16960
	ctx.r10.u64 = ctx.r11.u64 | 16960;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// mulld r7,r9,r10
	ctx.r7.s64 = ctx.r9.s64 * ctx.r10.s64;
	// divd r6,r7,r8
	ctx.r6.s64 = ctx.r7.s64 / ctx.r8.s64;
	// std r6,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r6.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBB388:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBB3A4"))) PPC_WEAK_FUNC(sub_82BBB3A4);
PPC_FUNC_IMPL(__imp__sub_82BBB3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB3A8"))) PPC_WEAK_FUNC(sub_82BBB3A8);
PPC_FUNC_IMPL(__imp__sub_82BBB3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBB3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r4,r10,-7976
	ctx.r4.s64 = ctx.r10.s64 + -7976;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r29,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r8.s32 >> 3;
	// bl 0x82bc6c30
	ctx.lr = 0x82BBB3D4;
	sub_82BC6C30(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r30,r7,-7944
	ctx.r30.s64 = ctx.r7.s64 + -7944;
	// lwz r11,-7944(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -7944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbb418
	if (ctx.cr6.eq) goto loc_82BBB418;
loc_82BBB3E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBB3F8;
	sub_8227B7E0(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBB408;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbb3e8
	if (!ctx.cr6.eq) goto loc_82BBB3E8;
loc_82BBB418:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BBB424;
	sub_82BC55B8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-9496
	ctx.r4.s64 = ctx.r11.s64 + -9496;
	// bl 0x8219cda8
	ctx.lr = 0x82BBB434;
	sub_8219CDA8(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBB448;
	sub_8227B7E0(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb464
	if (ctx.cr6.lt) goto loc_82BBB464;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBB464:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBB478;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBB498;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-18232
	ctx.r4.s64 = ctx.r8.s64 + -18232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBB4AC;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb4c0
	if (ctx.cr6.lt) goto loc_82BBB4C0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBB4C0:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBB4D4;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,10
	ctx.r5.s64 = 10;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,4196
	ctx.r4.s64 = ctx.r10.s64 + 4196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBB4F4;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-15040
	ctx.r4.s64 = ctx.r8.s64 + -15040;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBB508;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb51c
	if (ctx.cr6.lt) goto loc_82BBB51C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBB51C:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBB530;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r4,r10,12888
	ctx.r4.s64 = ctx.r10.s64 + 12888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBB550;
	sub_8219CDA8(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,-16424
	ctx.r4.s64 = ctx.r8.s64 + -16424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBB564;
	sub_8227B7E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb578
	if (ctx.cr6.lt) goto loc_82BBB578;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82BBB578:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBB58C;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r5,r10,-7964
	ctx.r5.s64 = ctx.r10.s64 + -7964;
	// addi r4,r8,-7984
	ctx.r4.s64 = ctx.r8.s64 + -7984;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7060
	ctx.lr = 0x82BBB5B4;
	sub_82BC7060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc55b8
	ctx.lr = 0x82BBB5C0;
	sub_82BC55B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB5C8"))) PPC_WEAK_FUNC(sub_82BBB5C8);
PPC_FUNC_IMPL(__imp__sub_82BBB5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBB5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 3;
	// bl 0x82bc6558
	ctx.lr = 0x82BBB5F0;
	sub_82BC6558(ctx, base);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r8,-7976
	ctx.r5.s64 = ctx.r8.s64 + -7976;
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBB608;
	sub_821E1408(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5ff0
	ctx.lr = 0x82BBB614;
	sub_82BC5FF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82bbb634
	if (!ctx.cr6.lt) goto loc_82BBB634;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r10,1876
	ctx.r9.s64 = ctx.r10.s64 + 1876;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bbb63c
	if (!ctx.cr6.eq) goto loc_82BBB63C;
loc_82BBB634:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82bbb640
	goto loc_82BBB640;
loc_82BBB63C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82BBB640:
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bbb674
	if (!ctx.cr6.eq) goto loc_82BBB674;
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBB668;
	sub_82CA2C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBB674:
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82bbb6a4
	if (!ctx.cr6.eq) goto loc_82BBB6A4;
	// bl 0x82bbc658
	ctx.lr = 0x82BBB688;
	sub_82BBC658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBB698;
	sub_82CA2C60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBB6A4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBB6B0;
	sub_82BC6A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB6BC"))) PPC_WEAK_FUNC(sub_82BBB6BC);
PPC_FUNC_IMPL(__imp__sub_82BBB6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBB6C0"))) PPC_WEAK_FUNC(sub_82BBB6C0);
PPC_FUNC_IMPL(__imp__sub_82BBB6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBB6C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBB6D8;
	sub_82BBC658(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,1876
	ctx.r29.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbb6fc
	if (ctx.cr6.lt) goto loc_82BBB6FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BBB6FC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbb754
	if (ctx.cr6.eq) goto loc_82BBB754;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBB710;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbb720
	if (!ctx.cr6.eq) goto loc_82BBB720;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bbb760
	goto loc_82BBB760;
loc_82BBB720:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbb73c
	if (ctx.cr6.lt) goto loc_82BBB73C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBB73C;
	sub_8227B8B8(ctx, base);
loc_82BBB73C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbb754
	if (ctx.cr6.lt) goto loc_82BBB754;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82BBB754:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bbb778
	if (!ctx.cr0.eq) goto loc_82BBB778;
loc_82BBB760:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBB778;
	sub_82BC68F0(ctx, base);
loc_82BBB778:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82BBB788:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82bbb788
	if (!ctx.cr6.eq) goto loc_82BBB788;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bne cr6,0x82bbb7b8
	if (!ctx.cr6.eq) goto loc_82BBB7B8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82bbb7bc
	if (ctx.cr6.eq) goto loc_82BBB7BC;
loc_82BBB7B8:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82BBB7BC:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbb800
	if (!ctx.cr6.eq) goto loc_82BBB800;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addic. r10,r9,-49
	ctx.xer.ca = ctx.r9.u32 > 48;
	ctx.r10.s64 = ctx.r9.s64 + -49;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r11,-49
	ctx.r9.s64 = ctx.r11.s64 + -49;
	// blt 0x82bbb7fc
	if (ctx.cr0.lt) goto loc_82BBB7FC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x82bbb7fc
	if (ctx.cr6.gt) goto loc_82BBB7FC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82bbb7fc
	if (ctx.cr6.lt) goto loc_82BBB7FC;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82bbb800
	if (!ctx.cr6.gt) goto loc_82BBB800;
loc_82BBB7FC:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82BBB800:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbb844
	if (!ctx.cr6.eq) goto loc_82BBB844;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBB844:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5d40
	ctx.lr = 0x82BBB850;
	sub_82BC5D40(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbb868
	if (ctx.cr6.lt) goto loc_82BBB868;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82BBB868:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5c88
	ctx.lr = 0x82BBB890;
	sub_82BC5C88(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82bbb8bc
	if (ctx.cr6.eq) goto loc_82BBB8BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82bbb8bc
	if (!ctx.cr6.eq) goto loc_82BBB8BC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBB8BC;
	sub_82BC6A18(ctx, base);
loc_82BBB8BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBB8C8"))) PPC_WEAK_FUNC(sub_82BBB8C8);
PPC_FUNC_IMPL(__imp__sub_82BBB8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBB8D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBB8E0;
	sub_82BBC658(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,1876
	ctx.r31.s64 = ctx.r11.s64 + 1876;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbb904
	if (ctx.cr6.lt) goto loc_82BBB904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BBB904:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbb95c
	if (ctx.cr6.eq) goto loc_82BBB95C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBB918;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbb928
	if (!ctx.cr6.eq) goto loc_82BBB928;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82bbb968
	goto loc_82BBB968;
loc_82BBB928:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbb944
	if (ctx.cr6.lt) goto loc_82BBB944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBB944;
	sub_8227B8B8(ctx, base);
loc_82BBB944:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbb95c
	if (ctx.cr6.lt) goto loc_82BBB95C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82BBB95C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r31,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r31.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82bbb980
	if (!ctx.cr0.eq) goto loc_82BBB980;
loc_82BBB968:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBB980;
	sub_82BC68F0(ctx, base);
loc_82BBB980:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BBB98C;
	sub_82BC6F00(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82BBB9A0:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82bbb9a0
	if (!ctx.cr6.eq) goto loc_82BBB9A0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// bne cr6,0x82bbb9d0
	if (!ctx.cr6.eq) goto loc_82BBB9D0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82bbb9d4
	if (ctx.cr6.eq) goto loc_82BBB9D4;
loc_82BBB9D0:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82BBB9D4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbba18
	if (!ctx.cr6.eq) goto loc_82BBBA18;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addic. r10,r9,-49
	ctx.xer.ca = ctx.r9.u32 > 48;
	ctx.r10.s64 = ctx.r9.s64 + -49;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r11,-49
	ctx.r9.s64 = ctx.r11.s64 + -49;
	// blt 0x82bbba14
	if (ctx.cr0.lt) goto loc_82BBBA14;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x82bbba14
	if (ctx.cr6.gt) goto loc_82BBBA14;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82bbba14
	if (ctx.cr6.lt) goto loc_82BBBA14;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82bbba18
	if (!ctx.cr6.gt) goto loc_82BBBA18;
loc_82BBBA14:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82BBBA18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbba54
	if (!ctx.cr6.eq) goto loc_82BBBA54;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// stfsx f12,r5,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBBA54:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBBA64;
	sub_82BC6A18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBBA70"))) PPC_WEAK_FUNC(sub_82BBBA70);
PPC_FUNC_IMPL(__imp__sub_82BBBA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBA90;
	sub_82BBC658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBAA0;
	sub_82BBC658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBBAB0;
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbbac8
	if (ctx.cr6.lt) goto loc_82BBBAC8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBBAC8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBB00"))) PPC_WEAK_FUNC(sub_82BBBB00);
PPC_FUNC_IMPL(__imp__sub_82BBBB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBB20;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,136
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 136, ctx.xer);
	// beq cr6,0x82bbbb4c
	if (ctx.cr6.eq) goto loc_82BBBB4C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBBB4C;
	sub_82BC6A18(ctx, base);
loc_82BBBB4C:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBB58;
	sub_821885C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBB68;
	sub_821885C0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBB78;
	sub_821885C0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBB88;
	sub_821885C0(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBB98;
	sub_821885C0(ctx, base);
	// stfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBA8;
	sub_821885C0(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBB8;
	sub_821885C0(ctx, base);
	// stfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBC8;
	sub_821885C0(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBD8;
	sub_821885C0(ctx, base);
	// stfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBE8;
	sub_821885C0(ctx, base);
	// stfs f1,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBBF8;
	sub_821885C0(ctx, base);
	// stfs f1,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBC08;
	sub_821885C0(ctx, base);
	// stfs f1,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBC18;
	sub_821885C0(ctx, base);
	// stfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBC28;
	sub_821885C0(ctx, base);
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBC38;
	sub_821885C0(ctx, base);
	// stfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBC48;
	sub_821885C0(ctx, base);
	// stfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbbc64
	if (ctx.cr6.lt) goto loc_82BBBC64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBBC64:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBC9C"))) PPC_WEAK_FUNC(sub_82BBBC9C);
PPC_FUNC_IMPL(__imp__sub_82BBBC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBCA0"))) PPC_WEAK_FUNC(sub_82BBBCA0);
PPC_FUNC_IMPL(__imp__sub_82BBBCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBCC8;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbbd0c
	if (!ctx.cr6.eq) goto loc_82BBBD0C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBBCF0;
	sub_82BB5BD0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// b 0x82bbbd58
	goto loc_82BBBD58;
loc_82BBBD0C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bbbd4c
	if (!ctx.cr6.eq) goto loc_82BBBD4C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBBD1C;
	sub_821885C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBD2C;
	sub_821885C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBD3C;
	sub_821885C0(ctx, base);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,20(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stfs f1,40(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// b 0x82bbbd58
	goto loc_82BBBD58;
loc_82BBBD4C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBBD58;
	sub_82BC6A18(ctx, base);
loc_82BBBD58:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbbd70
	if (ctx.cr6.lt) goto loc_82BBBD70;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBBD70:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBDB0"))) PPC_WEAK_FUNC(sub_82BBBDB0);
PPC_FUNC_IMPL(__imp__sub_82BBBDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBDD4;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbbe14
	if (!ctx.cr6.eq) goto loc_82BBBE14;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBBDFC;
	sub_82BB5BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d8ff8
	ctx.lr = 0x82BBBE10;
	sub_822D8FF8(ctx, base);
	// b 0x82bbbe70
	goto loc_82BBBE70;
loc_82BBBE14:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bbbe64
	if (!ctx.cr6.eq) goto loc_82BBBE64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBBE24;
	sub_821885C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBE34;
	sub_821885C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821885c0
	ctx.lr = 0x82BBBE48;
	sub_821885C0(ctx, base);
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d8ff8
	ctx.lr = 0x82BBBE60;
	sub_822D8FF8(ctx, base);
	// b 0x82bbbe70
	goto loc_82BBBE70;
loc_82BBBE64:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBBE70;
	sub_82BC6A18(ctx, base);
loc_82BBBE70:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbbe88
	if (ctx.cr6.lt) goto loc_82BBBE88;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBBE88:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBEC4"))) PPC_WEAK_FUNC(sub_82BBBEC4);
PPC_FUNC_IMPL(__imp__sub_82BBBEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBBEC8"))) PPC_WEAK_FUNC(sub_82BBBEC8);
PPC_FUNC_IMPL(__imp__sub_82BBBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBEF0;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbbf34
	if (!ctx.cr6.eq) goto loc_82BBBF34;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBBF18;
	sub_82BB5BD0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,56(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x82bbbf80
	goto loc_82BBBF80;
loc_82BBBF34:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bbbf74
	if (!ctx.cr6.eq) goto loc_82BBBF74;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBBF44;
	sub_821885C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBF54;
	sub_821885C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBBF64;
	sub_821885C0(ctx, base);
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f30,52(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f1,56(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x82bbbf80
	goto loc_82BBBF80;
loc_82BBBF74:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBBF80;
	sub_82BC6A18(ctx, base);
loc_82BBBF80:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbbf98
	if (ctx.cr6.lt) goto loc_82BBBF98;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBBF98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBBFD8"))) PPC_WEAK_FUNC(sub_82BBBFD8);
PPC_FUNC_IMPL(__imp__sub_82BBBFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBBFF8;
	sub_82BBC658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC008;
	sub_82BBC658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82bb3998
	ctx.lr = 0x82BBC018;
	sub_82BB3998(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC05C"))) PPC_WEAK_FUNC(sub_82BBC05C);
PPC_FUNC_IMPL(__imp__sub_82BBC05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC060"))) PPC_WEAK_FUNC(sub_82BBC060);
PPC_FUNC_IMPL(__imp__sub_82BBC060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC07C;
	sub_82BBC658(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBC08C;
	sub_82CA2C60(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbc0a4
	if (ctx.cr6.lt) goto loc_82BBC0A4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBC0A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC0D8"))) PPC_WEAK_FUNC(sub_82BBC0D8);
PPC_FUNC_IMPL(__imp__sub_82BBC0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC0F4;
	sub_82BBC658(ctx, base);
	// bl 0x82bb3740
	ctx.lr = 0x82BBC0F8;
	sub_82BB3740(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC12C"))) PPC_WEAK_FUNC(sub_82BBC12C);
PPC_FUNC_IMPL(__imp__sub_82BBC12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC130"))) PPC_WEAK_FUNC(sub_82BBC130);
PPC_FUNC_IMPL(__imp__sub_82BBC130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC14C;
	sub_82BBC658(ctx, base);
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-6944
	ctx.r4.s64 = ctx.r11.s64 + -6944;
	// bl 0x82bb3998
	ctx.lr = 0x82BBC15C;
	sub_82BB3998(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC19C"))) PPC_WEAK_FUNC(sub_82BBC19C);
PPC_FUNC_IMPL(__imp__sub_82BBC19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC1A0"))) PPC_WEAK_FUNC(sub_82BBC1A0);
PPC_FUNC_IMPL(__imp__sub_82BBC1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC1C0;
	sub_82BBC658(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC1D0;
	sub_82BBC658(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8229dbd8
	ctx.lr = 0x82BBC1DC;
	sub_8229DBD8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbc1f4
	if (ctx.cr6.lt) goto loc_82BBC1F4;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBC1F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC22C"))) PPC_WEAK_FUNC(sub_82BBC22C);
PPC_FUNC_IMPL(__imp__sub_82BBC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC230"))) PPC_WEAK_FUNC(sub_82BBC230);
PPC_FUNC_IMPL(__imp__sub_82BBC230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC254;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbc28c
	if (!ctx.cr6.eq) goto loc_82BBC28C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBC27C;
	sub_82BB5BD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb36a8
	ctx.lr = 0x82BBC288;
	sub_82BB36A8(ctx, base);
	// b 0x82bbc2e0
	goto loc_82BBC2E0;
loc_82BBC28C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bbc2d4
	if (!ctx.cr6.eq) goto loc_82BBC2D4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBC29C;
	sub_821885C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBC2AC;
	sub_821885C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821885c0
	ctx.lr = 0x82BBC2C0;
	sub_821885C0(ctx, base);
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bb36a8
	ctx.lr = 0x82BBC2D0;
	sub_82BB36A8(ctx, base);
	// b 0x82bbc2e0
	goto loc_82BBC2E0;
loc_82BBC2D4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBC2E0;
	sub_82BC6A18(ctx, base);
loc_82BBC2E0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbc2f8
	if (ctx.cr6.lt) goto loc_82BBC2F8;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBC2F8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC334"))) PPC_WEAK_FUNC(sub_82BBC334);
PPC_FUNC_IMPL(__imp__sub_82BBC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC338"))) PPC_WEAK_FUNC(sub_82BBC338);
PPC_FUNC_IMPL(__imp__sub_82BBC338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC360;
	sub_82BBC658(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82bbc3bc
	if (!ctx.cr6.eq) goto loc_82BBC3BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82bb5bd0
	ctx.lr = 0x82BBC388;
	sub_82BB5BD0(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,48(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f8,52(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,56(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x82bbc420
	goto loc_82BBC420;
loc_82BBC3BC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82bbc414
	if (!ctx.cr6.eq) goto loc_82BBC414;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821885c0
	ctx.lr = 0x82BBC3CC;
	sub_821885C0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBC3DC;
	sub_821885C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x821885c0
	ctx.lr = 0x82BBC3EC;
	sub_821885C0(ctx, base);
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f11,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fadds f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f12,48(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f10,52(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f9,56(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// b 0x82bbc420
	goto loc_82BBC420;
loc_82BBC414:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-10060
	ctx.r4.s64 = ctx.r11.s64 + -10060;
	// bl 0x82bc6a18
	ctx.lr = 0x82BBC420;
	sub_82BC6A18(ctx, base);
loc_82BBC420:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbc438
	if (ctx.cr6.lt) goto loc_82BBC438;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBC438:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC478"))) PPC_WEAK_FUNC(sub_82BBC478);
PPC_FUNC_IMPL(__imp__sub_82BBC478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC494;
	sub_82BBC658(ctx, base);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f9,48(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f7,36(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f5,52(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f3,56(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbc50c
	if (ctx.cr6.lt) goto loc_82BBC50C;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r10,r10,1876
	ctx.r10.s64 = ctx.r10.s64 + 1876;
loc_82BBC50C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC540"))) PPC_WEAK_FUNC(sub_82BBC540);
PPC_FUNC_IMPL(__imp__sub_82BBC540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc658
	ctx.lr = 0x82BBC560;
	sub_82BBC658(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3336
	ctx.r4.s64 = ctx.r11.s64 + 3336;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x8219cda8
	ctx.lr = 0x82BBC578;
	sub_8219CDA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x821cf230
	ctx.lr = 0x82BBC588;
	sub_821CF230(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,9492
	ctx.r5.s64 = ctx.r9.s64 + 9492;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// bl 0x821e1408
	ctx.lr = 0x82BBC5B4;
	sub_821E1408(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// li r5,103
	ctx.r5.s64 = 103;
	// addi r4,r6,-7832
	ctx.r4.s64 = ctx.r6.s64 + -7832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cda8
	ctx.lr = 0x82BBC5C8;
	sub_8219CDA8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82BBC5D4:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82BBC5D8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bne 0x82bbc5d8
	if (!ctx.cr0.eq) goto loc_82BBC5D8;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82bbc5d4
	if (!ctx.cr0.eq) goto loc_82BBC5D4;
	// addi r11,r9,-144
	ctx.r11.s64 = ctx.r9.s64 + -144;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r8,24864
	ctx.r4.s64 = ctx.r8.s64 + 24864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x822c05f8
	ctx.lr = 0x82BBC638;
	sub_822C05F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC654"))) PPC_WEAK_FUNC(sub_82BBC654);
PPC_FUNC_IMPL(__imp__sub_82BBC654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC658"))) PPC_WEAK_FUNC(sub_82BBC658);
PPC_FUNC_IMPL(__imp__sub_82BBC658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-7976
	ctx.r5.s64 = ctx.r11.s64 + -7976;
	// bl 0x82bc6ce8
	ctx.lr = 0x82BBC67C;
	sub_82BC6CE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82bbc69c
	if (!ctx.cr6.eq) goto loc_82BBC69C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-8004
	ctx.r5.s64 = ctx.r11.s64 + -8004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc67f0
	ctx.lr = 0x82BBC69C;
	sub_82BC67F0(ctx, base);
loc_82BBC69C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC6B8"))) PPC_WEAK_FUNC(sub_82BBC6B8);
PPC_FUNC_IMPL(__imp__sub_82BBC6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBC6C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7716
	ctx.r11.s64 = ctx.r11.s64 + -7716;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82bbc718
	if (ctx.cr6.eq) goto loc_82BBC718;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBC6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,19048(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19048);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBC710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BBC718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBC720"))) PPC_WEAK_FUNC(sub_82BBC720);
PPC_FUNC_IMPL(__imp__sub_82BBC720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bbc770
	ctx.lr = 0x82BBC740;
	sub_82BBC770(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbc758
	if (ctx.cr6.eq) goto loc_82BBC758;
	// bl 0x8221be68
	ctx.lr = 0x82BBC754;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BBC758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC770"))) PPC_WEAK_FUNC(sub_82BBC770);
PPC_FUNC_IMPL(__imp__sub_82BBC770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-7716
	ctx.r10.s64 = ctx.r11.s64 + -7716;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbc7b4
	if (ctx.cr6.eq) goto loc_82BBC7B4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,19052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19052);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBC7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BBC7B4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-7728
	ctx.r10.s64 = ctx.r11.s64 + -7728;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC7D4"))) PPC_WEAK_FUNC(sub_82BBC7D4);
PPC_FUNC_IMPL(__imp__sub_82BBC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC7D8"))) PPC_WEAK_FUNC(sub_82BBC7D8);
PPC_FUNC_IMPL(__imp__sub_82BBC7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBC7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBC800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,19048(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19048);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBC818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBC824"))) PPC_WEAK_FUNC(sub_82BBC824);
PPC_FUNC_IMPL(__imp__sub_82BBC824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC828"))) PPC_WEAK_FUNC(sub_82BBC828);
PPC_FUNC_IMPL(__imp__sub_82BBC828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbc860
	if (ctx.cr6.eq) goto loc_82BBC860;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,19052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19052);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBC858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82BBC860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBC874"))) PPC_WEAK_FUNC(sub_82BBC874);
PPC_FUNC_IMPL(__imp__sub_82BBC874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC878"))) PPC_WEAK_FUNC(sub_82BBC878);
PPC_FUNC_IMPL(__imp__sub_82BBC878) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,19056(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19056);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BBC898"))) PPC_WEAK_FUNC(sub_82BBC898);
PPC_FUNC_IMPL(__imp__sub_82BBC898) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,19060(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19060);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82BBC8B8"))) PPC_WEAK_FUNC(sub_82BBC8B8);
PPC_FUNC_IMPL(__imp__sub_82BBC8B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBC8C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbc90c
	if (ctx.cr6.eq) goto loc_82BBC90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBC8E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbc90c
	if (ctx.cr6.eq) goto loc_82BBC90C;
	// lwz r29,-12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// bl 0x82ba8718
	ctx.lr = 0x82BBC900;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBC90C;
	sub_82BA9068(ctx, base);
loc_82BBC90C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBC91C"))) PPC_WEAK_FUNC(sub_82BBC91C);
PPC_FUNC_IMPL(__imp__sub_82BBC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBC920"))) PPC_WEAK_FUNC(sub_82BBC920);
PPC_FUNC_IMPL(__imp__sub_82BBC920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBC928;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82bbc968
	if (ctx.cr0.lt) goto loc_82BBC968;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82BBC940:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// beq cr6,0x82bbc960
	if (ctx.cr6.eq) goto loc_82BBC960;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82bbc940
	if (!ctx.cr0.lt) goto loc_82BBC940;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBC960:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82bbc974
	if (!ctx.cr6.eq) goto loc_82BBC974;
loc_82BBC968:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBC974:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8798
	ctx.lr = 0x82BBC97C;
	sub_82BA8798(ctx, base);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82bbc990
	if (!ctx.cr6.gt) goto loc_82BBC990;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BBC990:
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r29.u16);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82BBC9A8;
	sub_82CAA2E0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// stbx r31,r9,r29
	PPC_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r31.u8);
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82bbc9e8
	if (ctx.cr6.eq) goto loc_82BBC9E8;
loc_82BBC9C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x82BBC9D0;
	sub_821EE9E8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r3,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r3.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lhz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82bbc9c0
	if (ctx.cr6.lt) goto loc_82BBC9C0;
loc_82BBC9E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBCA00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8800
	ctx.lr = 0x82BBCA0C;
	sub_82BA8800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBCA18"))) PPC_WEAK_FUNC(sub_82BBCA18);
PPC_FUNC_IMPL(__imp__sub_82BBCA18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bbca68
	ctx.lr = 0x82BBCA38;
	sub_82BBCA68(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbca50
	if (ctx.cr6.eq) goto loc_82BBCA50;
	// bl 0x8221be68
	ctx.lr = 0x82BBCA4C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BBCA50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBCA68"))) PPC_WEAK_FUNC(sub_82BBCA68);
PPC_FUNC_IMPL(__imp__sub_82BBCA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BBCA70;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r24,r23,4
	ctx.r24.s64 = ctx.r23.s64 + 4;
	// addi r10,r11,-7236
	ctx.r10.s64 = ctx.r11.s64 + -7236;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r26,36(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// lwz r9,44(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// rotlwi r11,r26,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bbccc4
	if (ctx.cr6.eq) goto loc_82BBCCC4;
loc_82BBCAA8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r9,r25,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bbcc00
	if (ctx.cr6.eq) goto loc_82BBCC00;
loc_82BBCAD4:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbcb24
	if (ctx.cr6.eq) goto loc_82BBCB24;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbcb10
	if (ctx.cr6.eq) goto loc_82BBCB10;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCAF8;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCB04;
	sub_82BA9068(ctx, base);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82BBCB10:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BBCB18;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCB24;
	sub_82BA9068(ctx, base);
loc_82BBCB24:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82bbcbd4
	if (!ctx.cr6.eq) goto loc_82BBCBD4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bbcbd4
	if (!ctx.cr6.gt) goto loc_82BBCBD4;
loc_82BBCB44:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbcbc0
	if (ctx.cr6.eq) goto loc_82BBCBC0;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bbcb94
	if (ctx.cr6.eq) goto loc_82BBCB94;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCB7C;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCB88;
	sub_82BA9068(ctx, base);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82BBCB94:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBCBB4;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCBC0;
	sub_82BA9068(ctx, base);
loc_82BBCBC0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bbcb44
	if (ctx.cr6.lt) goto loc_82BBCB44;
loc_82BBCBD4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,12
	ctx.r25.s64 = ctx.r25.s64 + 12;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbcad4
	if (!ctx.cr6.eq) goto loc_82BBCAD4;
loc_82BBCC00:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbcca8
	if (ctx.cr6.eq) goto loc_82BBCCA8;
	// stw r28,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r28.u32);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r29,96(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82ba8718
	ctx.lr = 0x82BBCC20;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCC2C;
	sub_82BA9068(ctx, base);
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCC50;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCC5C;
	sub_82BA9068(ctx, base);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbcc94
	if (ctx.cr6.eq) goto loc_82BBCC94;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCC7C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCC88;
	sub_82BA9068(ctx, base);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82BBCC94:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BBCC9C;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCCA8;
	sub_82BA9068(ctx, base);
loc_82BBCCA8:
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82bbcaa8
	if (!ctx.cr6.eq) goto loc_82BBCAA8;
loc_82BBCCC4:
	// stw r28,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r28.u32);
	// lwz r31,36(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// lwz r30,32(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBCCD4;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCCE0;
	sub_82BA9068(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r28,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r28.u32);
	// addi r10,r11,-7184
	ctx.r10.s64 = ctx.r11.s64 + -7184;
	// stw r28,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r28.u32);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBCCFC"))) PPC_WEAK_FUNC(sub_82BBCCFC);
PPC_FUNC_IMPL(__imp__sub_82BBCCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBCD00"))) PPC_WEAK_FUNC(sub_82BBCD00);
PPC_FUNC_IMPL(__imp__sub_82BBCD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BBCD08;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r21,r11,-7528
	ctx.r21.s64 = ctx.r11.s64 + -7528;
	// addi r31,r10,-7420
	ctx.r31.s64 = ctx.r10.s64 + -7420;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCD34;
	sub_82BA8718(ctx, base);
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,101
	ctx.r7.s64 = 101;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBCD48;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,-6332
	ctx.r30.s64 = ctx.r11.s64 + -6332;
	// li r25,0
	ctx.r25.s64 = 0;
	// beq cr6,0x82bbcdf0
	if (ctx.cr6.eq) goto loc_82BBCDF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// sth r25,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r25.u16);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// sth r25,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r25.u16);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// stw r25,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r25.u32);
	// addi r24,r10,-6344
	ctx.r24.s64 = ctx.r10.s64 + -6344;
	// stw r25,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBCDA4;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbdae0
	ctx.lr = 0x82BBCDB4;
	sub_82BBDAE0(ctx, base);
	// stfs f31,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// stw r25,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r25.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r25,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBCDDC;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbdba0
	ctx.lr = 0x82BBCDEC;
	sub_82BBDBA0(ctx, base);
	// b 0x82bbcdf4
	goto loc_82BBCDF4;
loc_82BBCDF0:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82BBCDF4:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// sth r25,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r25.u16);
	// sth r25,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r25.u16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82bbce20
	if (ctx.cr6.eq) goto loc_82BBCE20;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ba8850
	ctx.lr = 0x82BBCE1C;
	sub_82BA8850(ctx, base);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82BBCE20:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba8ac8
	ctx.lr = 0x82BBCE2C;
	sub_82BA8AC8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82bbce4c
	if (ctx.cr6.eq) goto loc_82BBCE4C;
	// lhz r11,110(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBCE40;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBCE4C;
	sub_82BA9068(ctx, base);
loc_82BBCE4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBCE54;
	sub_82188CF0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,-7404
	ctx.r6.s64 = ctx.r11.s64 + -7404;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBCE74;
	sub_82CA3EB8(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r10,-7384
	ctx.r6.s64 = ctx.r10.s64 + -7384;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBCE90;
	sub_82CA3EB8(ctx, base);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bbcedc
	if (!ctx.cr6.eq) goto loc_82BBCEDC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BBCEDC;
	sub_82BBF648(ctx, base);
loc_82BBCEDC:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-5636
	ctx.r6.s64 = ctx.r9.s64 + -5636;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stwx r31,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r31.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r5.u32);
	// lwz r4,16(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82BBCF24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r10,11936
	ctx.r4.s64 = ctx.r10.s64 + 11936;
	// lwz r9,19048(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19048);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBCF40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBCF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,4
	ctx.r5.s64 = 4;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r6,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r6.u8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBCF90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r22,r31,12
	ctx.r22.s64 = ctx.r31.s64 + 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBCFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82bbdae0
	ctx.lr = 0x82BBCFC0;
	sub_82BBDAE0(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r4,r8,r9
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// bl 0x82bbdba0
	ctx.lr = 0x82BBCFD8;
	sub_82BBDBA0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r24,-31951
	ctx.r24.s64 = -2093940736;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// addi r23,r11,-15140
	ctx.r23.s64 = ctx.r11.s64 + -15140;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82bbd0a4
	if (!ctx.cr6.gt) goto loc_82BBD0A4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82BBCFF8:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBD014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19056);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBD030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBD034;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBD048;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbd070
	if (ctx.cr6.eq) goto loc_82BBD070;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r25,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r25.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// sth r25,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r25.u16);
	// bl 0x82ba8850
	ctx.lr = 0x82BBD06C;
	sub_82BA8850(ctx, base);
	// b 0x82bbd074
	goto loc_82BBD074;
loc_82BBD070:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82BBD074:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stwx r30,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBD084;
	sub_82188CF0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82bbcff8
	if (ctx.cr6.lt) goto loc_82BBCFF8;
loc_82BBD0A4:
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19056);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBD0BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbd108
	if (!ctx.cr6.gt) goto loc_82BBD108;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82BBD0D0:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// xori r9,r3,1
	ctx.r9.u64 = ctx.r3.u64 ^ 1;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbd0d0
	if (ctx.cr6.lt) goto loc_82BBD0D0;
loc_82BBD108:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbd214
	if (!ctx.cr6.gt) goto loc_82BBD214;
loc_82BBD118:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbd204
	if (!ctx.cr6.gt) goto loc_82BBD204;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82BBD128:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mullw r11,r26,r10
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r10.s32);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82bbd170
	if (ctx.cr6.eq) goto loc_82BBD170;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBD16C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bbd1f0
	goto loc_82BBD1F0;
loc_82BBD170:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBD184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19056);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBD1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBD1A4;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r7,152
	ctx.r7.s64 = 152;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBD1B8;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbd1e0
	if (ctx.cr6.eq) goto loc_82BBD1E0;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r25,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r25.u16);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// sth r25,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r25.u16);
	// bl 0x82ba8850
	ctx.lr = 0x82BBD1DC;
	sub_82BA8850(ctx, base);
	// b 0x82bbd1e4
	goto loc_82BBD1E4;
loc_82BBD1E0:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82BBD1E4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
loc_82BBD1F0:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbd128
	if (ctx.cr6.lt) goto loc_82BBD128;
loc_82BBD204:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bbd118
	if (ctx.cr6.lt) goto loc_82BBD118;
loc_82BBD214:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,-7716
	ctx.r10.s64 = ctx.r11.s64 + -7716;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82bbd23c
	if (ctx.cr6.eq) goto loc_82BBD23C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,19052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19052);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBD23C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BBD23C:
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBD248"))) PPC_WEAK_FUNC(sub_82BBD248);
PPC_FUNC_IMPL(__imp__sub_82BBD248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBD264;
	sub_82188CF0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbd298
	if (!ctx.cr6.gt) goto loc_82BBD298;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82BBD278:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bbd2b0
	if (ctx.cr6.eq) goto loc_82BBD2B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbd278
	if (ctx.cr6.lt) goto loc_82BBD278;
loc_82BBD298:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBD2B0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD2C8"))) PPC_WEAK_FUNC(sub_82BBD2C8);
PPC_FUNC_IMPL(__imp__sub_82BBD2C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bbd848
	ctx.lr = 0x82BBD2E4;
	sub_82BBD848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBD2F0;
	sub_82188CF0(ctx, base);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbd324
	if (!ctx.cr6.gt) goto loc_82BBD324;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82BBD308:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bbd340
	if (ctx.cr6.eq) goto loc_82BBD340;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbd308
	if (ctx.cr6.lt) goto loc_82BBD308;
loc_82BBD324:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BBD328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBD340:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x82bbd328
	goto loc_82BBD328;
}

__attribute__((alias("__imp__sub_82BBD348"))) PPC_WEAK_FUNC(sub_82BBD348);
PPC_FUNC_IMPL(__imp__sub_82BBD348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBD350;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82bbd8f0
	ctx.lr = 0x82BBD374;
	sub_82BBD8F0(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbd46c
	if (ctx.cr6.eq) goto loc_82BBD46C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd46c
	if (ctx.cr6.eq) goto loc_82BBD46C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82bbd3f8
	if (ctx.cr6.eq) goto loc_82BBD3F8;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r9,-7368
	ctx.r6.s64 = ctx.r9.s64 + -7368;
	// addi r5,r8,-7280
	ctx.r5.s64 = ctx.r8.s64 + -7280;
	// addi r10,r11,-13604
	ctx.r10.s64 = ctx.r11.s64 + -13604;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBD3CC;
	sub_82CA3EB8(ctx, base);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,19068(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19068);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BBD3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBD3F8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82bbd46c
	if (!ctx.cr6.gt) goto loc_82BBD46C;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lfs f0,-27468(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
loc_82BBD42C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// mfcr r7
	ctx.r7.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r7.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r7.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r7.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r7.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r7.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r7.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r7.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r7.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r7.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r7.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r7.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r7.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r7.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r7.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r7.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r7.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r7.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r7.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r7.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r7.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r7.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r7.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r7.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r7.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r7.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r7.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r7.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r7.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r7.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r7.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r7.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f10,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f12,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// blt cr6,0x82bbd470
	if (ctx.cr6.lt) goto loc_82BBD470;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bbd42c
	if (ctx.cr6.lt) goto loc_82BBD42C;
loc_82BBD46C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BBD470:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBD480"))) PPC_WEAK_FUNC(sub_82BBD480);
PPC_FUNC_IMPL(__imp__sub_82BBD480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBD488;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82bbd8f0
	ctx.lr = 0x82BBD4A0;
	sub_82BBD8F0(ctx, base);
	// lwz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbd59c
	if (ctx.cr6.eq) goto loc_82BBD59C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd59c
	if (ctx.cr6.eq) goto loc_82BBD59C;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82bbd51c
	if (ctx.cr6.eq) goto loc_82BBD51C;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r6,r9,-7368
	ctx.r6.s64 = ctx.r9.s64 + -7368;
	// addi r5,r8,-7280
	ctx.r5.s64 = ctx.r8.s64 + -7280;
	// addi r10,r11,-7288
	ctx.r10.s64 = ctx.r11.s64 + -7288;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBD4F8;
	sub_82CA3EB8(ctx, base);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,19068(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19068);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BBD510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBD51C:
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82bbd59c
	if (!ctx.cr6.gt) goto loc_82BBD59C;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
loc_82BBD548:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbd55c
	if (!ctx.cr6.eq) goto loc_82BBD55C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_82BBD55C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BBD560:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82bbd584
	if (ctx.cr6.eq) goto loc_82BBD584;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bbd560
	if (ctx.cr6.eq) goto loc_82BBD560;
loc_82BBD584:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bbd5a0
	if (ctx.cr6.eq) goto loc_82BBD5A0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82bbd548
	if (ctx.cr6.lt) goto loc_82BBD548;
loc_82BBD59C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BBD5A0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBD5A8"))) PPC_WEAK_FUNC(sub_82BBD5A8);
PPC_FUNC_IMPL(__imp__sub_82BBD5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bbd848
	ctx.lr = 0x82BBD5B8;
	sub_82BBD848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd5d4
	if (ctx.cr6.eq) goto loc_82BBD5D4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD5E8"))) PPC_WEAK_FUNC(sub_82BBD5E8);
PPC_FUNC_IMPL(__imp__sub_82BBD5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bbd848
	ctx.lr = 0x82BBD5F8;
	sub_82BBD848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd614
	if (ctx.cr6.eq) goto loc_82BBD614;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD614:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD628"))) PPC_WEAK_FUNC(sub_82BBD628);
PPC_FUNC_IMPL(__imp__sub_82BBD628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bbd8f0
	ctx.lr = 0x82BBD638;
	sub_82BBD8F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd654
	if (ctx.cr6.eq) goto loc_82BBD654;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD654:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD668"))) PPC_WEAK_FUNC(sub_82BBD668);
PPC_FUNC_IMPL(__imp__sub_82BBD668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bbd8f0
	ctx.lr = 0x82BBD678;
	sub_82BBD8F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd6b4
	if (ctx.cr6.eq) goto loc_82BBD6B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbd6b4
	if (ctx.cr6.eq) goto loc_82BBD6B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbd6a0
	if (!ctx.cr6.eq) goto loc_82BBD6A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
loc_82BBD6A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD6B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD6C8"))) PPC_WEAK_FUNC(sub_82BBD6C8);
PPC_FUNC_IMPL(__imp__sub_82BBD6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82bbd9a0
	ctx.lr = 0x82BBD6DC;
	sub_82BBD9A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd6f8
	if (ctx.cr6.eq) goto loc_82BBD6F8;
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD6F8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f1,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD710"))) PPC_WEAK_FUNC(sub_82BBD710);
PPC_FUNC_IMPL(__imp__sub_82BBD710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82bbd9a0
	ctx.lr = 0x82BBD724;
	sub_82BBD9A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd760
	if (ctx.cr6.eq) goto loc_82BBD760;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbd760
	if (ctx.cr6.eq) goto loc_82BBD760;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbd74c
	if (!ctx.cr6.eq) goto loc_82BBD74C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
loc_82BBD74C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD774"))) PPC_WEAK_FUNC(sub_82BBD774);
PPC_FUNC_IMPL(__imp__sub_82BBD774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBD778"))) PPC_WEAK_FUNC(sub_82BBD778);
PPC_FUNC_IMPL(__imp__sub_82BBD778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82bbd9a0
	ctx.lr = 0x82BBD794;
	sub_82BBD9A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbd7a0
	if (ctx.cr6.eq) goto loc_82BBD7A0;
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82BBD7A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD7B4"))) PPC_WEAK_FUNC(sub_82BBD7B4);
PPC_FUNC_IMPL(__imp__sub_82BBD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBD7B8"))) PPC_WEAK_FUNC(sub_82BBD7B8);
PPC_FUNC_IMPL(__imp__sub_82BBD7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82bbd9a0
	ctx.lr = 0x82BBD7D8;
	sub_82BBD9A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbd82c
	if (ctx.cr6.eq) goto loc_82BBD82C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbd82c
	if (ctx.cr6.eq) goto loc_82BBD82C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// beq cr6,0x82bbd818
	if (ctx.cr6.eq) goto loc_82BBD818;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BBD818;
	sub_82BA8850(ctx, base);
loc_82BBD818:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82ba8ac8
	ctx.lr = 0x82BBD824;
	sub_82BA8AC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8800
	ctx.lr = 0x82BBD82C;
	sub_82BA8800(ctx, base);
loc_82BBD82C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD844"))) PPC_WEAK_FUNC(sub_82BBD844);
PPC_FUNC_IMPL(__imp__sub_82BBD844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBD848"))) PPC_WEAK_FUNC(sub_82BBD848);
PPC_FUNC_IMPL(__imp__sub_82BBD848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82bbd894
	if (ctx.cr6.lt) goto loc_82BBD894;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82bbd894
	if (!ctx.cr6.lt) goto loc_82BBD894;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbd894
	if (ctx.cr6.eq) goto loc_82BBD894;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82BBD894:
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r9,-7352
	ctx.r6.s64 = ctx.r9.s64 + -7352;
	// addi r5,r8,-7280
	ctx.r5.s64 = ctx.r8.s64 + -7280;
	// addi r10,r11,-13604
	ctx.r10.s64 = ctx.r11.s64 + -13604;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBD8C0;
	sub_82CA3EB8(ctx, base);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,19068(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19068);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BBD8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBD8EC"))) PPC_WEAK_FUNC(sub_82BBD8EC);
PPC_FUNC_IMPL(__imp__sub_82BBD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBD8F0"))) PPC_WEAK_FUNC(sub_82BBD8F0);
PPC_FUNC_IMPL(__imp__sub_82BBD8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBD8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82bbd848
	ctx.lr = 0x82BBD90C;
	sub_82BBD848(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bbd91c
	if (!ctx.cr6.eq) goto loc_82BBD91C;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBD91C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82bbd930
	if (ctx.cr6.lt) goto loc_82BBD930;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bbd978
	if (ctx.cr6.lt) goto loc_82BBD978;
loc_82BBD930:
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r9,-7332
	ctx.r6.s64 = ctx.r9.s64 + -7332;
	// addi r5,r8,-7280
	ctx.r5.s64 = ctx.r8.s64 + -7280;
	// addi r10,r11,-13604
	ctx.r10.s64 = ctx.r11.s64 + -13604;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBD960;
	sub_82CA3EB8(ctx, base);
	// lis r7,-31951
	ctx.r7.s64 = -2093940736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,19068(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 19068);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BBD978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BBD978:
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBD9A0"))) PPC_WEAK_FUNC(sub_82BBD9A0);
PPC_FUNC_IMPL(__imp__sub_82BBD9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BBD9A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82bbd8f0
	ctx.lr = 0x82BBD9C4;
	sub_82BBD8F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82bbd9d4
	if (!ctx.cr6.eq) goto loc_82BBD9D4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BBD9D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82bbda34
	if (ctx.cr6.lt) goto loc_82BBDA34;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82bbda34
	if (!ctx.cr6.lt) goto loc_82BBDA34;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82bbda0c
	if (ctx.cr6.eq) goto loc_82BBDA0C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-7368
	ctx.r4.s64 = ctx.r11.s64 + -7368;
	// b 0x82bbda3c
	goto loc_82BBDA3C;
loc_82BBDA0C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// lwz r10,96(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mullw r11,r8,r30
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BBDA34:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r4,r11,-7308
	ctx.r4.s64 = ctx.r11.s64 + -7308;
loc_82BBDA3C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bbda60
	ctx.lr = 0x82BBDA54;
	sub_82BBDA60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDA5C"))) PPC_WEAK_FUNC(sub_82BBDA5C);
PPC_FUNC_IMPL(__imp__sub_82BBDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDA60"))) PPC_WEAK_FUNC(sub_82BBDA60);
PPC_FUNC_IMPL(__imp__sub_82BBDA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82bbda88
	if (!ctx.cr6.eq) goto loc_82BBDA88;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r10,r10,-7288
	ctx.r10.s64 = ctx.r10.s64 + -7288;
	// b 0x82bbda90
	goto loc_82BBDA90;
loc_82BBDA88:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r10,r10,-13604
	ctx.r10.s64 = ctx.r10.s64 + -13604;
loc_82BBDA90:
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r7,-7280
	ctx.r5.s64 = ctx.r7.s64 + -7280;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBDAB0;
	sub_82CA3EB8(ctx, base);
	// lis r6,-31951
	ctx.r6.s64 = -2093940736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r5,19068(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19068);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BBDAC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBDADC"))) PPC_WEAK_FUNC(sub_82BBDADC);
PPC_FUNC_IMPL(__imp__sub_82BBDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDAE0"))) PPC_WEAK_FUNC(sub_82BBDAE0);
PPC_FUNC_IMPL(__imp__sub_82BBDAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BBDAE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bbdb84
	if (!ctx.cr6.gt) goto loc_82BBDB84;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r28,r10,-13456
	ctx.r28.s64 = ctx.r10.s64 + -13456;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDB1C;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBDB30;
	sub_82BA8F18(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BBDB40;
	sub_82CA3190(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBDB5C;
	sub_82CA2C60(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBDB70;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBDB7C;
	sub_82BA9068(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82BBDB84:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbdb94
	if (ctx.cr6.eq) goto loc_82BBDB94;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82BBDB94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDB9C"))) PPC_WEAK_FUNC(sub_82BBDB9C);
PPC_FUNC_IMPL(__imp__sub_82BBDB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDBA0"))) PPC_WEAK_FUNC(sub_82BBDBA0);
PPC_FUNC_IMPL(__imp__sub_82BBDBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BBDBA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bbdc2c
	if (!ctx.cr6.gt) goto loc_82BBDC2C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-13456
	ctx.r27.s64 = ctx.r11.s64 + -13456;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDBD4;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBDBE8;
	sub_82BA8F18(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BBDBF8;
	sub_82CA3190(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBDC0C;
	sub_82CA2C60(ctx, base);
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r26,32(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBDC18;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBDC24;
	sub_82BA9068(ctx, base);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82BBDC2C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbdc3c
	if (ctx.cr6.eq) goto loc_82BBDC3C;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82BBDC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDC44"))) PPC_WEAK_FUNC(sub_82BBDC44);
PPC_FUNC_IMPL(__imp__sub_82BBDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDC48"))) PPC_WEAK_FUNC(sub_82BBDC48);
PPC_FUNC_IMPL(__imp__sub_82BBDC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-7184
	ctx.r9.s64 = ctx.r11.s64 + -7184;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82bbdc7c
	if (ctx.cr6.eq) goto loc_82BBDC7C;
	// bl 0x8221be68
	ctx.lr = 0x82BBDC78;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BBDC7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBDC90"))) PPC_WEAK_FUNC(sub_82BBDC90);
PPC_FUNC_IMPL(__imp__sub_82BBDC90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBDC98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,-7128
	ctx.r29.s64 = ctx.r11.s64 + -7128;
	// addi r28,r10,-7012
	ctx.r28.s64 = ctx.r10.s64 + -7012;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDCB8;
	sub_82BA8718(ctx, base);
	// li r4,1796
	ctx.r4.s64 = 1796;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,55
	ctx.r7.s64 = 55;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBDCCC;
	sub_82BA8F18(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,4919
	ctx.r8.s64 = 322371584;
	// li r7,1796
	ctx.r7.s64 = 1796;
	// ori r6,r8,61904
	ctx.r6.u64 = ctx.r8.u64 | 61904;
	// addic. r3,r9,16
	ctx.xer.ca = ctx.r9.u32 > 4294967279;
	ctx.r3.s64 = ctx.r9.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// beq 0x82bbdd00
	if (ctx.cr0.eq) goto loc_82BBDD00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bc3248
	ctx.lr = 0x82BBDCF8;
	sub_82BC3248(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBDD00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDD0C"))) PPC_WEAK_FUNC(sub_82BBDD0C);
PPC_FUNC_IMPL(__imp__sub_82BBDD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDD10"))) PPC_WEAK_FUNC(sub_82BBDD10);
PPC_FUNC_IMPL(__imp__sub_82BBDD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBDD18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-7128
	ctx.r31.s64 = ctx.r11.s64 + -7128;
	// addi r30,r10,-6996
	ctx.r30.s64 = ctx.r10.s64 + -6996;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDD34;
	sub_82BA8718(ctx, base);
	// li r4,288
	ctx.r4.s64 = 288;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,66
	ctx.r7.s64 = 66;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBDD48;
	sub_82BA8F18(ctx, base);
	// lis r9,4919
	ctx.r9.s64 = 322371584;
	// li r8,288
	ctx.r8.s64 = 288;
	// ori r7,r9,61904
	ctx.r7.u64 = ctx.r9.u64 | 61904;
	// addic. r31,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r31.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// beq 0x82bbdddc
	if (ctx.cr0.eq) goto loc_82BBDDDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r9,r11,9540
	ctx.r9.s64 = ctx.r11.s64 + 9540;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lfs f0,-16596(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16596);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r6,r8,-5544
	ctx.r6.s64 = ctx.r8.s64 + -5544;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r7,-6332
	ctx.r5.s64 = ctx.r7.s64 + -6332;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBDDAC;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBDDBC;
	sub_82BBF648(ctx, base);
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82ca3190
	ctx.lr = 0x82BBDDD0;
	sub_82CA3190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBDDDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDDE8"))) PPC_WEAK_FUNC(sub_82BBDDE8);
PPC_FUNC_IMPL(__imp__sub_82BBDDE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBDDF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7128
	ctx.r30.s64 = ctx.r11.s64 + -7128;
	// addi r29,r10,-6976
	ctx.r29.s64 = ctx.r10.s64 + -6976;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDE0C;
	sub_82BA8718(ctx, base);
	// li r4,136
	ctx.r4.s64 = 136;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,77
	ctx.r7.s64 = 77;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBDE20;
	sub_82BA8F18(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,4919
	ctx.r8.s64 = 322371584;
	// li r7,136
	ctx.r7.s64 = 136;
	// ori r6,r8,61904
	ctx.r6.u64 = ctx.r8.u64 | 61904;
	// addic. r3,r9,16
	ctx.xer.ca = ctx.r9.u32 > 4294967279;
	ctx.r3.s64 = ctx.r9.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// beq 0x82bbde50
	if (ctx.cr0.eq) goto loc_82BBDE50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82bb0d78
	ctx.lr = 0x82BBDE48;
	sub_82BB0D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_82BBDE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDE5C"))) PPC_WEAK_FUNC(sub_82BBDE5C);
PPC_FUNC_IMPL(__imp__sub_82BBDE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDE60"))) PPC_WEAK_FUNC(sub_82BBDE60);
PPC_FUNC_IMPL(__imp__sub_82BBDE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BBDE68;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r28,r10,-6344
	ctx.r28.s64 = ctx.r10.s64 + -6344;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lfs f31,-16596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r27,r9,-6332
	ctx.r27.s64 = ctx.r9.s64 + -6332;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBDEC0;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBDED0;
	sub_82BBF648(ctx, base);
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r29,r31,56
	ctx.r29.s64 = ctx.r31.s64 + 56;
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBDEF8;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBDF08;
	sub_82BBF648(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bae2e8
	ctx.lr = 0x82BBDF1C;
	sub_82BAE2E8(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBDF34"))) PPC_WEAK_FUNC(sub_82BBDF34);
PPC_FUNC_IMPL(__imp__sub_82BBDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBDF38"))) PPC_WEAK_FUNC(sub_82BBDF38);
PPC_FUNC_IMPL(__imp__sub_82BBDF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x82BBDF40;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,48(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbdfe0
	if (!ctx.cr6.gt) goto loc_82BBDFE0;
	// addi r29,r24,8
	ctx.r29.s64 = ctx.r24.s64 + 8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82BBDF60:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwzx r28,r9,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbdfc8
	if (ctx.cr6.eq) goto loc_82BBDFC8;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbdfb4
	if (ctx.cr6.eq) goto loc_82BBDFB4;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBDF9C;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBDFA8;
	sub_82BA9068(ctx, base);
	// sth r26,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r26.u16);
	// sth r26,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r26.u16);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82BBDFB4:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x82ba8718
	ctx.lr = 0x82BBDFBC;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBDFC8;
	sub_82BA9068(ctx, base);
loc_82BBDFC8:
	// bl 0x82ba8718
	ctx.lr = 0x82BBDFCC;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82ba9068
	ctx.lr = 0x82BBDFD8;
	sub_82BA9068(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82bbdf60
	if (!ctx.cr0.eq) goto loc_82BBDF60;
loc_82BBDFE0:
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbe1a0
	if (!ctx.cr6.gt) goto loc_82BBE1A0;
	// addi r22,r24,56
	ctx.r22.s64 = ctx.r24.s64 + 56;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82BBDFF4:
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// lwz r10,32(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r22)
	PPC_STORE_U32(ctx.r22.u32 + 40, ctx.r11.u32);
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbe050
	if (!ctx.cr6.gt) goto loc_82BBE050;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BBE020:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbe044
	if (ctx.cr6.eq) goto loc_82BBE044;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE038;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE044;
	sub_82BA9068(ctx, base);
loc_82BBE044:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bbe020
	if (!ctx.cr0.eq) goto loc_82BBE020;
loc_82BBE050:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbe094
	if (!ctx.cr6.gt) goto loc_82BBE094;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BBE064:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbe088
	if (ctx.cr6.eq) goto loc_82BBE088;
	// rotlwi r28,r10,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE07C;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE088;
	sub_82BA9068(ctx, base);
loc_82BBE088:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bbe064
	if (!ctx.cr0.eq) goto loc_82BBE064;
loc_82BBE094:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbe110
	if (!ctx.cr6.gt) goto loc_82BBE110;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82BBE0A8:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwzx r28,r27,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bbe0f4
	if (!ctx.cr6.gt) goto loc_82BBE0F4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82BBE0C4:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bbe0e8
	if (ctx.cr6.eq) goto loc_82BBE0E8;
	// rotlwi r21,r10,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE0DC;
	sub_82BA8718(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE0E8;
	sub_82BA9068(ctx, base);
loc_82BBE0E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82bbe0c4
	if (!ctx.cr0.eq) goto loc_82BBE0C4;
loc_82BBE0F4:
	// bl 0x82ba8718
	ctx.lr = 0x82BBE0F8;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE104;
	sub_82BA9068(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82bbe0a8
	if (!ctx.cr0.eq) goto loc_82BBE0A8;
loc_82BBE110:
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r29,132(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE124;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE130;
	sub_82BA9068(ctx, base);
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE14C;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE158;
	sub_82BA9068(ctx, base);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE174;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE180;
	sub_82BA9068(ctx, base);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE18C;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE198;
	sub_82BA9068(ctx, base);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82bbdff4
	if (!ctx.cr0.eq) goto loc_82BBDFF4;
loc_82BBE1A0:
	// stw r26,144(r24)
	PPC_STORE_U32(ctx.r24.u32 + 144, ctx.r26.u32);
	// addi r11,r24,104
	ctx.r11.s64 = ctx.r24.s64 + 104;
	// lwz r31,140(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 140);
	// lwz r30,136(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE1B4;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE1C0;
	sub_82BA9068(ctx, base);
	// stw r26,140(r24)
	PPC_STORE_U32(ctx.r24.u32 + 140, ctx.r26.u32);
	// stw r26,136(r24)
	PPC_STORE_U32(ctx.r24.u32 + 136, ctx.r26.u32);
	// addi r11,r24,56
	ctx.r11.s64 = ctx.r24.s64 + 56;
	// stw r26,96(r24)
	PPC_STORE_U32(ctx.r24.u32 + 96, ctx.r26.u32);
	// lwz r31,92(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 92);
	// lwz r30,88(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE1DC;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE1E8;
	sub_82BA9068(ctx, base);
	// stw r26,92(r24)
	PPC_STORE_U32(ctx.r24.u32 + 92, ctx.r26.u32);
	// stw r26,88(r24)
	PPC_STORE_U32(ctx.r24.u32 + 88, ctx.r26.u32);
	// addi r11,r24,8
	ctx.r11.s64 = ctx.r24.s64 + 8;
	// stw r26,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r26.u32);
	// lwz r31,44(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r30,40(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE204;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBE210;
	sub_82BA9068(ctx, base);
	// stw r26,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r26.u32);
	// stw r26,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBE220"))) PPC_WEAK_FUNC(sub_82BBE220);
PPC_FUNC_IMPL(__imp__sub_82BBE220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BBE228;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8544(r1)
	ea = -8544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BBE240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbe240
	if (!ctx.cr6.eq) goto loc_82BBE240;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// sth r26,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r26.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r26,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r26.u16);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x82bbe288
	if (ctx.cr6.eq) goto loc_82BBE288;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ba8850
	ctx.lr = 0x82BBE284;
	sub_82BA8850(ctx, base);
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82BBE288:
	// lhz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82bbe2b0
	if (ctx.cr6.lt) goto loc_82BBE2B0;
loc_82BBE29C:
	// lbzx r9,r18,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// beq cr6,0x82bbe2b4
	if (ctx.cr6.eq) goto loc_82BBE2B4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82bbe29c
	if (!ctx.cr0.lt) goto loc_82BBE29C;
loc_82BBE2B0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82BBE2B4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82bbe2d0
	if (ctx.cr6.lt) goto loc_82BBE2D0;
loc_82BBE2BC:
	// lbzx r9,r10,r18
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r18.u32);
	// cmplwi cr6,r9,92
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 92, ctx.xer);
	// beq cr6,0x82bbe2d4
	if (ctx.cr6.eq) goto loc_82BBE2D4;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82bbe2bc
	if (!ctx.cr0.lt) goto loc_82BBE2BC;
loc_82BBE2D0:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82BBE2D4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82bbe2e0
	if (ctx.cr6.gt) goto loc_82BBE2E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82BBE2E0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8798
	ctx.lr = 0x82BBE2F0;
	sub_82BA8798(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ba8798
	ctx.lr = 0x82BBE2FC;
	sub_82BA8798(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ba8938
	ctx.lr = 0x82BBE30C;
	sub_82BA8938(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ba8938
	ctx.lr = 0x82BBE31C;
	sub_82BA8938(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r10,-5636
	ctx.r9.s64 = ctx.r10.s64 + -5636;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// bl 0x82ba8798
	ctx.lr = 0x82BBE344;
	sub_82BA8798(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r21,r11,3224
	ctx.r21.s64 = ctx.r11.s64 + 3224;
	// lhz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// beq cr6,0x82bbe364
	if (ctx.cr6.eq) goto loc_82BBE364;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82BBE364:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ba89b0
	ctx.lr = 0x82BBE36C;
	sub_82BA89B0(ctx, base);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// lwz r14,160(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82bbe380
	if (ctx.cr6.eq) goto loc_82BBE380;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
loc_82BBE380:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,11936
	ctx.r4.s64 = ctx.r8.s64 + 11936;
	// lwz r7,19048(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19048);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBE3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBE3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBE400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r25,-31951
	ctx.r25.s64 = -2093940736;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r17,r11,-6952
	ctx.r17.s64 = ctx.r11.s64 + -6952;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbe638
	if (!ctx.cr6.gt) goto loc_82BBE638;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lhz r22,124(r1)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r29,r16,8
	ctx.r29.s64 = ctx.r16.s64 + 8;
	// addi r23,r11,-6820
	ctx.r23.s64 = ctx.r11.s64 + -6820;
	// addi r28,r10,-15140
	ctx.r28.s64 = ctx.r10.s64 + -15140;
	// addi r27,r9,-6844
	ctx.r27.s64 = ctx.r9.s64 + -6844;
loc_82BBE440:
	// bl 0x82ba8718
	ctx.lr = 0x82BBE444;
	sub_82BA8718(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r7,165
	ctx.r7.s64 = 165;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBE458;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE4A0;
	sub_82188CF0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBE4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBE4DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE4E4;
	sub_82188CF0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,19056(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBE520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBE524;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r7,181
	ctx.r7.s64 = 181;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBE538;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbe57c
	if (ctx.cr6.eq) goto loc_82BBE57C;
	// clrlwi r5,r22,16
	ctx.r5.u64 = ctx.r22.u32 & 0xFFFF;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// sth r26,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r26.u16);
	// sth r26,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r26.u16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bbe574
	if (ctx.cr6.eq) goto loc_82BBE574;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// beq cr6,0x82bbe56c
	if (ctx.cr6.eq) goto loc_82BBE56C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82BBE56C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba8850
	ctx.lr = 0x82BBE574;
	sub_82BA8850(ctx, base);
loc_82BBE574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82bbe580
	goto loc_82BBE580;
loc_82BBE57C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82BBE580:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,4288
	ctx.r4.s64 = ctx.r1.s64 + 4288;
	// bl 0x82ba89b0
	ctx.lr = 0x82BBE590;
	sub_82BA89B0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE598;
	sub_82188CF0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bbe5c4
	if (!ctx.cr6.eq) goto loc_82BBE5C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bbe5b8
	if (!ctx.cr6.eq) goto loc_82BBE5B8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82BBE5B8:
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,4(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// bl 0x82bbcd00
	ctx.lr = 0x82BBE5C4;
	sub_82BBCD00(ctx, base);
loc_82BBE5C4:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bbe60c
	if (!ctx.cr6.eq) goto loc_82BBE60C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f9.u64);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BBE60C;
	sub_82BBF648(ctx, base);
loc_82BBE60C:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r7.u32);
	// cmpw cr6,r24,r8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82bbe440
	if (ctx.cr6.lt) goto loc_82BBE440;
loc_82BBE638:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbec24
	if (!ctx.cr6.gt) goto loc_82BBEC24;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lfs f31,-16596(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16596);
	ctx.f31.f64 = double(temp.f32);
	// addi r21,r16,56
	ctx.r21.s64 = ctx.r16.s64 + 56;
	// addi r23,r8,-6332
	ctx.r23.s64 = ctx.r8.s64 + -6332;
	// addi r22,r9,-6344
	ctx.r22.s64 = ctx.r9.s64 + -6344;
	// addi r20,r10,-6788
	ctx.r20.s64 = ctx.r10.s64 + -6788;
	// addi r18,r11,-6812
	ctx.r18.s64 = ctx.r11.s64 + -6812;
loc_82BBE690:
	// bl 0x82ba8718
	ctx.lr = 0x82BBE694;
	sub_82BA8718(ctx, base);
	// li r4,148
	ctx.r4.s64 = 148;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r7,197
	ctx.r7.s64 = 197;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBE6A8;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bbe760
	if (ctx.cr6.eq) goto loc_82BBE760;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBE6DC;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBE6EC;
	sub_82BBF648(ctx, base);
	// stfs f31,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBE714;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBE724;
	sub_82BBF648(ctx, base);
	// stfs f31,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stw r26,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r26.u32);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r26,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBE74C;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBE75C;
	sub_82BBF648(ctx, base);
	// b 0x82bbe764
	goto loc_82BBE764;
loc_82BBE760:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82BBE764:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE7A4;
	sub_82188CF0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBE7C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82bbe878
	if (!ctx.cr6.gt) goto loc_82BBE878;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82BBE7D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBE82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBE848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,4288
	ctx.r5.s64 = ctx.r1.s64 + 4288;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bbf048
	ctx.lr = 0x82BBE858;
	sub_82BBF048(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bba130
	ctx.lr = 0x82BBE868;
	sub_82BBA130(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bbe7d8
	if (ctx.cr6.lt) goto loc_82BBE7D8;
loc_82BBE878:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbead8
	if (!ctx.cr6.gt) goto loc_82BBEAD8;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
loc_82BBE8A8:
	// bl 0x82ba8718
	ctx.lr = 0x82BBE8AC;
	sub_82BA8718(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// li r7,222
	ctx.r7.s64 = 222;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBE8C0;
	sub_82BA8F18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbe908
	if (ctx.cr6.eq) goto loc_82BBE908;
	// stfs f31,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stw r26,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r26.u32);
	// stw r26,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r26.u32);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// stw r26,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r26.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82ca3eb8
	ctx.lr = 0x82BBE8F4;
	sub_82CA3EB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bbf648
	ctx.lr = 0x82BBE904;
	sub_82BBF648(ctx, base);
	// b 0x82bbe90c
	goto loc_82BBE90C;
loc_82BBE908:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82BBE90C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE94C;
	sub_82188CF0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBE96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBE988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82188cf0
	ctx.lr = 0x82BBE990;
	sub_82188CF0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE9B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82bbea64
	if (!ctx.cr6.gt) goto loc_82BBEA64;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
loc_82BBE9C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBE9E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBE9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBEA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBEA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,4288
	ctx.r5.s64 = ctx.r1.s64 + 4288;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bbf048
	ctx.lr = 0x82BBEA44;
	sub_82BBF048(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bba130
	ctx.lr = 0x82BBEA54;
	sub_82BBA130(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bbe9c4
	if (ctx.cr6.lt) goto loc_82BBE9C4;
loc_82BBEA64:
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bbeaac
	if (!ctx.cr6.eq) goto loc_82BBEAAC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BBEAAC;
	sub_82BBF648(ctx, base);
loc_82BBEAAC:
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,40(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,40(r27)
	PPC_STORE_U32(ctx.r27.u32 + 40, ctx.r8.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r24,r7
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82bbe8a8
	if (ctx.cr6.lt) goto loc_82BBE8A8;
loc_82BBEAD8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEAF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbeba8
	if (!ctx.cr6.gt) goto loc_82BBEBA8;
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
loc_82BBEB08:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,19056(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBEB40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BBEB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,19056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 19056);
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBEB78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,4288
	ctx.r5.s64 = ctx.r1.s64 + 4288;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82bbf048
	ctx.lr = 0x82BBEB88;
	sub_82BBF048(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bba130
	ctx.lr = 0x82BBEB98;
	sub_82BBA130(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bbeb08
	if (ctx.cr6.lt) goto loc_82BBEB08;
loc_82BBEBA8:
	// lwz r11,36(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// lwz r10,40(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82bbebf0
	if (!ctx.cr6.eq) goto loc_82BBEBF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,44(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82bbf648
	ctx.lr = 0x82BBEBF0;
	sub_82BBF648(ctx, base);
loc_82BBEBF0:
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// lwz r10,32(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpw cr6,r19,r8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r8.s32, ctx.xer);
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,40(r21)
	PPC_STORE_U32(ctx.r21.u32 + 40, ctx.r7.u32);
	// blt cr6,0x82bbe690
	if (ctx.cr6.lt) goto loc_82BBE690;
	// lwz r20,128(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82BBEC24:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x822d0488
	ctx.lr = 0x82BBEC2C;
	sub_822D0488(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82bbec4c
	if (ctx.cr6.eq) goto loc_82BBEC4C;
	// lhz r11,166(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBEC40;
	sub_82BA8718(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBEC4C;
	sub_82BA9068(ctx, base);
loc_82BBEC4C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,-7716
	ctx.r10.s64 = ctx.r11.s64 + -7716;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82bbec78
	if (ctx.cr6.eq) goto loc_82BBEC78;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lwz r10,19052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19052);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_82BBEC78:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// addi r10,r11,-7728
	ctx.r10.s64 = ctx.r11.s64 + -7728;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82bbeca4
	if (ctx.cr6.eq) goto loc_82BBECA4;
	// lhz r11,126(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBEC98;
	sub_82BA8718(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBECA4;
	sub_82BA9068(ctx, base);
loc_82BBECA4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82bbecc4
	if (ctx.cr6.eq) goto loc_82BBECC4;
	// lhz r11,134(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBECB8;
	sub_82BA8718(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBECC4;
	sub_82BA9068(ctx, base);
loc_82BBECC4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82bbece4
	if (ctx.cr6.eq) goto loc_82BBECE4;
	// lhz r11,118(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BBECD8;
	sub_82BA8718(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BBECE4;
	sub_82BA9068(ctx, base);
loc_82BBECE4:
	// addi r1,r1,8544
	ctx.r1.s64 = ctx.r1.s64 + 8544;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBECF0"))) PPC_WEAK_FUNC(sub_82BBECF0);
PPC_FUNC_IMPL(__imp__sub_82BBECF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBECF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbed40
	if (!ctx.cr6.gt) goto loc_82BBED40;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82BBED18:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82bbed3c
	if (ctx.cr6.eq) goto loc_82BBED3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbed18
	if (ctx.cr6.lt) goto loc_82BBED18;
	// b 0x82bbed40
	goto loc_82BBED40;
loc_82BBED3C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82BBED40:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r30,92(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bbed8c
	if (!ctx.cr6.gt) goto loc_82BBED8C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BBED60:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,84(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x82bbede0
	ctx.lr = 0x82BBED80;
	sub_82BBEDE0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bbed60
	if (!ctx.cr0.eq) goto loc_82BBED60;
loc_82BBED8C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r30,44(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bbedd8
	if (!ctx.cr6.gt) goto loc_82BBEDD8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82BBEDAC:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x82bbede0
	ctx.lr = 0x82BBEDCC;
	sub_82BBEDE0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82bbedac
	if (!ctx.cr0.eq) goto loc_82BBEDAC;
loc_82BBEDD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBEDE0"))) PPC_WEAK_FUNC(sub_82BBEDE0);
PPC_FUNC_IMPL(__imp__sub_82BBEDE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbee3c
	if (!ctx.cr6.gt) goto loc_82BBEE3C;
	// lwz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82BBEE10:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82bbee34
	if (ctx.cr6.eq) goto loc_82BBEE34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbee10
	if (ctx.cr6.lt) goto loc_82BBEE10;
	// b 0x82bbee3c
	goto loc_82BBEE3C;
loc_82BBEE34:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
loc_82BBEE3C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82bbf034
	if (ctx.cr6.gt) goto loc_82BBF034;
	// lis r12,-32068
	ctx.r12.s64 = -2101608448;
	// addi r12,r12,-4512
	ctx.r12.s64 = ctx.r12.s64 + -4512;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82BBEE80;
	case 1:
		goto loc_82BBEED0;
	case 2:
		goto loc_82BBEF3C;
	case 3:
		goto loc_82BBEF58;
	case 4:
		goto loc_82BBEF94;
	case 5:
		goto loc_82BBEFC4;
	case 6:
		goto loc_82BBEFF8;
	case 7:
		goto loc_82BBF014;
	default:
		__builtin_unreachable();
	}
	// lwz r21,-4480(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4480);
	// lwz r21,-4400(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4400);
	// lwz r21,-4292(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4292);
	// lwz r21,-4264(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4264);
	// lwz r21,-4204(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4204);
	// lwz r21,-4156(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4156);
	// lwz r21,-4104(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4104);
	// lwz r21,-4076(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4076);
loc_82BBEE80:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf034
	if (!ctx.cr6.eq) goto loc_82BBF034;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bbeea4
	if (!ctx.cr6.eq) goto loc_82BBEEA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82BBEEA4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEEB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x82bbf030
	goto loc_82BBF030;
loc_82BBEED0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbef0c
	if (!ctx.cr6.eq) goto loc_82BBEF0C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bbeef4
	if (!ctx.cr6.eq) goto loc_82BBEEF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82BBEEF4:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEF08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82BBEF0C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEF20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x82bbf028
	goto loc_82BBF028;
loc_82BBEF3C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// b 0x82bbf02c
	goto loc_82BBF02C;
loc_82BBEF58:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBEF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBEF94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lbz r9,868(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 868);
	// addi r10,r11,852
	ctx.r10.s64 = ctx.r11.s64 + 852;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stb r8,868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 868, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBEFC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lbz r9,868(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 868);
	// addi r10,r11,852
	ctx.r10.s64 = ctx.r11.s64 + 852;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r8,868(r11)
	PPC_STORE_U8(ctx.r11.u32 + 868, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82BBEFF8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// b 0x82bbf02c
	goto loc_82BBF02C;
loc_82BBF014:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bbf034
	if (ctx.cr6.eq) goto loc_82BBF034;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_82BBF028:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BBF02C:
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82BBF030:
	// bctrl 
	ctx.lr = 0x82BBF034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BBF034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBF048"))) PPC_WEAK_FUNC(sub_82BBF048);
PPC_FUNC_IMPL(__imp__sub_82BBF048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x82BBF050;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31924
	ctx.r30.s64 = -2092171264;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lis r25,-31924
	ctx.r25.s64 = -2092171264;
	// lwz r31,13076(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13076);
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf08c
	if (!ctx.cr6.eq) goto loc_82BBF08C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// addi r3,r11,10632
	ctx.r3.s64 = ctx.r11.s64 + 10632;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF088;
	sub_82188CF0(ctx, base);
	// stw r3,13072(r25)
	PPC_STORE_U32(ctx.r25.u32 + 13072, ctx.r3.u32);
loc_82BBF08C:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// lis r22,-31924
	ctx.r22.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf0b4
	if (!ctx.cr6.eq) goto loc_82BBF0B4;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// addi r3,r11,-6760
	ctx.r3.s64 = ctx.r11.s64 + -6760;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF0B0;
	sub_82188CF0(ctx, base);
	// stw r3,13068(r22)
	PPC_STORE_U32(ctx.r22.u32 + 13068, ctx.r3.u32);
loc_82BBF0B4:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// lis r23,-31924
	ctx.r23.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf0dc
	if (!ctx.cr6.eq) goto loc_82BBF0DC;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
	// addi r3,r11,-6752
	ctx.r3.s64 = ctx.r11.s64 + -6752;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF0D8;
	sub_82188CF0(ctx, base);
	// stw r3,13064(r23)
	PPC_STORE_U32(ctx.r23.u32 + 13064, ctx.r3.u32);
loc_82BBF0DC:
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// lis r24,-31924
	ctx.r24.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf104
	if (!ctx.cr6.eq) goto loc_82BBF104;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// addi r3,r11,-6744
	ctx.r3.s64 = ctx.r11.s64 + -6744;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF100;
	sub_82188CF0(ctx, base);
	// stw r3,13060(r24)
	PPC_STORE_U32(ctx.r24.u32 + 13060, ctx.r3.u32);
loc_82BBF104:
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// lis r26,-31924
	ctx.r26.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf12c
	if (!ctx.cr6.eq) goto loc_82BBF12C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// addi r3,r11,-11020
	ctx.r3.s64 = ctx.r11.s64 + -11020;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF128;
	sub_82188CF0(ctx, base);
	// stw r3,13056(r26)
	PPC_STORE_U32(ctx.r26.u32 + 13056, ctx.r3.u32);
loc_82BBF12C:
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// lis r27,-31924
	ctx.r27.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf154
	if (!ctx.cr6.eq) goto loc_82BBF154;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// ori r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 | 32;
	// addi r3,r11,8220
	ctx.r3.s64 = ctx.r11.s64 + 8220;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF150;
	sub_82188CF0(ctx, base);
	// stw r3,13052(r27)
	PPC_STORE_U32(ctx.r27.u32 + 13052, ctx.r3.u32);
loc_82BBF154:
	// rlwinm r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40;
	// lis r28,-31924
	ctx.r28.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf17c
	if (!ctx.cr6.eq) goto loc_82BBF17C;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
	// addi r3,r11,-6736
	ctx.r3.s64 = ctx.r11.s64 + -6736;
	// stw r31,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r31.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF178;
	sub_82188CF0(ctx, base);
	// stw r3,13048(r28)
	PPC_STORE_U32(ctx.r28.u32 + 13048, ctx.r3.u32);
loc_82BBF17C:
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	// lis r29,-31924
	ctx.r29.s64 = -2092171264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bbf1a4
	if (!ctx.cr6.eq) goto loc_82BBF1A4;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// ori r11,r31,128
	ctx.r11.u64 = ctx.r31.u64 | 128;
	// addi r3,r10,-6724
	ctx.r3.s64 = ctx.r10.s64 + -6724;
	// stw r11,13076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 13076, ctx.r11.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF1A0;
	sub_82188CF0(ctx, base);
	// stw r3,13044(r29)
	PPC_STORE_U32(ctx.r29.u32 + 13044, ctx.r3.u32);
loc_82BBF1A4:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r31,r11,-6952
	ctx.r31.s64 = ctx.r11.s64 + -6952;
	// addi r30,r10,-6708
	ctx.r30.s64 = ctx.r10.s64 + -6708;
	// bl 0x82ba8718
	ctx.lr = 0x82BBF1B8;
	sub_82BA8718(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBF1CC;
	sub_82BA8F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBF1D8;
	sub_82188CF0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBF1E4;
	sub_82188CF0(ctx, base);
	// lwz r11,13072(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13072);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf204
	if (!ctx.cr6.eq) goto loc_82BBF204;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF204:
	// lwz r11,13068(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13068);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf224
	if (!ctx.cr6.eq) goto loc_82BBF224;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF224:
	// lwz r11,13064(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13064);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf244
	if (!ctx.cr6.eq) goto loc_82BBF244;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF244:
	// lwz r11,13060(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13060);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf264
	if (!ctx.cr6.eq) goto loc_82BBF264;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF264:
	// lwz r11,13056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13056);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf284
	if (!ctx.cr6.eq) goto loc_82BBF284;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF284:
	// lwz r11,13052(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13052);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf2a4
	if (!ctx.cr6.eq) goto loc_82BBF2A4;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF2A4:
	// lwz r11,13048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13048);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf2c4
	if (!ctx.cr6.eq) goto loc_82BBF2C4;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
loc_82BBF2C4:
	// lwz r11,13044(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13044);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82bbf2d8
	if (!ctx.cr6.eq) goto loc_82BBF2D8;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82BBF2D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBF2E4"))) PPC_WEAK_FUNC(sub_82BBF2E4);
PPC_FUNC_IMPL(__imp__sub_82BBF2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBF2E8"))) PPC_WEAK_FUNC(sub_82BBF2E8);
PPC_FUNC_IMPL(__imp__sub_82BBF2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BBF2F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82188cf0
	ctx.lr = 0x82BBF308;
	sub_82188CF0(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bbf3d8
	if (!ctx.cr6.gt) goto loc_82BBF3D8;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82BBF320:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82bbf354
	if (ctx.cr6.eq) goto loc_82BBF354;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82bbf320
	if (ctx.cr6.lt) goto loc_82BBF320;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_82BBF354:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bbf3d8
	if (ctx.cr6.eq) goto loc_82BBF3D8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bbf3d8
	if (ctx.cr6.eq) goto loc_82BBF3D8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBF384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BBF39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82188cf0
	ctx.lr = 0x82BBF3B0;
	sub_82188CF0(ctx, base);
	// clrlwi r4,r3,1
	ctx.r4.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BBF3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BBF3D8:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBF3EC"))) PPC_WEAK_FUNC(sub_82BBF3EC);
PPC_FUNC_IMPL(__imp__sub_82BBF3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBF3F0"))) PPC_WEAK_FUNC(sub_82BBF3F0);
PPC_FUNC_IMPL(__imp__sub_82BBF3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BBF3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6680
	ctx.r5.s64 = ctx.r11.s64 + -6680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBF410;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBF41C;
	sub_822AF338(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbf43c
	if (ctx.cr6.lt) goto loc_82BBF43C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF43C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbf490
	if (ctx.cr6.eq) goto loc_82BBF490;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBF450;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbf460
	if (!ctx.cr6.eq) goto loc_82BBF460;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bbf49c
	goto loc_82BBF49C;
loc_82BBF460:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbf47c
	if (ctx.cr6.lt) goto loc_82BBF47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBF47C;
	sub_8227B8B8(ctx, base);
loc_82BBF47C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbf490
	if (ctx.cr6.lt) goto loc_82BBF490;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF490:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bbf4b4
	if (!ctx.cr0.eq) goto loc_82BBF4B4;
loc_82BBF49C:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBF4B4;
	sub_82BC68F0(ctx, base);
loc_82BBF4B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188cf0
	ctx.lr = 0x82BBF4BC;
	sub_82188CF0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x82bae368
	ctx.lr = 0x82BBF4CC;
	sub_82BAE368(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBF4D8"))) PPC_WEAK_FUNC(sub_82BBF4D8);
PPC_FUNC_IMPL(__imp__sub_82BBF4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BBF4E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6680
	ctx.r5.s64 = ctx.r11.s64 + -6680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBF4F8;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBF504;
	sub_822AF338(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbf524
	if (ctx.cr6.lt) goto loc_82BBF524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF524:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r28,r11,1744
	ctx.r28.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bbf580
	if (ctx.cr6.eq) goto loc_82BBF580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBF540;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbf550
	if (!ctx.cr6.eq) goto loc_82BBF550;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82bbf58c
	goto loc_82BBF58C;
loc_82BBF550:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbf56c
	if (ctx.cr6.lt) goto loc_82BBF56C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBF56C;
	sub_8227B8B8(ctx, base);
loc_82BBF56C:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbf580
	if (ctx.cr6.lt) goto loc_82BBF580;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF580:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82bbf59c
	if (!ctx.cr0.eq) goto loc_82BBF59C;
loc_82BBF58C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBF59C;
	sub_82BC68F0(ctx, base);
loc_82BBF59C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbf5b4
	if (ctx.cr6.lt) goto loc_82BBF5B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF5B4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbf60c
	if (ctx.cr6.eq) goto loc_82BBF60C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBF5C8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbf5d8
	if (!ctx.cr6.eq) goto loc_82BBF5D8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82bbf618
	goto loc_82BBF618;
loc_82BBF5D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbf5f4
	if (ctx.cr6.lt) goto loc_82BBF5F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBF5F4;
	sub_8227B8B8(ctx, base);
loc_82BBF5F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbf60c
	if (ctx.cr6.lt) goto loc_82BBF60C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF60C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bbf628
	if (!ctx.cr0.eq) goto loc_82BBF628;
loc_82BBF618:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBF628;
	sub_82BC68F0(ctx, base);
loc_82BBF628:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bbf2e8
	ctx.lr = 0x82BBF638;
	sub_82BBF2E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBF644"))) PPC_WEAK_FUNC(sub_82BBF644);
PPC_FUNC_IMPL(__imp__sub_82BBF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBF648"))) PPC_WEAK_FUNC(sub_82BBF648);
PPC_FUNC_IMPL(__imp__sub_82BBF648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BBF650;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82bbf6d0
	if (!ctx.cr6.gt) goto loc_82BBF6D0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-13456
	ctx.r28.s64 = ctx.r11.s64 + -13456;
	// bl 0x82ba8718
	ctx.lr = 0x82BBF678;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82ba8f18
	ctx.lr = 0x82BBF68C;
	sub_82BA8F18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82ca3190
	ctx.lr = 0x82BBF69C;
	sub_82CA3190(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ca2c60
	ctx.lr = 0x82BBF6B0;
	sub_82CA2C60(ctx, base);
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r27,32(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ba8718
	ctx.lr = 0x82BBF6BC;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba9068
	ctx.lr = 0x82BBF6C8;
	sub_82BA9068(ctx, base);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82BBF6D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBF6D8"))) PPC_WEAK_FUNC(sub_82BBF6D8);
PPC_FUNC_IMPL(__imp__sub_82BBF6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r8,-6624
	ctx.r5.s64 = ctx.r8.s64 + -6624;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF720;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,-2008
	ctx.r4.s64 = ctx.r6.s64 + -2008;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF734;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-6612
	ctx.r5.s64 = ctx.r5.s64 + -6612;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF748;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,-1496
	ctx.r4.s64 = ctx.r4.s64 + -1496;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF75C;
	sub_8227B7E0(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-6600
	ctx.r5.s64 = ctx.r11.s64 + -6600;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF770;
	sub_82BC5EB0(ctx, base);
	// lis r10,-32068
	ctx.r10.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-600
	ctx.r4.s64 = ctx.r10.s64 + -600;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF784;
	sub_8227B7E0(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,-6588
	ctx.r5.s64 = ctx.r9.s64 + -6588;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF798;
	sub_82BC5EB0(ctx, base);
	// lis r8,-32068
	ctx.r8.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r8,528
	ctx.r4.s64 = ctx.r8.s64 + 528;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF7AC;
	sub_8227B7E0(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r7,-6580
	ctx.r5.s64 = ctx.r7.s64 + -6580;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF7C0;
	sub_82BC5EB0(ctx, base);
	// lis r6,-32068
	ctx.r6.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,1480
	ctx.r4.s64 = ctx.r6.s64 + 1480;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF7D4;
	sub_8227B7E0(ctx, base);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r5,-6568
	ctx.r5.s64 = ctx.r5.s64 + -6568;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF7E8;
	sub_82BC5EB0(ctx, base);
	// lis r4,-32068
	ctx.r4.s64 = -2101608448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r4,2656
	ctx.r4.s64 = ctx.r4.s64 + 2656;
	// bl 0x8227b7e0
	ctx.lr = 0x82BBF7FC;
	sub_8227B7E0(ctx, base);
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r3,-6556
	ctx.r5.s64 = ctx.r3.s64 + -6556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BBF810;
	sub_82BC5EB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BBF824"))) PPC_WEAK_FUNC(sub_82BBF824);
PPC_FUNC_IMPL(__imp__sub_82BBF824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BBF828"))) PPC_WEAK_FUNC(sub_82BBF828);
PPC_FUNC_IMPL(__imp__sub_82BBF828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BBF830;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r30,r11,1876
	ctx.r30.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbf854
	if (ctx.cr6.lt) goto loc_82BBF854;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF854:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbf8ac
	if (ctx.cr6.eq) goto loc_82BBF8AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBF86C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbf87c
	if (!ctx.cr6.eq) goto loc_82BBF87C;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x82bbf8b8
	goto loc_82BBF8B8;
loc_82BBF87C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbf898
	if (ctx.cr6.lt) goto loc_82BBF898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBF898;
	sub_8227B8B8(ctx, base);
loc_82BBF898:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbf8ac
	if (ctx.cr6.lt) goto loc_82BBF8AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82BBF8AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82bbf8d0
	if (!ctx.cr0.eq) goto loc_82BBF8D0;
loc_82BBF8B8:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BBF8D0;
	sub_82BC68F0(ctx, base);
loc_82BBF8D0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BBF8DC;
	sub_82BC6F00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc6f00
	ctx.lr = 0x82BBF8EC;
	sub_82BC6F00(ctx, base);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBF904;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBF910;
	sub_822AF338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBF928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82bbf9d4
	if (ctx.cr6.eq) goto loc_82BBF9D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBF950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbf9a0
	if (!ctx.cr6.eq) goto loc_82BBF9A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBF978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBF9A0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bbfa1c
	if (!ctx.cr6.eq) goto loc_82BBFA1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBF9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bbf9f4
	if (!ctx.cr6.eq) goto loc_82BBF9F4;
loc_82BBF9D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BBF9F4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BBF9F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbf9f8
	if (!ctx.cr6.eq) goto loc_82BBF9F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BBFA1C;
	sub_8219CDA8(ctx, base);
loc_82BBFA1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBFA28"))) PPC_WEAK_FUNC(sub_82BBFA28);
PPC_FUNC_IMPL(__imp__sub_82BBFA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BBFA30;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r22,r11,1876
	ctx.r22.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfa54
	if (ctx.cr6.lt) goto loc_82BBFA54;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BBFA54:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r30,r11,1744
	ctx.r30.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bbfab4
	if (ctx.cr6.eq) goto loc_82BBFAB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBFA74;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbfa84
	if (!ctx.cr6.eq) goto loc_82BBFA84;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x82bbfac0
	goto loc_82BBFAC0;
loc_82BBFA84:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbfaa0
	if (ctx.cr6.lt) goto loc_82BBFAA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBFAA0;
	sub_8227B8B8(ctx, base);
loc_82BBFAA0:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbfab4
	if (ctx.cr6.lt) goto loc_82BBFAB4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BBFAB4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r28,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r28.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82bbfad0
	if (!ctx.cr0.eq) goto loc_82BBFAD0;
loc_82BBFAC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBFAD0;
	sub_82BC68F0(ctx, base);
loc_82BBFAD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfae8
	if (ctx.cr6.lt) goto loc_82BBFAE8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BBFAE8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbfb40
	if (ctx.cr6.eq) goto loc_82BBFB40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBFAFC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbfb0c
	if (!ctx.cr6.eq) goto loc_82BBFB0C;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82bbfb4c
	goto loc_82BBFB4C;
loc_82BBFB0C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbfb28
	if (ctx.cr6.lt) goto loc_82BBFB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBFB28;
	sub_8227B8B8(ctx, base);
loc_82BBFB28:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfb40
	if (ctx.cr6.lt) goto loc_82BBFB40;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BBFB40:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82bbfb5c
	if (!ctx.cr0.eq) goto loc_82BBFB5C;
loc_82BBFB4C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBFB5C;
	sub_82BC68F0(ctx, base);
loc_82BBFB5C:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBFB70;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBFB7C;
	sub_822AF338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBFB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82bbfbc0
	if (!ctx.cr6.eq) goto loc_82BBFBC0;
loc_82BBFBA0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BBFBC0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82bbfba0
	if (ctx.cr6.eq) goto loc_82BBFBA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bbfc3c
	if (!ctx.cr6.lt) goto loc_82BBFC3C;
loc_82BBFC18:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bbfc18
	if (ctx.cr6.lt) goto loc_82BBFC18;
loc_82BBFC3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BBFC54;
	sub_82BC5CD8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBFC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82bbfd9c
	if (!ctx.cr6.gt) goto loc_82BBFD9C;
	// li r27,3
	ctx.r27.s64 = 3;
loc_82BBFC80:
	// addi r29,r6,1
	ctx.r29.s64 = ctx.r6.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bne cr6,0x82bbfcf0
	if (!ctx.cr6.eq) goto loc_82BBFCF0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r27,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82bbfd60
	goto loc_82BBFD60;
loc_82BBFCF0:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82bbfd60
	if (!ctx.cr6.eq) goto loc_82BBFD60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bbfd38
	if (!ctx.cr6.eq) goto loc_82BBFD38;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bbfd60
	goto loc_82BBFD60;
loc_82BBFD38:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BBFD3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bbfd3c
	if (!ctx.cr6.eq) goto loc_82BBFD3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BBFD60;
	sub_8219CDA8(ctx, base);
loc_82BBFD60:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbfd74
	if (ctx.cr6.lt) goto loc_82BBFD74;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82BBFD74:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BBFD84;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82bbfc80
	if (ctx.cr6.lt) goto loc_82BBFC80;
loc_82BBFD9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BBFDA8"))) PPC_WEAK_FUNC(sub_82BBFDA8);
PPC_FUNC_IMPL(__imp__sub_82BBFDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BBFDB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BBFDC8;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BBFDD4;
	sub_822AF338(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r11,1876
	ctx.r26.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfdf4
	if (ctx.cr6.lt) goto loc_82BBFDF4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BBFDF4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r25,r11,1744
	ctx.r25.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bbfe54
	if (ctx.cr6.eq) goto loc_82BBFE54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBFE14;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbfe24
	if (!ctx.cr6.eq) goto loc_82BBFE24;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// b 0x82bbfe60
	goto loc_82BBFE60;
loc_82BBFE24:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbfe40
	if (ctx.cr6.lt) goto loc_82BBFE40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBFE40;
	sub_8227B8B8(ctx, base);
loc_82BBFE40:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bbfe54
	if (ctx.cr6.lt) goto loc_82BBFE54;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BBFE54:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r28,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r28.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82bbfe70
	if (!ctx.cr0.eq) goto loc_82BBFE70;
loc_82BBFE60:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBFE70;
	sub_82BC68F0(ctx, base);
loc_82BBFE70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfe88
	if (ctx.cr6.lt) goto loc_82BBFE88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BBFE88:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bbfee0
	if (ctx.cr6.eq) goto loc_82BBFEE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBFE9C;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbfeac
	if (!ctx.cr6.eq) goto loc_82BBFEAC;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x82bbfeec
	goto loc_82BBFEEC;
loc_82BBFEAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bbfec8
	if (ctx.cr6.lt) goto loc_82BBFEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BBFEC8;
	sub_8227B8B8(ctx, base);
loc_82BBFEC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbfee0
	if (ctx.cr6.lt) goto loc_82BBFEE0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BBFEE0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bbfefc
	if (!ctx.cr0.eq) goto loc_82BBFEFC;
loc_82BBFEEC:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BBFEFC;
	sub_82BC68F0(ctx, base);
loc_82BBFEFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFF14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82bbff40
	if (!ctx.cr6.eq) goto loc_82BBFF40;
loc_82BBFF20:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82BBFF40:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFF5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82bbff20
	if (ctx.cr6.eq) goto loc_82BBFF20;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BBFF84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bbffc0
	if (!ctx.cr6.eq) goto loc_82BBFFC0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BBFF98;
	sub_821885C0(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f2,-2932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2932);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BBFFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bc0074
	goto loc_82BC0074;
loc_82BBFFC0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bbff20
	if (!ctx.cr6.eq) goto loc_82BBFF20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bbffe0
	if (ctx.cr6.lt) goto loc_82BBFFE0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BBFFE0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc0038
	if (ctx.cr6.eq) goto loc_82BC0038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BBFFF4;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0004
	if (!ctx.cr6.eq) goto loc_82BC0004;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x82bc0044
	goto loc_82BC0044;
loc_82BC0004:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc0020
	if (ctx.cr6.lt) goto loc_82BC0020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0020;
	sub_8227B8B8(ctx, base);
loc_82BC0020:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0038
	if (ctx.cr6.lt) goto loc_82BC0038;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BC0038:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc0054
	if (!ctx.cr0.eq) goto loc_82BC0054;
loc_82BC0044:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC0054;
	sub_82BC68F0(ctx, base);
loc_82BC0054:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC0074:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82bbff20
	if (ctx.cr6.eq) goto loc_82BBFF20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc00b4
	if (!ctx.cr6.lt) goto loc_82BC00B4;
loc_82BC0090:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc0090
	if (ctx.cr6.lt) goto loc_82BC0090;
loc_82BC00B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BC00CC;
	sub_82BC5CD8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC00E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82bc0204
	if (!ctx.cr6.gt) goto loc_82BC0204;
	// li r25,3
	ctx.r25.s64 = 3;
loc_82BC00F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0158
	if (!ctx.cr6.eq) goto loc_82BC0158;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC013C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82bc01cc
	goto loc_82BC01CC;
loc_82BC0158:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc01cc
	if (!ctx.cr6.eq) goto loc_82BC01CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bc01a4
	if (!ctx.cr6.eq) goto loc_82BC01A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bc01cc
	goto loc_82BC01CC;
loc_82BC01A4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC01A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bc01a8
	if (!ctx.cr6.eq) goto loc_82BC01A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BC01CC;
	sub_8219CDA8(ctx, base);
loc_82BC01CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC01E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BC01F8;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82bc00f8
	if (ctx.cr6.lt) goto loc_82BC00F8;
loc_82BC0204:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0210"))) PPC_WEAK_FUNC(sub_82BC0210);
PPC_FUNC_IMPL(__imp__sub_82BC0210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x82BC0218;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r17,r11,1876
	ctx.r17.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc023c
	if (ctx.cr6.lt) goto loc_82BC023C;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82BC023C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc0294
	if (ctx.cr6.eq) goto loc_82BC0294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC0254;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0264
	if (!ctx.cr6.eq) goto loc_82BC0264;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82bc02a0
	goto loc_82BC02A0;
loc_82BC0264:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc0280
	if (ctx.cr6.lt) goto loc_82BC0280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0280;
	sub_8227B8B8(ctx, base);
loc_82BC0280:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc0294
	if (ctx.cr6.lt) goto loc_82BC0294;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82BC0294:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc02b8
	if (!ctx.cr0.eq) goto loc_82BC02B8;
loc_82BC02A0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BC02B8;
	sub_82BC68F0(ctx, base);
loc_82BC02B8:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BC02CC;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BC02D8;
	sub_822AF338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC02F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x82bc031c
	if (!ctx.cr6.eq) goto loc_82BC031C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	__restgprlr_17(ctx, base);
	return;
loc_82BC031C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82bc036c
	if (!ctx.cr6.lt) goto loc_82BC036C;
loc_82BC0348:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc0348
	if (ctx.cr6.lt) goto loc_82BC0348;
loc_82BC036C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BC0384;
	sub_82BC5CD8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC039C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82bc05bc
	if (!ctx.cr6.gt) goto loc_82BC05BC;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r19,5
	ctx.r19.s64 = 5;
	// li r21,4
	ctx.r21.s64 = 4;
loc_82BC03B8:
	// addi r23,r25,1
	ctx.r23.s64 = ctx.r25.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r10,r23
	ctx.r10.s64 = ctx.r23.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r7,68(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// lwz r6,64(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc0404
	if (ctx.cr6.lt) goto loc_82BC0404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0404;
	sub_8227B8B8(ctx, base);
loc_82BC0404:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bca340
	ctx.lr = 0x82BC0418;
	sub_82BCA340(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82bc0580
	if (!ctx.cr6.gt) goto loc_82BC0580;
loc_82BC0438:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0498
	if (!ctx.cr6.eq) goto loc_82BC0498;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC047C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stw r24,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x82bc0548
	goto loc_82BC0548;
loc_82BC0498:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc0548
	if (!ctx.cr6.eq) goto loc_82BC0548;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC04C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82bc04e4
	if (!ctx.cr6.eq) goto loc_82BC04E4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bc0548
	goto loc_82BC0548;
loc_82BC04E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82BC04E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bc04e8
	if (!ctx.cr6.eq) goto loc_82BC04E8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r9,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,68(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lwz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82bc0520
	if (ctx.cr6.lt) goto loc_82BC0520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0520;
	sub_8227B8B8(ctx, base);
loc_82BC0520:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r27,8(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ba30
	ctx.lr = 0x82BC0534;
	sub_8227BA30(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r21,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82BC0548:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc5eb0
	ctx.lr = 0x82BC0574;
	sub_82BC5EB0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82bc0438
	if (ctx.cr6.lt) goto loc_82BC0438;
loc_82BC0580:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc0594
	if (ctx.cr6.lt) goto loc_82BC0594;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
loc_82BC0594:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BC05A4;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82bc03b8
	if (ctx.cr6.lt) goto loc_82BC03B8;
loc_82BC05BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC05C8"))) PPC_WEAK_FUNC(sub_82BC05C8);
PPC_FUNC_IMPL(__imp__sub_82BC05C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BC05D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BC05E8;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BC05F4;
	sub_822AF338(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r11,1876
	ctx.r25.s64 = ctx.r11.s64 + 1876;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0614
	if (ctx.cr6.lt) goto loc_82BC0614;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0614:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// addi r24,r11,1744
	ctx.r24.s64 = ctx.r11.s64 + 1744;
	// beq cr6,0x82bc0674
	if (ctx.cr6.eq) goto loc_82BC0674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC0634;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0644
	if (!ctx.cr6.eq) goto loc_82BC0644;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x82bc0680
	goto loc_82BC0680;
loc_82BC0644:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc0660
	if (ctx.cr6.lt) goto loc_82BC0660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0660;
	sub_8227B8B8(ctx, base);
loc_82BC0660:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc0674
	if (ctx.cr6.lt) goto loc_82BC0674;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0674:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r28,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r28.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82bc0690
	if (!ctx.cr0.eq) goto loc_82BC0690;
loc_82BC0680:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC0690;
	sub_82BC68F0(ctx, base);
loc_82BC0690:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc06a8
	if (ctx.cr6.lt) goto loc_82BC06A8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC06A8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc0700
	if (ctx.cr6.eq) goto loc_82BC0700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC06BC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc06cc
	if (!ctx.cr6.eq) goto loc_82BC06CC;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x82bc070c
	goto loc_82BC070C;
loc_82BC06CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc06e8
	if (ctx.cr6.lt) goto loc_82BC06E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC06E8;
	sub_8227B8B8(ctx, base);
loc_82BC06E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0700
	if (ctx.cr6.lt) goto loc_82BC0700;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0700:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r29,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r29.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82bc071c
	if (!ctx.cr0.eq) goto loc_82BC071C;
loc_82BC070C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC071C;
	sub_82BC68F0(ctx, base);
loc_82BC071C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0734
	if (ctx.cr6.lt) goto loc_82BC0734;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0734:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc078c
	if (ctx.cr6.eq) goto loc_82BC078C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC0748;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0758
	if (!ctx.cr6.eq) goto loc_82BC0758;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x82bc0798
	goto loc_82BC0798;
loc_82BC0758:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc0774
	if (ctx.cr6.lt) goto loc_82BC0774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0774;
	sub_8227B8B8(ctx, base);
loc_82BC0774:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc078c
	if (ctx.cr6.lt) goto loc_82BC078C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC078C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc07a8
	if (!ctx.cr0.eq) goto loc_82BC07A8;
loc_82BC0798:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC07A8;
	sub_82BC68F0(ctx, base);
loc_82BC07A8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC07C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82bc0a40
	if (ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC07E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82bc0a40
	if (ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82bc0a40
	if (ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0874
	if (!ctx.cr6.eq) goto loc_82BC0874;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BC084C;
	sub_821885C0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f2,-2932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2932);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC0870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bc0928
	goto loc_82BC0928;
loc_82BC0874:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc0a40
	if (!ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0894
	if (ctx.cr6.lt) goto loc_82BC0894;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0894:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc08ec
	if (ctx.cr6.eq) goto loc_82BC08EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC08A8;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc08b8
	if (!ctx.cr6.eq) goto loc_82BC08B8;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x82bc08f8
	goto loc_82BC08F8;
loc_82BC08B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc08d4
	if (ctx.cr6.lt) goto loc_82BC08D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC08D4;
	sub_8227B8B8(ctx, base);
loc_82BC08D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc08ec
	if (ctx.cr6.lt) goto loc_82BC08EC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC08EC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc0908
	if (!ctx.cr0.eq) goto loc_82BC0908;
loc_82BC08F8:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC0908;
	sub_82BC68F0(ctx, base);
loc_82BC0908:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC0928:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82bc0a40
	if (ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0988
	if (!ctx.cr6.eq) goto loc_82BC0988;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821885c0
	ctx.lr = 0x82BC0964;
	sub_821885C0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82bc0a40
	goto loc_82BC0A40;
loc_82BC0988:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82bc0a40
	if (!ctx.cr6.eq) goto loc_82BC0A40;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc09a8
	if (ctx.cr6.lt) goto loc_82BC09A8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC09A8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc0a00
	if (ctx.cr6.eq) goto loc_82BC0A00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC09BC;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc09cc
	if (!ctx.cr6.eq) goto loc_82BC09CC;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// b 0x82bc0a0c
	goto loc_82BC0A0C;
loc_82BC09CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc09e8
	if (ctx.cr6.lt) goto loc_82BC09E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC09E8;
	sub_8227B8B8(ctx, base);
loc_82BC09E8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0a00
	if (ctx.cr6.lt) goto loc_82BC0A00;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82BC0A00:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc0a1c
	if (!ctx.cr0.eq) goto loc_82BC0A1C;
loc_82BC0A0C:
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc68f0
	ctx.lr = 0x82BC0A1C;
	sub_82BC68F0(ctx, base);
loc_82BC0A1C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC0A40:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0A60"))) PPC_WEAK_FUNC(sub_82BC0A60);
PPC_FUNC_IMPL(__imp__sub_82BC0A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BC0A68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r24,r11,1876
	ctx.r24.s64 = ctx.r11.s64 + 1876;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82bc0a8c
	if (ctx.cr6.lt) goto loc_82BC0A8C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BC0A8C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82bc0ae4
	if (ctx.cr6.eq) goto loc_82BC0AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bcbdc8
	ctx.lr = 0x82BC0AA4;
	sub_82BCBDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82bc0ab4
	if (!ctx.cr6.eq) goto loc_82BC0AB4;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x82bc0af0
	goto loc_82BC0AF0;
loc_82BC0AB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc0ad0
	if (ctx.cr6.lt) goto loc_82BC0AD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227b8b8
	ctx.lr = 0x82BC0AD0;
	sub_8227B8B8(ctx, base);
loc_82BC0AD0:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc0ae4
	if (ctx.cr6.lt) goto loc_82BC0AE4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BC0AE4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic. r30,r11,16
	ctx.xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r30.s64 = ctx.r11.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82bc0b08
	if (!ctx.cr0.eq) goto loc_82BC0B08;
loc_82BC0AF0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,1744
	ctx.r10.s64 = ctx.r11.s64 + 1744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bc68f0
	ctx.lr = 0x82BC0B08;
	sub_82BC68F0(ctx, base);
loc_82BC0B08:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// addi r5,r11,-6624
	ctx.r5.s64 = ctx.r11.s64 + -6624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e1408
	ctx.lr = 0x82BC0B1C;
	sub_821E1408(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af338
	ctx.lr = 0x82BC0B28;
	sub_822AF338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC0B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82bc0b6c
	if (!ctx.cr6.eq) goto loc_82BC0B6C;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82BC0B6C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82bc0b9c
	if (!ctx.cr6.lt) goto loc_82BC0B9C;
loc_82BC0B78:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82bc0b78
	if (ctx.cr6.lt) goto loc_82BC0B78;
loc_82BC0B9C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82bc5cd8
	ctx.lr = 0x82BC0BB4;
	sub_82BC5CD8(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC0BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82bc0cb0
	if (!ctx.cr6.gt) goto loc_82BC0CB0;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82BC0BE0:
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC0C28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bc0c4c
	if (!ctx.cr6.eq) goto loc_82BC0C4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82bc0c74
	goto loc_82BC0C74;
loc_82BC0C4C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82BC0C50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bc0c50
	if (!ctx.cr6.eq) goto loc_82BC0C50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8219cda8
	ctx.lr = 0x82BC0C74;
	sub_8219CDA8(ctx, base);
loc_82BC0C74:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc0c88
	if (ctx.cr6.lt) goto loc_82BC0C88;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82BC0C88:
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a518
	ctx.lr = 0x82BC0C98;
	sub_8229A518(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// blt cr6,0x82bc0be0
	if (ctx.cr6.lt) goto loc_82BC0BE0;
loc_82BC0CB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0CBC"))) PPC_WEAK_FUNC(sub_82BC0CBC);
PPC_FUNC_IMPL(__imp__sub_82BC0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC0CC0"))) PPC_WEAK_FUNC(sub_82BC0CC0);
PPC_FUNC_IMPL(__imp__sub_82BC0CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BC0CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-5676
	ctx.r10.s64 = ctx.r11.s64 + -5676;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc0d10
	if (ctx.cr6.eq) goto loc_82BC0D10;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BC0CF4;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC0D00;
	sub_82BA9068(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82BC0D10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0D18"))) PPC_WEAK_FUNC(sub_82BC0D18);
PPC_FUNC_IMPL(__imp__sub_82BC0D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,3224
	ctx.r3.s64 = ctx.r11.s64 + 3224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC0D30"))) PPC_WEAK_FUNC(sub_82BC0D30);
PPC_FUNC_IMPL(__imp__sub_82BC0D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// sth r31,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r31.u16);
	// sth r31,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r31.u16);
	// beq cr6,0x82bc0d70
	if (ctx.cr6.eq) goto loc_82BC0D70;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BC0D6C;
	sub_82BA8850(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BC0D70:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82ba8ac8
	ctx.lr = 0x82BC0D7C;
	sub_82BA8AC8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82bc0d9c
	if (ctx.cr6.eq) goto loc_82BC0D9C;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BC0D90;
	sub_82BA8718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC0D9C;
	sub_82BA9068(ctx, base);
loc_82BC0D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC0DB4"))) PPC_WEAK_FUNC(sub_82BC0DB4);
PPC_FUNC_IMPL(__imp__sub_82BC0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC0DB8"))) PPC_WEAK_FUNC(sub_82BC0DB8);
PPC_FUNC_IMPL(__imp__sub_82BC0DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bc0cc0
	ctx.lr = 0x82BC0DD8;
	sub_82BC0CC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc0df0
	if (ctx.cr6.eq) goto loc_82BC0DF0;
	// bl 0x8221be68
	ctx.lr = 0x82BC0DEC;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC0DF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC0E08"))) PPC_WEAK_FUNC(sub_82BC0E08);
PPC_FUNC_IMPL(__imp__sub_82BC0E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,-5704
	ctx.r10.s64 = ctx.r11.s64 + -5704;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82bc0cc0
	ctx.lr = 0x82BC0E34;
	sub_82BC0CC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc0e4c
	if (ctx.cr6.eq) goto loc_82BC0E4C;
	// bl 0x8221be68
	ctx.lr = 0x82BC0E48;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC0E4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC0E64"))) PPC_WEAK_FUNC(sub_82BC0E64);
PPC_FUNC_IMPL(__imp__sub_82BC0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC0E68"))) PPC_WEAK_FUNC(sub_82BC0E68);
PPC_FUNC_IMPL(__imp__sub_82BC0E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BC0E70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-5664
	ctx.r10.s64 = ctx.r11.s64 + -5664;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r30.u16);
	// addi r6,r8,-6540
	ctx.r6.s64 = ctx.r8.s64 + -6540;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lfs f1,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f99e8
	ctx.lr = 0x82BC0EB4;
	sub_823F99E8(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r30.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ca3190
	ctx.lr = 0x82BC0EC8;
	sub_82CA3190(ctx, base);
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r29,r7,-6528
	ctx.r29.s64 = ctx.r7.s64 + -6528;
	// addi r28,r6,-6412
	ctx.r28.s64 = ctx.r6.s64 + -6412;
	// bl 0x82ba8718
	ctx.lr = 0x82BC0EDC;
	sub_82BA8718(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,53
	ctx.r7.s64 = 53;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC0EF0;
	sub_82BA8F18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// li r11,28
	ctx.r11.s64 = 28;
	// ori r10,r4,61904
	ctx.r10.u64 = ctx.r4.u64 | 61904;
	// addic. r3,r5,16
	ctx.xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r3.s64 = ctx.r5.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beq 0x82bc0f24
	if (ctx.cr0.eq) goto loc_82BC0F24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// bl 0x82bc3018
	ctx.lr = 0x82BC0F20;
	sub_82BC3018(ctx, base);
	// b 0x82bc0f28
	goto loc_82BC0F28;
loc_82BC0F24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82BC0F28:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC0F40"))) PPC_WEAK_FUNC(sub_82BC0F40);
PPC_FUNC_IMPL(__imp__sub_82BC0F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82bc0f90
	ctx.lr = 0x82BC0F60;
	sub_82BC0F90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc0f78
	if (ctx.cr6.eq) goto loc_82BC0F78;
	// bl 0x8221be68
	ctx.lr = 0x82BC0F74;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82BC0F78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC0F90"))) PPC_WEAK_FUNC(sub_82BC0F90);
PPC_FUNC_IMPL(__imp__sub_82BC0F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// addi r10,r11,-5664
	ctx.r10.s64 = ctx.r11.s64 + -5664;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82bc0fd8
	if (ctx.cr6.eq) goto loc_82BC0FD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC0FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82baa458
	ctx.lr = 0x82BC0FD8;
	sub_82BAA458(ctx, base);
loc_82BC0FD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x823f9a78
	ctx.lr = 0x82BC0FEC;
	sub_823F9A78(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-5704
	ctx.r9.s64 = ctx.r10.s64 + -5704;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82bc0cc0
	ctx.lr = 0x82BC1000;
	sub_82BC0CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC1014"))) PPC_WEAK_FUNC(sub_82BC1014);
PPC_FUNC_IMPL(__imp__sub_82BC1014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1018"))) PPC_WEAK_FUNC(sub_82BC1018);
PPC_FUNC_IMPL(__imp__sub_82BC1018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82BC1020;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// addi r4,r10,-10300
	ctx.r4.s64 = ctx.r10.s64 + -10300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ba8850
	ctx.lr = 0x82BC104C;
	sub_82BA8850(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba8b40
	ctx.lr = 0x82BC1058;
	sub_82BA8B40(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82bc1080
	if (ctx.cr6.eq) goto loc_82BC1080;
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1074;
	sub_82BA8718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC1080;
	sub_82BA9068(ctx, base);
loc_82BC1080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC108C"))) PPC_WEAK_FUNC(sub_82BC108C);
PPC_FUNC_IMPL(__imp__sub_82BC108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC1090"))) PPC_WEAK_FUNC(sub_82BC1090);
PPC_FUNC_IMPL(__imp__sub_82BC1090) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,92
	ctx.r3.s64 = ctx.r3.s64 + 92;
	// b 0x823f9a78
	sub_823F9A78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC109C"))) PPC_WEAK_FUNC(sub_82BC109C);
PPC_FUNC_IMPL(__imp__sub_82BC109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC10A0"))) PPC_WEAK_FUNC(sub_82BC10A0);
PPC_FUNC_IMPL(__imp__sub_82BC10A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82BC10A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC10C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82bc10dc
	if (!ctx.cr6.eq) goto loc_82BC10DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
loc_82BC10DC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC10F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC110C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82bc1140
	if (!ctx.cr6.eq) goto loc_82BC1140;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r10,-6388
	ctx.r4.s64 = ctx.r10.s64 + -6388;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC1138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc1154
	if (ctx.cr6.eq) goto loc_82BC1154;
loc_82BC1140:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc12a0
	ctx.lr = 0x82BC114C;
	sub_82BC12A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC1154:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc1174
	if (ctx.cr6.eq) goto loc_82BC1174;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc1560
	ctx.lr = 0x82BC116C;
	sub_82BC1560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC1174:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc11a8
	if (ctx.cr6.eq) goto loc_82BC11A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc2da0
	ctx.lr = 0x82BC11A0;
	sub_82BC2DA0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 & ctx.r28.u64;
loc_82BC11A8:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc11c8
	if (ctx.cr6.eq) goto loc_82BC11C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc1968
	ctx.lr = 0x82BC11C0;
	sub_82BC1968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC11C8:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc11e8
	if (ctx.cr6.eq) goto loc_82BC11E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc1df8
	ctx.lr = 0x82BC11E0;
	sub_82BC1DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC11E8:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc121c
	if (ctx.cr6.eq) goto loc_82BC121C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc1fb8
	ctx.lr = 0x82BC1214;
	sub_82BC1FB8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 & ctx.r28.u64;
loc_82BC121C:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc123c
	if (ctx.cr6.eq) goto loc_82BC123C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc2328
	ctx.lr = 0x82BC1234;
	sub_82BC2328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC123C:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc125c
	if (ctx.cr6.eq) goto loc_82BC125C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc26d0
	ctx.lr = 0x82BC1254;
	sub_82BC26D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC125C:
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82bc127c
	if (ctx.cr6.eq) goto loc_82BC127C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc2860
	ctx.lr = 0x82BC1274;
	sub_82BC2860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// and r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 & ctx.r28.u64;
loc_82BC127C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC129C"))) PPC_WEAK_FUNC(sub_82BC129C);
PPC_FUNC_IMPL(__imp__sub_82BC129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC12A0"))) PPC_WEAK_FUNC(sub_82BC12A0);
PPC_FUNC_IMPL(__imp__sub_82BC12A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BC12A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC12D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r8,141(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 141);
	// lis r27,-31951
	ctx.r27.s64 = -2093940736;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r30,r5,1
	ctx.r30.u64 = ctx.r5.u64 ^ 1;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82bc1368
	if (ctx.cr6.eq) goto loc_82BC1368;
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1328
	if (ctx.cr6.eq) goto loc_82BC1328;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-6360
	ctx.r4.s64 = ctx.r10.s64 + -6360;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC131C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BC1328:
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6216
	ctx.r4.s64 = ctx.r11.s64 + -6216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc1354
	if (!ctx.cr6.eq) goto loc_82BC1354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,3224
	ctx.r11.s64 = ctx.r11.s64 + 3224;
loc_82BC1354:
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC1368:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stb r30,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r30.u8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC138C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC13A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82BC13B0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC13D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82bc13b0
	if (ctx.cr6.lt) goto loc_82BC13B0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC1404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// beq cr6,0x82bc1438
	if (ctx.cr6.eq) goto loc_82BC1438;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-6128
	ctx.r4.s64 = ctx.r11.s64 + -6128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC142C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BC1438:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lhz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC14A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lhz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC14C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stw r29,480(r28)
	PPC_STORE_U32(ctx.r28.u32 + 480, ctx.r29.u32);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r26,484(r28)
	PPC_STORE_U32(ctx.r28.u32 + 484, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 488, ctx.r4.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC14F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,476(r28)
	PPC_STORE_U32(ctx.r28.u32 + 476, ctx.r9.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82bc1554
	if (ctx.cr6.eq) goto loc_82BC1554;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lwz r10,19068(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19068);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-6016
	ctx.r4.s64 = ctx.r11.s64 + -6016;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BC1554:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1560"))) PPC_WEAK_FUNC(sub_82BC1560);
PPC_FUNC_IMPL(__imp__sub_82BC1560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x82BC1568;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r29,19
	ctx.r29.s64 = 19;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82BC15A4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC15C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82bc15a4
	if (!ctx.cr0.eq) goto loc_82BC15A4;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82BC15E0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC15FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82bc15e0
	if (!ctx.cr0.eq) goto loc_82BC15E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,24(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC162C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 * 68;
	// stw r29,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r29.u32);
	// stw r28,88(r25)
	PPC_STORE_U32(ctx.r25.u32 + 88, ctx.r28.u32);
	// stw r27,92(r25)
	PPC_STORE_U32(ctx.r25.u32 + 92, ctx.r27.u32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// addi r28,r8,-12608
	ctx.r28.s64 = ctx.r8.s64 + -12608;
	// addi r27,r7,-12496
	ctx.r27.s64 = ctx.r7.s64 + -12496;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1664;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC1678;
	sub_82BA8F18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r6,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r6.u32);
	// stw r6,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r28,28(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,124(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 124);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82BC16A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r28,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r28.u32);
	// addi r28,r3,-12472
	ctx.r28.s64 = ctx.r3.s64 + -12472;
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r29,r10,-12360
	ctx.r29.s64 = ctx.r10.s64 + -12360;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ba8718
	ctx.lr = 0x82BC16CC;
	sub_82BA8718(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,66
	ctx.r7.s64 = 66;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC16E0;
	sub_82BA8F18(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// stw r9,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r9.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r27,r6,-13592
	ctx.r27.s64 = ctx.r6.s64 + -13592;
	// addi r25,r5,-13480
	ctx.r25.s64 = ctx.r5.s64 + -13480;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// bl 0x82ba8718
	ctx.lr = 0x82BC1720;
	sub_82BA8718(ctx, base);
	// rlwinm r4,r29,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,66
	ctx.r7.s64 = 66;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC1734;
	sub_82BA8F18(ctx, base);
	// stw r3,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r3.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,132(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC1754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r27,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// stw r29,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r29.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r27.u32);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r27,r9,-12024
	ctx.r27.s64 = ctx.r9.s64 + -12024;
	// addi r24,r8,-11912
	ctx.r24.s64 = ctx.r8.s64 + -11912;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1788;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,73
	ctx.r7.s64 = 73;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC179C;
	sub_82BA8F18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// stw r7,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r7.u32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r27,60(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,136(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 136);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82BC17CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// stw r28,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r28.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r27,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r27.u32);
	// addi r28,r4,-12160
	ctx.r28.s64 = ctx.r4.s64 + -12160;
	// stw r29,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r29.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r3,-12052
	ctx.r29.s64 = ctx.r3.s64 + -12052;
	// rlwinm r27,r11,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1804;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,84
	ctx.r7.s64 = 84;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC1818;
	sub_82BA8F18(ctx, base);
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r9,40(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r8,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,68(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r6,140(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC1854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lis r4,-32240
	ctx.r4.s64 = -2112880640;
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r25,r5,-13312
	ctx.r25.s64 = ctx.r5.s64 + -13312;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// addi r29,r4,-13196
	ctx.r29.s64 = ctx.r4.s64 + -13196;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1874;
	sub_82BA8718(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r7,63
	ctx.r7.s64 = 63;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC1888;
	sub_82BA8F18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,88(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r31,72(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC18BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// stw r30,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r30.u32);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r29,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r29.u32);
	// addi r30,r8,-12328
	ctx.r30.s64 = ctx.r8.s64 + -12328;
	// stw r28,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r28.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r31.u32);
	// addi r29,r7,-12220
	ctx.r29.s64 = ctx.r7.s64 + -12220;
	// stw r27,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r27.u32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ba8718
	ctx.lr = 0x82BC1904;
	sub_82BA8718(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC1918;
	sub_82BA8F18(ctx, base);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r3.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r4.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82bc195c
	if (ctx.cr6.eq) goto loc_82BC195C;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5968
	ctx.r4.s64 = ctx.r10.s64 + -5968;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC1950;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
loc_82BC195C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1968"))) PPC_WEAK_FUNC(sub_82BC1968);
PPC_FUNC_IMPL(__imp__sub_82BC1968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x82BC1970;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC19A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82BC19C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r19,r28,92
	ctx.r19.s64 = ctx.r28.s64 + 92;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823f9ae0
	ctx.lr = 0x82BC19D8;
	sub_823F9AE0(ctx, base);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC19F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// ble 0x82bc1db8
	if (!ctx.cr0.gt) goto loc_82BC1DB8;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r17,-31924
	ctx.r17.s64 = -2092171264;
	// lis r23,-31924
	ctx.r23.s64 = -2092171264;
	// lis r21,-31924
	ctx.r21.s64 = -2092171264;
	// lis r18,-31924
	ctx.r18.s64 = -2092171264;
	// addi r15,r11,3224
	ctx.r15.s64 = ctx.r11.s64 + 3224;
loc_82BC1A28:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r26
	ctx.r30.u64 = ctx.r3.u64 + ctx.r26.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc1b6c
	if (ctx.cr6.eq) goto loc_82BC1B6C;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc1b44
	if (!ctx.cr6.eq) goto loc_82BC1B44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bc1b50
	goto loc_82BC1B50;
loc_82BC1B44:
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82BC1B50:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82bad0a8
	ctx.lr = 0x82BC1B68;
	sub_82BAD0A8(ctx, base);
	// b 0x82bc1ba4
	goto loc_82BC1BA4;
loc_82BC1B6C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82bc1b80
	if (!ctx.cr6.eq) goto loc_82BC1B80;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bc1b8c
	goto loc_82BC1B8C;
loc_82BC1B80:
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82BC1B8C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82bacfb0
	ctx.lr = 0x82BC1BA4;
	sub_82BACFB0(ctx, base);
loc_82BC1BA4:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82284810
	ctx.lr = 0x82BC1BB8;
	sub_82284810(ctx, base);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r26,r3,r29
	ctx.r26.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bc1d8c
	if (!ctx.cr6.gt) goto loc_82BC1D8C;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82BC1BEC:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1C08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r26
	ctx.r30.u64 = ctx.r3.u64 + ctx.r26.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,30,2,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,28,5,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r10,r7,7,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1F;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// or r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r29,0,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1C;
	// add r26,r3,r30
	ctx.r26.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// bne cr6,0x82bc1c80
	if (!ctx.cr6.eq) goto loc_82BC1C80;
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82bc1c84
	goto loc_82BC1C84;
loc_82BC1C80:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BC1C84:
	// lwz r11,-7424(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + -7424);
	// rlwinm r30,r29,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bc1cc4
	if (!ctx.cr6.eq) goto loc_82BC1CC4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1ca8
	if (ctx.cr6.eq) goto loc_82BC1CA8;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82BC1CA8:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BC1CC4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,-7420(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -7420);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// or r27,r6,r27
	ctx.r27.u64 = ctx.r6.u64 | ctx.r27.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82bc1d00
	if (ctx.cr6.eq) goto loc_82BC1D00;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// b 0x82bc1d0c
	goto loc_82BC1D0C;
loc_82BC1D00:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82BC1D0C:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,-7688(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -7688);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r7,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r7.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// beq cr6,0x82bc1d54
	if (ctx.cr6.eq) goto loc_82BC1D54;
	// lwz r11,-7684(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -7684);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bc1d74
	if (!ctx.cr6.eq) goto loc_82BC1D74;
loc_82BC1D54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC1D74:
	// addi r11,r24,1
	ctx.r11.s64 = ctx.r24.s64 + 1;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82bc1bec
	if (ctx.cr6.lt) goto loc_82BC1BEC;
loc_82BC1D8C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc1db0
	if (ctx.cr6.eq) goto loc_82BC1DB0;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82BC1DB0:
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne 0x82bc1a28
	if (!ctx.cr0.eq) goto loc_82BC1A28;
loc_82BC1DB8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc1dec
	if (ctx.cr6.eq) goto loc_82BC1DEC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5924
	ctx.r4.s64 = ctx.r10.s64 + -5924;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC1DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
loc_82BC1DEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1DF8"))) PPC_WEAK_FUNC(sub_82BC1DF8);
PPC_FUNC_IMPL(__imp__sub_82BC1DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BC1E00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1E20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC1E68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82bc1f78
	if (!ctx.cr6.gt) goto loc_82BC1F78;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82BC1E78:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC1EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,124(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r4,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82bc1f70
	if (!ctx.cr6.gt) goto loc_82BC1F70;
loc_82BC1F08:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC1F40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82bc1f08
	if (ctx.cr6.lt) goto loc_82BC1F08;
loc_82BC1F70:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82bc1e78
	if (!ctx.cr0.eq) goto loc_82BC1E78;
loc_82BC1F78:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc1fac
	if (ctx.cr6.eq) goto loc_82BC1FAC;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5892
	ctx.r4.s64 = ctx.r10.s64 + -5892;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC1FA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BC1FAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC1FB8"))) PPC_WEAK_FUNC(sub_82BC1FB8);
PPC_FUNC_IMPL(__imp__sub_82BC1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82BC1FC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC1FE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82bc22e4
	if (!ctx.cr6.gt) goto loc_82BC22E4;
loc_82BC1FFC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC203C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2084;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC20A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cntlzw r6,r4
	ctx.r6.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r3,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r6,28,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x2;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// xori r6,r3,2
	ctx.r6.u64 = ctx.r3.u64 ^ 2;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// lwzx r7,r4,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// or r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// rlwinm r3,r4,30,0,1
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xC0000000;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc22d4
	if (ctx.cr6.eq) goto loc_82BC22D4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82BC213C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC217C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC21A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC21C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC21E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC220C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// stfsx f5,r10,r9
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r3,0,0,1
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xC0000000) | (ctx.r8.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82bc213c
	if (ctx.cr6.lt) goto loc_82BC213C;
loc_82BC22D4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bc1ffc
	if (ctx.cr6.lt) goto loc_82BC1FFC;
loc_82BC22E4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc2318
	if (ctx.cr6.eq) goto loc_82BC2318;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5860
	ctx.r4.s64 = ctx.r10.s64 + -5860;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC230C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
loc_82BC2318:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2324"))) PPC_WEAK_FUNC(sub_82BC2324);
PPC_FUNC_IMPL(__imp__sub_82BC2324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2328"))) PPC_WEAK_FUNC(sub_82BC2328);
PPC_FUNC_IMPL(__imp__sub_82BC2328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82BC2330;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC2368;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC238C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// ble cr6,0x82bc2690
	if (!ctx.cr6.gt) goto loc_82BC2690;
	// lis r25,-31924
	ctx.r25.s64 = -2092171264;
loc_82BC23A8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC23C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,124(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// add r29,r3,r28
	ctx.r29.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r27,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r27.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC241C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r28,r3,r29
	ctx.r28.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82bc2680
	if (ctx.cr6.eq) goto loc_82BC2680;
loc_82BC2430:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC244C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r29,r3,r28
	ctx.r29.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// sth r27,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r27.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC24B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r28,r3,r29
	ctx.r28.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc2670
	if (ctx.cr6.eq) goto loc_82BC2670;
loc_82BC24CC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC24E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC250C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6804(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -6804);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82bc25d8
	if (!ctx.cr6.eq) goto loc_82BC25D8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwimi r11,r10,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwimi r9,r11,28,5,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x7FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFF8000000);
	// rlwinm r6,r9,7,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1F;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r4,r5,0,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1C;
	// cmplwi cr6,r4,20
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20, ctx.xer);
	// bne cr6,0x82bc25d8
	if (!ctx.cr6.eq) goto loc_82BC25D8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC25D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82BC25D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r3,r7,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// stw r22,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r22.u32);
	// lbz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r4,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r4.u16);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc24cc
	if (ctx.cr6.lt) goto loc_82BC24CC;
loc_82BC2670:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc2430
	if (ctx.cr6.lt) goto loc_82BC2430;
loc_82BC2680:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bc23a8
	if (ctx.cr6.lt) goto loc_82BC23A8;
loc_82BC2690:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc26c4
	if (ctx.cr6.eq) goto loc_82BC26C4;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5828
	ctx.r4.s64 = ctx.r10.s64 + -5828;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC26B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
loc_82BC26C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC26D0"))) PPC_WEAK_FUNC(sub_82BC26D0);
PPC_FUNC_IMPL(__imp__sub_82BC26D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82BC26D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC26F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,140(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 140);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC2710;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC273C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31924
	ctx.r10.s64 = -2092171264;
	// lis r27,-31924
	ctx.r27.s64 = -2092171264;
	// lwz r11,7964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7964);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r30,68(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// bne cr6,0x82bc2770
	if (!ctx.cr6.eq) goto loc_82BC2770;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r3,r9,3336
	ctx.r3.s64 = ctx.r9.s64 + 3336;
	// stw r11,7964(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7964, ctx.r11.u32);
	// bl 0x82188cf0
	ctx.lr = 0x82BC276C;
	sub_82188CF0(ctx, base);
	// stw r3,7960(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7960, ctx.r3.u32);
loc_82BC2770:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82bc2820
	if (!ctx.cr6.gt) goto loc_82BC2820;
loc_82BC2778:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC27B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7960(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7960);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82bc27e8
	if (!ctx.cr6.eq) goto loc_82BC27E8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC27E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82BC27E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// bne 0x82bc2778
	if (!ctx.cr0.eq) goto loc_82BC2778;
loc_82BC2820:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc2854
	if (ctx.cr6.eq) goto loc_82BC2854;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5800
	ctx.r4.s64 = ctx.r10.s64 + -5800;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_82BC2854:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2860"))) PPC_WEAK_FUNC(sub_82BC2860);
PPC_FUNC_IMPL(__imp__sub_82BC2860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82BC2868;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,128(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC28A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82BC28C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82bc2d5c
	if (!ctx.cr6.gt) goto loc_82BC2D5C;
	// lis r24,-31951
	ctx.r24.s64 = -2093940736;
loc_82BC28DC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r10,19056(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 19056);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC28FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2944;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC298C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC29B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x82bad8a8
	ctx.lr = 0x82BC29DC;
	sub_82BAD8A8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc2d4c
	if (ctx.cr6.eq) goto loc_82BC2D4C;
loc_82BC29EC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// subfic r4,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwimi r5,r10,0,0,4
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF8000000) | (ctx.r5.u64 & 0xFFFFFFFF07FFFFFF);
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r5.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r8,r3,31
	ctx.r8.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82bc2ab4
	if (ctx.cr6.eq) goto loc_82BC2AB4;
	// lhz r11,6(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82bc2ab4
	if (ctx.cr6.eq) goto loc_82BC2AB4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_82BC2AB4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// or r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 | ctx.r10.u64;
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// sth r3,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r27,r3,r29
	ctx.r27.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82bc2c1c
	if (ctx.cr6.eq) goto loc_82BC2C1C;
loc_82BC2B40:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2B5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,30,2,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 30) & 0x3FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r8,28,5,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 28) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r10,r7,7,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x1F;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// or r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 | ctx.r6.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82BC2BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r28,0,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1C;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// bne cr6,0x82bc2bcc
	if (!ctx.cr6.eq) goto loc_82BC2BCC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
loc_82BC2BCC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r10,r8,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// rlwimi r7,r8,0,31,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x1) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r7,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r7.u16);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82bc2b40
	if (ctx.cr6.lt) goto loc_82BC2B40;
loc_82BC2C1C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r29,r3,r27
	ctx.r29.u64 = ctx.r3.u64 + ctx.r27.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82bc2d3c
	if (ctx.cr6.eq) goto loc_82BC2D3C;
loc_82BC2C4C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2C68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82BC2C8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lhz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// subfic r9,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r5.s64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r5,r4
	ctx.r5.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r4,r8,31
	ctx.r4.u64 = ctx.r8.u32 & 0x1;
	// lhz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwimi r10,r3,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r9,r11,28,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r5,r9,2
	ctx.r5.u64 = ctx.r9.u64 ^ 2;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwimi r7,r4,14,16,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0xC000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF3FFF);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82bc2c4c
	if (ctx.cr6.lt) goto loc_82BC2C4C;
loc_82BC2D3C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82bc29ec
	if (ctx.cr6.lt) goto loc_82BC29EC;
loc_82BC2D4C:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82bc28dc
	if (ctx.cr6.lt) goto loc_82BC28DC;
loc_82BC2D5C:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc2d90
	if (ctx.cr6.eq) goto loc_82BC2D90;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5764
	ctx.r4.s64 = ctx.r10.s64 + -5764;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
loc_82BC2D90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC2D9C"))) PPC_WEAK_FUNC(sub_82BC2D9C);
PPC_FUNC_IMPL(__imp__sub_82BC2D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC2DA0"))) PPC_WEAK_FUNC(sub_82BC2DA0);
PPC_FUNC_IMPL(__imp__sub_82BC2DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x82BC2DA8;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r11,-6528
	ctx.r22.s64 = ctx.r11.s64 + -6528;
	// addi r21,r10,-9404
	ctx.r21.s64 = ctx.r10.s64 + -9404;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// li r24,256
	ctx.r24.s64 = 256;
	// lwz r31,40(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// bl 0x82ba8718
	ctx.lr = 0x82BC2DF4;
	sub_82BA8718(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,746
	ctx.r7.s64 = 746;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC2E08;
	sub_82BA8F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82bc2fc4
	if (!ctx.cr6.gt) goto loc_82BC2FC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// lis r23,-31951
	ctx.r23.s64 = -2093940736;
	// addi r20,r11,3224
	ctx.r20.s64 = ctx.r11.s64 + 3224;
loc_82BC2E24:
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2E40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82bc2e84
	if (ctx.cr6.lt) goto loc_82BC2E84;
	// bl 0x82ba8718
	ctx.lr = 0x82BC2E54;
	sub_82BA8718(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC2E60;
	sub_82BA9068(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BC2E6C;
	sub_82BA8718(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,757
	ctx.r7.s64 = 757;
	// bl 0x82ba8f18
	ctx.lr = 0x82BC2E80;
	sub_82BA8F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82BC2E84:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,19056(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 19056);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82BC2EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// sth r28,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r28.u16);
	// sth r28,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stbx r28,r9,r29
	PPC_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r7.u32);
	// beq cr6,0x82bc2f04
	if (ctx.cr6.eq) goto loc_82BC2F04;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ba8850
	ctx.lr = 0x82BC2F00;
	sub_82BA8850(ctx, base);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82BC2F04:
	// lhz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82bc2f1c
	if (ctx.cr6.eq) goto loc_82BC2F1C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82bc2f6c
	goto loc_82BC2F6C;
loc_82BC2F1C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82bc2f2c
	if (!ctx.cr6.eq) goto loc_82BC2F2C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82bc2f6c
	goto loc_82BC2F6C;
loc_82BC2F2C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82bc2f3c
	if (!ctx.cr6.eq) goto loc_82BC2F3C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82BC2F3C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82BC2F40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82bc2f64
	if (ctx.cr6.eq) goto loc_82BC2F64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82bc2f40
	if (ctx.cr6.eq) goto loc_82BC2F40;
loc_82BC2F64:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82BC2F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82bc2f90
	if (!ctx.cr6.eq) goto loc_82BC2F90;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// beq cr6,0x82bc2f88
	if (ctx.cr6.eq) goto loc_82BC2F88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82BC2F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba8850
	ctx.lr = 0x82BC2F90;
	sub_82BA8850(ctx, base);
loc_82BC2F90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82bc2fbc
	if (ctx.cr6.eq) goto loc_82BC2FBC;
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x82ba8718
	ctx.lr = 0x82BC2FA4;
	sub_82BA8718(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC2FB0;
	sub_82BA9068(ctx, base);
	// sth r28,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// sth r28,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r28.u16);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_82BC2FBC:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x82bc2e24
	if (!ctx.cr0.eq) goto loc_82BC2E24;
loc_82BC2FC4:
	// bl 0x82ba8718
	ctx.lr = 0x82BC2FC8;
	sub_82BA8718(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82ba9068
	ctx.lr = 0x82BC2FD4;
	sub_82BA9068(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82bc3008
	if (ctx.cr6.eq) goto loc_82BC3008;
	// lis r11,-31951
	ctx.r11.s64 = -2093940736;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r10,-5736
	ctx.r4.s64 = ctx.r10.s64 + -5736;
	// lwz r9,19068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19068);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82BC2FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
loc_82BC3008:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BC3014"))) PPC_WEAK_FUNC(sub_82BC3014);
PPC_FUNC_IMPL(__imp__sub_82BC3014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82BC3018"))) PPC_WEAK_FUNC(sub_82BC3018);
PPC_FUNC_IMPL(__imp__sub_82BC3018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11936
	ctx.r5.s64 = ctx.r11.s64 + 11936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82bbc6b8
	ctx.lr = 0x82BC303C;
	sub_82BBC6B8(ctx, base);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-5636
	ctx.r9.s64 = ctx.r10.s64 + -5636;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BC306C"))) PPC_WEAK_FUNC(sub_82BC306C);
PPC_FUNC_IMPL(__imp__sub_82BC306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

