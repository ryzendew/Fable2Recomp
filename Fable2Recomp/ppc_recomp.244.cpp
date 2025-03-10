#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EF5004"))) PPC_WEAK_FUNC(sub_82EF5004);
PPC_FUNC_IMPL(__imp__sub_82EF5004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5008"))) PPC_WEAK_FUNC(sub_82EF5008);
PPC_FUNC_IMPL(__imp__sub_82EF5008) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82ef3318
	ctx.lr = 0x82EF5044;
	sub_82EF3318(ctx, base);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ef505c
	if (ctx.cr0.eq) goto loc_82EF505C;
	// bl 0x83004f30
	ctx.lr = 0x82EF5058;
	sub_83004F30(ctx, base);
	// b 0x82ef5068
	goto loc_82EF5068;
loc_82EF505C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82cc06f0
	ctx.lr = 0x82EF5068;
	sub_82CC06F0(ctx, base);
loc_82EF5068:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef508c
	if (ctx.cr6.eq) goto loc_82EF508C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ef508c
	if (!ctx.cr6.eq) goto loc_82EF508C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef509c
	if (ctx.cr6.eq) goto loc_82EF509C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef31d0
	ctx.lr = 0x82EF508C;
	sub_82EF31D0(ctx, base);
loc_82EF508C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef509c
	if (ctx.cr6.eq) goto loc_82EF509C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef32a8
	ctx.lr = 0x82EF509C;
	sub_82EF32A8(ctx, base);
loc_82EF509C:
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

__attribute__((alias("__imp__sub_82EF50B4"))) PPC_WEAK_FUNC(sub_82EF50B4);
PPC_FUNC_IMPL(__imp__sub_82EF50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF50B8"))) PPC_WEAK_FUNC(sub_82EF50B8);
PPC_FUNC_IMPL(__imp__sub_82EF50B8) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef5100
	if (ctx.cr6.eq) goto loc_82EF5100;
	// bl 0x82ef42d0
	ctx.lr = 0x82EF50E4;
	sub_82EF42D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef50f4
	if (!ctx.cr0.eq) goto loc_82EF50F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ef5104
	goto loc_82EF5104;
loc_82EF50F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5008
	ctx.lr = 0x82EF5100;
	sub_82EF5008(ctx, base);
loc_82EF5100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF5104:
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

__attribute__((alias("__imp__sub_82EF511C"))) PPC_WEAK_FUNC(sub_82EF511C);
PPC_FUNC_IMPL(__imp__sub_82EF511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5120"))) PPC_WEAK_FUNC(sub_82EF5120);
PPC_FUNC_IMPL(__imp__sub_82EF5120) {
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
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef515c
	if (ctx.cr6.eq) goto loc_82EF515C;
	// bl 0x82ef50b8
	ctx.lr = 0x82EF514C;
	sub_82EF50B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef515c
	if (!ctx.cr0.eq) goto loc_82EF515C;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// b 0x82ef516c
	goto loc_82EF516C;
loc_82EF515C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bne cr6,0x82ef516c
	if (!ctx.cr6.eq) goto loc_82EF516C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF516C:
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

__attribute__((alias("__imp__sub_82EF5184"))) PPC_WEAK_FUNC(sub_82EF5184);
PPC_FUNC_IMPL(__imp__sub_82EF5184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5188"))) PPC_WEAK_FUNC(sub_82EF5188);
PPC_FUNC_IMPL(__imp__sub_82EF5188) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82ef5008
	sub_82EF5008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5194"))) PPC_WEAK_FUNC(sub_82EF5194);
PPC_FUNC_IMPL(__imp__sub_82EF5194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5198"))) PPC_WEAK_FUNC(sub_82EF5198);
PPC_FUNC_IMPL(__imp__sub_82EF5198) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82ef50b8
	sub_82EF50B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF51A4"))) PPC_WEAK_FUNC(sub_82EF51A4);
PPC_FUNC_IMPL(__imp__sub_82EF51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF51A8"))) PPC_WEAK_FUNC(sub_82EF51A8);
PPC_FUNC_IMPL(__imp__sub_82EF51A8) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82ef5120
	sub_82EF5120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF51B4"))) PPC_WEAK_FUNC(sub_82EF51B4);
PPC_FUNC_IMPL(__imp__sub_82EF51B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF51B8"))) PPC_WEAK_FUNC(sub_82EF51B8);
PPC_FUNC_IMPL(__imp__sub_82EF51B8) {
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
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82ef50b8
	ctx.lr = 0x82EF51D0;
	sub_82EF50B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF51EC"))) PPC_WEAK_FUNC(sub_82EF51EC);
PPC_FUNC_IMPL(__imp__sub_82EF51EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF51F0"))) PPC_WEAK_FUNC(sub_82EF51F0);
PPC_FUNC_IMPL(__imp__sub_82EF51F0) {
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
	// addi r4,r3,-20
	ctx.r4.s64 = ctx.r3.s64 + -20;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82ef5008
	ctx.lr = 0x82EF5208;
	sub_82EF5008(ctx, base);
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

__attribute__((alias("__imp__sub_82EF521C"))) PPC_WEAK_FUNC(sub_82EF521C);
PPC_FUNC_IMPL(__imp__sub_82EF521C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5220"))) PPC_WEAK_FUNC(sub_82EF5220);
PPC_FUNC_IMPL(__imp__sub_82EF5220) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef3318
	ctx.lr = 0x82EF5248;
	sub_82EF3318(ctx, base);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef4e48
	ctx.lr = 0x82EF5258;
	sub_82EF4E48(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef4e98
	ctx.lr = 0x82EF5264;
	sub_82EF4E98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF527C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef5298
	if (ctx.cr6.eq) goto loc_82EF5298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef31d0
	ctx.lr = 0x82EF5290;
	sub_82EF31D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef32a8
	ctx.lr = 0x82EF5298;
	sub_82EF32A8(ctx, base);
loc_82EF5298:
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

__attribute__((alias("__imp__sub_82EF52B0"))) PPC_WEAK_FUNC(sub_82EF52B0);
PPC_FUNC_IMPL(__imp__sub_82EF52B0) {
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
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef52e8
	if (ctx.cr0.eq) goto loc_82EF52E8;
	// bl 0x82ef4f88
	ctx.lr = 0x82EF52DC;
	sub_82EF4F88(ctx, base);
	// li r4,-9
	ctx.r4.s64 = -9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef4e48
	ctx.lr = 0x82EF52E8;
	sub_82EF4E48(ctx, base);
loc_82EF52E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF52FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EF5318"))) PPC_WEAK_FUNC(sub_82EF5318);
PPC_FUNC_IMPL(__imp__sub_82EF5318) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ef4288
	ctx.lr = 0x82EF5340;
	sub_82EF4288(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef4af8
	ctx.lr = 0x82EF534C;
	sub_82EF4AF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef5364
	if (ctx.cr6.eq) goto loc_82EF5364;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef536c
	if (!ctx.cr6.eq) goto loc_82EF536C;
loc_82EF5364:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ef4710
	ctx.lr = 0x82EF536C;
	sub_82EF4710(ctx, base);
loc_82EF536C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82ef5008
	ctx.lr = 0x82EF5378;
	sub_82EF5008(ctx, base);
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

__attribute__((alias("__imp__sub_82EF5390"))) PPC_WEAK_FUNC(sub_82EF5390);
PPC_FUNC_IMPL(__imp__sub_82EF5390) {
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
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ef4288
	ctx.lr = 0x82EF53B4;
	sub_82EF4288(ctx, base);
loc_82EF53B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef53e0
	if (ctx.cr6.eq) goto loc_82EF53E0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef53e0
	if (ctx.cr6.eq) goto loc_82EF53E0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ef45b0
	ctx.lr = 0x82EF53DC;
	sub_82EF45B0(ctx, base);
	// b 0x82ef53b4
	goto loc_82EF53B4;
loc_82EF53E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82ef5008
	ctx.lr = 0x82EF53EC;
	sub_82EF5008(ctx, base);
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

__attribute__((alias("__imp__sub_82EF5404"))) PPC_WEAK_FUNC(sub_82EF5404);
PPC_FUNC_IMPL(__imp__sub_82EF5404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5408"))) PPC_WEAK_FUNC(sub_82EF5408);
PPC_FUNC_IMPL(__imp__sub_82EF5408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF5410;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31946
	ctx.r31.s64 = -2093613056;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,-29216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef5448
	if (!ctx.cr6.eq) goto loc_82EF5448;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF5430;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef5440
	if (ctx.cr0.eq) goto loc_82EF5440;
	// bl 0x82ef4d10
	ctx.lr = 0x82EF543C;
	sub_82EF4D10(ctx, base);
	// b 0x82ef5444
	goto loc_82EF5444;
loc_82EF5440:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF5444:
	// stw r3,-29216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29216, ctx.r3.u32);
loc_82EF5448:
	// lwz r31,-29216(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29216);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ef4288
	ctx.lr = 0x82EF545C;
	sub_82EF4288(ctx, base);
	// rlwinm r11,r29,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3FFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// xor r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f5be78
	ctx.lr = 0x82EF5470;
	sub_82F5BE78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82ef5008
	ctx.lr = 0x82EF547C;
	sub_82EF5008(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5484"))) PPC_WEAK_FUNC(sub_82EF5484);
PPC_FUNC_IMPL(__imp__sub_82EF5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5488"))) PPC_WEAK_FUNC(sub_82EF5488);
PPC_FUNC_IMPL(__imp__sub_82EF5488) {
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
	// lis r31,-31946
	ctx.r31.s64 = -2093613056;
	// lwz r11,-29216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef54ec
	if (ctx.cr6.eq) goto loc_82EF54EC;
	// lwz r3,-29216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29216);
	// bl 0x82ef5390
	ctx.lr = 0x82EF54B4;
	sub_82EF5390(ctx, base);
	// lwz r11,-29216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29216);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef54e4
	if (ctx.cr6.eq) goto loc_82EF54E4;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef4d68
	ctx.lr = 0x82EF54DC;
	sub_82EF4D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF54E4;
	sub_82EF6F38(ctx, base);
loc_82EF54E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-29216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29216, ctx.r11.u32);
loc_82EF54EC:
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

__attribute__((alias("__imp__sub_82EF5504"))) PPC_WEAK_FUNC(sub_82EF5504);
PPC_FUNC_IMPL(__imp__sub_82EF5504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5508"))) PPC_WEAK_FUNC(sub_82EF5508);
PPC_FUNC_IMPL(__imp__sub_82EF5508) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ef5488
	sub_82EF5488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF550C"))) PPC_WEAK_FUNC(sub_82EF550C);
PPC_FUNC_IMPL(__imp__sub_82EF550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5510"))) PPC_WEAK_FUNC(sub_82EF5510);
PPC_FUNC_IMPL(__imp__sub_82EF5510) {
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
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82ef553c
	if (ctx.cr6.eq) goto loc_82EF553C;
	// li r3,-2
	ctx.r3.s64 = -2;
	// bl 0x82cbbe20
	ctx.lr = 0x82EF553C;
	sub_82CBBE20(ctx, base);
loc_82EF553C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef52b0
	ctx.lr = 0x82EF5544;
	sub_82EF52B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5220
	ctx.lr = 0x82EF5550;
	sub_82EF5220(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-29216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29216);
	// bl 0x82ef5318
	ctx.lr = 0x82EF5560;
	sub_82EF5318(ctx, base);
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

__attribute__((alias("__imp__sub_82EF557C"))) PPC_WEAK_FUNC(sub_82EF557C);
PPC_FUNC_IMPL(__imp__sub_82EF557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5580"))) PPC_WEAK_FUNC(sub_82EF5580);
PPC_FUNC_IMPL(__imp__sub_82EF5580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF5588;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82ef55a4
	if (!ctx.cr6.eq) goto loc_82EF55A4;
loc_82EF559C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ef56a0
	goto loc_82EF56A0;
loc_82EF55A4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82ef55c0
	if (ctx.cr6.gt) goto loc_82EF55C0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EF55C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef55d4
	if (!ctx.cr0.eq) goto loc_82EF55D4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef55e8
	if (ctx.cr0.eq) goto loc_82EF55E8;
loc_82EF55D4:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef3b80
	ctx.lr = 0x82EF55E0;
	sub_82EF3B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef559c
	if (ctx.cr0.eq) goto loc_82EF559C;
loc_82EF55E8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef55fc
	if (ctx.cr6.eq) goto loc_82EF55FC;
	// bl 0x82cbbf60
	ctx.lr = 0x82EF55F8;
	sub_82CBBF60(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82EF55FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5408
	ctx.lr = 0x82EF5618;
	sub_82EF5408(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwsync 
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwsync 
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,30,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x8;
	// li r7,0
	ctx.r7.s64 = 0;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r5,r10,21776
	ctx.r5.s64 = ctx.r10.s64 + 21776;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83002a68
	ctx.lr = 0x82EF565C;
	sub_83002A68(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef569c
	if (!ctx.cr0.eq) goto loc_82EF569C;
	// lwsync 
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-29216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29216);
	// bl 0x82ef5318
	ctx.lr = 0x82EF5698;
	sub_82EF5318(ctx, base);
	// b 0x82ef559c
	goto loc_82EF559C;
loc_82EF569C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EF56A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF56A8"))) PPC_WEAK_FUNC(sub_82EF56A8);
PPC_FUNC_IMPL(__imp__sub_82EF56A8) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF56D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5220
	ctx.lr = 0x82EF56DC;
	sub_82EF5220(ctx, base);
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-29216(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29216);
	// bl 0x82ef5318
	ctx.lr = 0x82EF56EC;
	sub_82EF5318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83002940
	ctx.lr = 0x82EF56F4;
	sub_83002940(ctx, base);
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

__attribute__((alias("__imp__sub_82EF570C"))) PPC_WEAK_FUNC(sub_82EF570C);
PPC_FUNC_IMPL(__imp__sub_82EF570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5710"))) PPC_WEAK_FUNC(sub_82EF5710);
PPC_FUNC_IMPL(__imp__sub_82EF5710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF5718;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82ef30e8
	ctx.lr = 0x82EF573C;
	sub_82EF30E8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-15068
	ctx.r11.s64 = ctx.r11.s64 + -15068;
	// addi r10,r10,-12192
	ctx.r10.s64 = ctx.r10.s64 + -12192;
	// addi r9,r9,-12212
	ctx.r9.s64 = ctx.r9.s64 + -12212;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwsync 
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x82ef57a0
	if (ctx.cr6.eq) goto loc_82EF57A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5580
	ctx.lr = 0x82EF57A0;
	sub_82EF5580(ctx, base);
loc_82EF57A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF57AC"))) PPC_WEAK_FUNC(sub_82EF57AC);
PPC_FUNC_IMPL(__imp__sub_82EF57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF57B0"))) PPC_WEAK_FUNC(sub_82EF57B0);
PPC_FUNC_IMPL(__imp__sub_82EF57B0) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EF57C8;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r11,r11,-12156
	ctx.r11.s64 = ctx.r11.s64 + -12156;
	// addi r10,r10,-12132
	ctx.r10.s64 = ctx.r10.s64 + -12132;
	// addi r9,r9,-12144
	ctx.r9.s64 = ctx.r9.s64 + -12144;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EF5804"))) PPC_WEAK_FUNC(sub_82EF5804);
PPC_FUNC_IMPL(__imp__sub_82EF5804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5808"))) PPC_WEAK_FUNC(sub_82EF5808);
PPC_FUNC_IMPL(__imp__sub_82EF5808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ef5810
	sub_82EF5810(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5810"))) PPC_WEAK_FUNC(sub_82EF5810);
PPC_FUNC_IMPL(__imp__sub_82EF5810) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x82ef583c
	if (!ctx.cr6.eq) goto loc_82EF583C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF583C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,-12156
	ctx.r10.s64 = ctx.r10.s64 + -12156;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82EF5850;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef5860
	if (ctx.cr0.eq) goto loc_82EF5860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF5860;
	sub_82EF6F38(ctx, base);
loc_82EF5860:
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

__attribute__((alias("__imp__sub_82EF587C"))) PPC_WEAK_FUNC(sub_82EF587C);
PPC_FUNC_IMPL(__imp__sub_82EF587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5880"))) PPC_WEAK_FUNC(sub_82EF5880);
PPC_FUNC_IMPL(__imp__sub_82EF5880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF5888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ef57b0
	ctx.lr = 0x82EF5898;
	sub_82EF57B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12100
	ctx.r11.s64 = ctx.r11.s64 + -12100;
	// addi r10,r10,-12112
	ctx.r10.s64 = ctx.r10.s64 + -12112;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef58d0
	if (ctx.cr6.eq) goto loc_82EF58D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF58D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF58D0:
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef58f4
	if (ctx.cr6.eq) goto loc_82EF58F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF58F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF58F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5900"))) PPC_WEAK_FUNC(sub_82EF5900);
PPC_FUNC_IMPL(__imp__sub_82EF5900) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ef5fa0
	sub_82EF5FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5908"))) PPC_WEAK_FUNC(sub_82EF5908);
PPC_FUNC_IMPL(__imp__sub_82EF5908) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12100
	ctx.r11.s64 = ctx.r11.s64 + -12100;
	// addi r10,r10,-12112
	ctx.r10.s64 = ctx.r10.s64 + -12112;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef595c
	if (ctx.cr6.eq) goto loc_82EF595C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF595C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF595C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef597c
	if (ctx.cr6.eq) goto loc_82EF597C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF597C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF597C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12156
	ctx.r11.s64 = ctx.r11.s64 + -12156;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82EF5990;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF59A8"))) PPC_WEAK_FUNC(sub_82EF59A8);
PPC_FUNC_IMPL(__imp__sub_82EF59A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF59B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ef5a7c
	if (!ctx.cr6.eq) goto loc_82EF5A7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF59DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef5a04
	if (ctx.cr6.eq) goto loc_82EF5A04;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5A04:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5a78
	if (ctx.cr6.eq) goto loc_82EF5A78;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq 0x82ef5a54
	if (ctx.cr0.eq) goto loc_82EF5A54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ef5a78
	goto loc_82EF5A78;
loc_82EF5A54:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5a70
	if (ctx.cr6.eq) goto loc_82EF5A70;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5A70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82EF5A78:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82EF5A7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5A84"))) PPC_WEAK_FUNC(sub_82EF5A84);
PPC_FUNC_IMPL(__imp__sub_82EF5A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5A88"))) PPC_WEAK_FUNC(sub_82EF5A88);
PPC_FUNC_IMPL(__imp__sub_82EF5A88) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef5af8
	if (ctx.cr6.eq) goto loc_82EF5AF8;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82ef5af8
	if (!ctx.cr6.eq) goto loc_82EF5AF8;
	// addic. r11,r31,-16
	ctx.xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne 0x82ef5ac0
	if (!ctx.cr0.eq) goto loc_82EF5AC0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EF5AC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5af0
	if (ctx.cr6.eq) goto loc_82EF5AF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5AF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82EF5AF8:
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

__attribute__((alias("__imp__sub_82EF5B0C"))) PPC_WEAK_FUNC(sub_82EF5B0C);
PPC_FUNC_IMPL(__imp__sub_82EF5B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5B10"))) PPC_WEAK_FUNC(sub_82EF5B10);
PPC_FUNC_IMPL(__imp__sub_82EF5B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF5B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82ef5880
	ctx.lr = 0x82EF5B2C;
	sub_82EF5880(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r11,-12068
	ctx.r9.s64 = ctx.r11.s64 + -12068;
	// addi r10,r10,-12080
	ctx.r10.s64 = ctx.r10.s64 + -12080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5B64"))) PPC_WEAK_FUNC(sub_82EF5B64);
PPC_FUNC_IMPL(__imp__sub_82EF5B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5B68"))) PPC_WEAK_FUNC(sub_82EF5B68);
PPC_FUNC_IMPL(__imp__sub_82EF5B68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ef6060
	sub_82EF6060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5B70"))) PPC_WEAK_FUNC(sub_82EF5B70);
PPC_FUNC_IMPL(__imp__sub_82EF5B70) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12068
	ctx.r11.s64 = ctx.r11.s64 + -12068;
	// addi r10,r10,-12080
	ctx.r10.s64 = ctx.r10.s64 + -12080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5bbc
	if (ctx.cr6.eq) goto loc_82EF5BBC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5BBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef5908
	ctx.lr = 0x82EF5BC4;
	sub_82EF5908(ctx, base);
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

__attribute__((alias("__imp__sub_82EF5BD8"))) PPC_WEAK_FUNC(sub_82EF5BD8);
PPC_FUNC_IMPL(__imp__sub_82EF5BD8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5bfc
	if (ctx.cr6.eq) goto loc_82EF5BFC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82EF5BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF5C04"))) PPC_WEAK_FUNC(sub_82EF5C04);
PPC_FUNC_IMPL(__imp__sub_82EF5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5C08"))) PPC_WEAK_FUNC(sub_82EF5C08);
PPC_FUNC_IMPL(__imp__sub_82EF5C08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5c2c
	if (ctx.cr6.eq) goto loc_82EF5C2C;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_82EF5C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF5C34"))) PPC_WEAK_FUNC(sub_82EF5C34);
PPC_FUNC_IMPL(__imp__sub_82EF5C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5C38"))) PPC_WEAK_FUNC(sub_82EF5C38);
PPC_FUNC_IMPL(__imp__sub_82EF5C38) {
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
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82ef5d08
	if (ctx.cr6.eq) goto loc_82EF5D08;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5c80
	if (ctx.cr6.eq) goto loc_82EF5C80;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5C80:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef5ca8
	if (ctx.cr6.eq) goto loc_82EF5CA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5CA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef5ce4
	if (ctx.cr6.eq) goto loc_82EF5CE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef5ce4
	if (ctx.cr6.eq) goto loc_82EF5CE4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5CE4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5d04
	if (ctx.cr6.eq) goto loc_82EF5D04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5D04:
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
loc_82EF5D08:
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

__attribute__((alias("__imp__sub_82EF5D20"))) PPC_WEAK_FUNC(sub_82EF5D20);
PPC_FUNC_IMPL(__imp__sub_82EF5D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF5D28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82ef5e3c
	if (!ctx.cr6.eq) goto loc_82EF5E3C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5e3c
	if (ctx.cr6.eq) goto loc_82EF5E3C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5D60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef5d88
	if (ctx.cr6.eq) goto loc_82EF5D88;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5D88:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5dfc
	if (ctx.cr6.eq) goto loc_82EF5DFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq 0x82ef5ddc
	if (ctx.cr0.eq) goto loc_82EF5DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ef5dfc
	goto loc_82EF5DFC;
loc_82EF5DDC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5df8
	if (ctx.cr6.eq) goto loc_82EF5DF8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5DF8:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82EF5DFC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82ef5e38
	if (ctx.cr6.eq) goto loc_82EF5E38;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ef5e38
	if (ctx.cr0.eq) goto loc_82EF5E38;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5e34
	if (ctx.cr6.eq) goto loc_82EF5E34;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5E34:
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_82EF5E38:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_82EF5E3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF5E44"))) PPC_WEAK_FUNC(sub_82EF5E44);
PPC_FUNC_IMPL(__imp__sub_82EF5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5E48"))) PPC_WEAK_FUNC(sub_82EF5E48);
PPC_FUNC_IMPL(__imp__sub_82EF5E48) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ef5a88
	ctx.lr = 0x82EF5E68;
	sub_82EF5A88(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef5ed0
	if (ctx.cr6.eq) goto loc_82EF5ED0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x82ef5ed0
	if (!ctx.cr6.eq) goto loc_82EF5ED0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef5ed0
	if (!ctx.cr6.eq) goto loc_82EF5ED0;
	// addic. r11,r31,-16
	ctx.xer.ca = ctx.r31.u32 > 15;
	ctx.r11.s64 = ctx.r31.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne 0x82ef5e98
	if (!ctx.cr0.eq) goto loc_82EF5E98;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EF5E98:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef5ec8
	if (ctx.cr6.eq) goto loc_82EF5EC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF5EC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82EF5ED0:
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

__attribute__((alias("__imp__sub_82EF5EE8"))) PPC_WEAK_FUNC(sub_82EF5EE8);
PPC_FUNC_IMPL(__imp__sub_82EF5EE8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef5f38
	if (ctx.cr6.eq) goto loc_82EF5F38;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82ef5f38
	if (ctx.cr6.eq) goto loc_82EF5F38;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF5F2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x82ef5f3c
	if (!ctx.cr0.eq) goto loc_82EF5F3C;
loc_82EF5F38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF5F3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF5F4C"))) PPC_WEAK_FUNC(sub_82EF5F4C);
PPC_FUNC_IMPL(__imp__sub_82EF5F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5F50"))) PPC_WEAK_FUNC(sub_82EF5F50);
PPC_FUNC_IMPL(__imp__sub_82EF5F50) {
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
	// bl 0x82ef57b0
	ctx.lr = 0x82EF5F68;
	sub_82EF57B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12100
	ctx.r11.s64 = ctx.r11.s64 + -12100;
	// addi r10,r10,-12112
	ctx.r10.s64 = ctx.r10.s64 + -12112;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EF5FA0"))) PPC_WEAK_FUNC(sub_82EF5FA0);
PPC_FUNC_IMPL(__imp__sub_82EF5FA0) {
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
	// bl 0x82ef5908
	ctx.lr = 0x82EF5FC0;
	sub_82EF5908(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef5fd0
	if (ctx.cr0.eq) goto loc_82EF5FD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF5FD0;
	sub_82EF6F38(ctx, base);
loc_82EF5FD0:
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

__attribute__((alias("__imp__sub_82EF5FEC"))) PPC_WEAK_FUNC(sub_82EF5FEC);
PPC_FUNC_IMPL(__imp__sub_82EF5FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF5FF0"))) PPC_WEAK_FUNC(sub_82EF5FF0);
PPC_FUNC_IMPL(__imp__sub_82EF5FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF5FF8;
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
	// bl 0x82ef5f50
	ctx.lr = 0x82EF600C;
	sub_82EF5F50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12068
	ctx.r11.s64 = ctx.r11.s64 + -12068;
	// addi r10,r10,-12080
	ctx.r10.s64 = ctx.r10.s64 + -12080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82ef6040
	if (ctx.cr6.eq) goto loc_82EF6040;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6040:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6060"))) PPC_WEAK_FUNC(sub_82EF6060);
PPC_FUNC_IMPL(__imp__sub_82EF6060) {
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
	// bl 0x82ef5b70
	ctx.lr = 0x82EF6080;
	sub_82EF5B70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6090
	if (ctx.cr0.eq) goto loc_82EF6090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF6090;
	sub_82EF6F38(ctx, base);
loc_82EF6090:
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

__attribute__((alias("__imp__sub_82EF60AC"))) PPC_WEAK_FUNC(sub_82EF60AC);
PPC_FUNC_IMPL(__imp__sub_82EF60AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF60B0"))) PPC_WEAK_FUNC(sub_82EF60B0);
PPC_FUNC_IMPL(__imp__sub_82EF60B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EF60B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82ef5f50
	ctx.lr = 0x82EF60D4;
	sub_82EF5F50(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,-12068
	ctx.r11.s64 = ctx.r11.s64 + -12068;
	// addi r10,r10,-12080
	ctx.r10.s64 = ctx.r10.s64 + -12080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x82ef6108
	if (ctx.cr6.eq) goto loc_82EF6108;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6108:
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stb r27,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6124"))) PPC_WEAK_FUNC(sub_82EF6124);
PPC_FUNC_IMPL(__imp__sub_82EF6124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6128"))) PPC_WEAK_FUNC(sub_82EF6128);
PPC_FUNC_IMPL(__imp__sub_82EF6128) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6174
	if (ctx.cr0.eq) goto loc_82EF6174;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6174:
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

__attribute__((alias("__imp__sub_82EF618C"))) PPC_WEAK_FUNC(sub_82EF618C);
PPC_FUNC_IMPL(__imp__sub_82EF618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6190"))) PPC_WEAK_FUNC(sub_82EF6190);
PPC_FUNC_IMPL(__imp__sub_82EF6190) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF61B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef61d4
	if (ctx.cr0.eq) goto loc_82EF61D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF61D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ef61d8
	goto loc_82EF61D8;
loc_82EF61D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF61D8:
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

__attribute__((alias("__imp__sub_82EF61EC"))) PPC_WEAK_FUNC(sub_82EF61EC);
PPC_FUNC_IMPL(__imp__sub_82EF61EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF61F0"))) PPC_WEAK_FUNC(sub_82EF61F0);
PPC_FUNC_IMPL(__imp__sub_82EF61F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF61F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef623c
	if (ctx.cr0.eq) goto loc_82EF623C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF623C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF623C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6244"))) PPC_WEAK_FUNC(sub_82EF6244);
PPC_FUNC_IMPL(__imp__sub_82EF6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6248"))) PPC_WEAK_FUNC(sub_82EF6248);
PPC_FUNC_IMPL(__imp__sub_82EF6248) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,85
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 85, ctx.xer);
	// bge cr6,0x82ef6264
	if (!ctx.cr6.lt) goto loc_82EF6264;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7792
	ctx.r11.s64 = ctx.r11.s64 + -7792;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82ef6290
	goto loc_82EF6290;
loc_82EF6264:
	// cmplwi cr6,r3,1000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1000, ctx.xer);
	// blt cr6,0x82ef628c
	if (ctx.cr6.lt) goto loc_82EF628C;
	// cmplwi cr6,r3,1005
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1005, ctx.xer);
	// bge cr6,0x82ef628c
	if (!ctx.cr6.lt) goto loc_82EF628C;
	// addi r11,r3,-1000
	ctx.r11.s64 = ctx.r3.s64 + -1000;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-7452
	ctx.r10.s64 = ctx.r10.s64 + -7452;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82ef6290
	goto loc_82EF6290;
loc_82EF628C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF6290:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF62A8"))) PPC_WEAK_FUNC(sub_82EF62A8);
PPC_FUNC_IMPL(__imp__sub_82EF62A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efc9e0
	ctx.lr = 0x82EF62BC;
	sub_82EFC9E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bne 0x82ef62cc
	if (!ctx.cr0.eq) goto loc_82EF62CC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82EF62CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF62DC"))) PPC_WEAK_FUNC(sub_82EF62DC);
PPC_FUNC_IMPL(__imp__sub_82EF62DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF62E0"))) PPC_WEAK_FUNC(sub_82EF62E0);
PPC_FUNC_IMPL(__imp__sub_82EF62E0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6344
	if (ctx.cr6.eq) goto loc_82EF6344;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef6344
	if (ctx.cr6.eq) goto loc_82EF6344;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF630C;
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r3,47
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 47, ctx.xer);
	// beq cr6,0x82ef6344
	if (ctx.cr6.eq) goto loc_82EF6344;
	// cmplwi cr6,r3,92
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 92, ctx.xer);
	// beq cr6,0x82ef6344
	if (ctx.cr6.eq) goto loc_82EF6344;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6378
	if (ctx.cr6.eq) goto loc_82EF6378;
loc_82EF6324:
	// cmplwi cr6,r3,58
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 58, ctx.xer);
	// bne cr6,0x82ef6358
	if (!ctx.cr6.eq) goto loc_82EF6358;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF6334;
	sub_82EFDFA8(ctx, base);
	// cmplwi cr6,r3,47
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 47, ctx.xer);
	// beq cr6,0x82ef6344
	if (ctx.cr6.eq) goto loc_82EF6344;
	// cmplwi cr6,r3,92
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 92, ctx.xer);
	// bne cr6,0x82ef6368
	if (!ctx.cr6.eq) goto loc_82EF6368;
loc_82EF6344:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EF6348:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82EF6358:
	// cmplwi cr6,r3,47
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 47, ctx.xer);
	// beq cr6,0x82ef6378
	if (ctx.cr6.eq) goto loc_82EF6378;
	// cmplwi cr6,r3,92
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 92, ctx.xer);
	// beq cr6,0x82ef6378
	if (ctx.cr6.eq) goto loc_82EF6378;
loc_82EF6368:
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF6370;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef6324
	if (!ctx.cr0.eq) goto loc_82EF6324;
loc_82EF6378:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ef6348
	goto loc_82EF6348;
}

__attribute__((alias("__imp__sub_82EF6380"))) PPC_WEAK_FUNC(sub_82EF6380);
PPC_FUNC_IMPL(__imp__sub_82EF6380) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82ef63c8
	if (ctx.cr6.eq) goto loc_82EF63C8;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// beq cr6,0x82ef63b0
	if (ctx.cr6.eq) goto loc_82EF63B0;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// bne cr6,0x82ef63d0
	if (!ctx.cr6.eq) goto loc_82EF63D0;
	// bl 0x82f001a0
	ctx.lr = 0x82EF63AC;
	sub_82F001A0(ctx, base);
	// b 0x82ef63cc
	goto loc_82EF63CC;
loc_82EF63B0:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// li r4,9
	ctx.r4.s64 = 9;
	// beq cr6,0x82ef63c0
	if (ctx.cr6.eq) goto loc_82EF63C0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EF63C0:
	// bl 0x82eff530
	ctx.lr = 0x82EF63C4;
	sub_82EFF530(ctx, base);
	// b 0x82ef63cc
	goto loc_82EF63CC;
loc_82EF63C8:
	// bl 0x82effbf8
	ctx.lr = 0x82EF63CC;
	sub_82EFFBF8(ctx, base);
loc_82EF63CC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EF63D0:
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
}

__attribute__((alias("__imp__sub_82EF63E4"))) PPC_WEAK_FUNC(sub_82EF63E4);
PPC_FUNC_IMPL(__imp__sub_82EF63E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF63E8"))) PPC_WEAK_FUNC(sub_82EF63E8);
PPC_FUNC_IMPL(__imp__sub_82EF63E8) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6428
	if (ctx.cr6.eq) goto loc_82EF6428;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6428:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6448
	if (ctx.cr6.eq) goto loc_82EF6448;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6448:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-12048
	ctx.r11.s64 = ctx.r11.s64 + -12048;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EF6468"))) PPC_WEAK_FUNC(sub_82EF6468);
PPC_FUNC_IMPL(__imp__sub_82EF6468) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82ef6498
	if (ctx.cr6.eq) goto loc_82EF6498;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ef6248
	ctx.lr = 0x82EF6490;
	sub_82EF6248(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82ef649c
	goto loc_82EF649C;
loc_82EF6498:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF649C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF64B0"))) PPC_WEAK_FUNC(sub_82EF64B0);
PPC_FUNC_IMPL(__imp__sub_82EF64B0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ef64fc
	if (ctx.cr6.eq) goto loc_82EF64FC;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef64fc
	if (ctx.cr6.eq) goto loc_82EF64FC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82ef64fc
	if (ctx.cr6.eq) goto loc_82EF64FC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef64f0
	if (ctx.cr6.eq) goto loc_82EF64F0;
	// bl 0x82f01d90
	ctx.lr = 0x82EF64E8;
	sub_82F01D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82ef64f4
	goto loc_82EF64F4;
loc_82EF64F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF64F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82ef6500
	goto loc_82EF6500;
loc_82EF64FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6500:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6510"))) PPC_WEAK_FUNC(sub_82EF6510);
PPC_FUNC_IMPL(__imp__sub_82EF6510) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ef6544
	if (ctx.cr6.eq) goto loc_82EF6544;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef6544
	if (ctx.cr6.eq) goto loc_82EF6544;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6544
	if (ctx.cr6.eq) goto loc_82EF6544;
	// bl 0x82f03450
	ctx.lr = 0x82EF6540;
	sub_82F03450(ctx, base);
	// b 0x82ef6548
	goto loc_82EF6548;
loc_82EF6544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6548:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6558"))) PPC_WEAK_FUNC(sub_82EF6558);
PPC_FUNC_IMPL(__imp__sub_82EF6558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82ef659c
	if (!ctx.cr6.eq) goto loc_82EF659C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF659C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF65B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF65C4"))) PPC_WEAK_FUNC(sub_82EF65C4);
PPC_FUNC_IMPL(__imp__sub_82EF65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF65C8"))) PPC_WEAK_FUNC(sub_82EF65C8);
PPC_FUNC_IMPL(__imp__sub_82EF65C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF65D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6628
	if (ctx.cr0.eq) goto loc_82EF6628;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82ef6610
	if (ctx.cr0.lt) goto loc_82EF6610;
loc_82EF65FC:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EF6608;
	sub_82EF70B0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ef65fc
	if (!ctx.cr0.lt) goto loc_82EF65FC;
loc_82EF6610:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6620
	if (ctx.cr0.eq) goto loc_82EF6620;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fe010
	ctx.lr = 0x82EF6620;
	sub_824FE010(ctx, base);
loc_82EF6620:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ef6644
	goto loc_82EF6644;
loc_82EF6628:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EF6630;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6640
	if (ctx.cr0.eq) goto loc_82EF6640;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF6640;
	sub_82EF6F38(ctx, base);
loc_82EF6640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EF6644:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF664C"))) PPC_WEAK_FUNC(sub_82EF664C);
PPC_FUNC_IMPL(__imp__sub_82EF664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6650"))) PPC_WEAK_FUNC(sub_82EF6650);
PPC_FUNC_IMPL(__imp__sub_82EF6650) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EF6670;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70f0
	ctx.lr = 0x82EF668C;
	sub_82EF70F0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF66A8"))) PPC_WEAK_FUNC(sub_82EF66A8);
PPC_FUNC_IMPL(__imp__sub_82EF66A8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef6650
	ctx.lr = 0x82EF66CC;
	sub_82EF6650(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EF66F8"))) PPC_WEAK_FUNC(sub_82EF66F8);
PPC_FUNC_IMPL(__imp__sub_82EF66F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF6700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6758
	if (ctx.cr0.eq) goto loc_82EF6758;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x82ef6740
	if (ctx.cr0.lt) goto loc_82EF6740;
loc_82EF672C:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef63e8
	ctx.lr = 0x82EF6738;
	sub_82EF63E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82ef672c
	if (!ctx.cr0.lt) goto loc_82EF672C;
loc_82EF6740:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6750
	if (ctx.cr0.eq) goto loc_82EF6750;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824fe010
	ctx.lr = 0x82EF6750;
	sub_824FE010(ctx, base);
loc_82EF6750:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ef6774
	goto loc_82EF6774;
loc_82EF6758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef63e8
	ctx.lr = 0x82EF6760;
	sub_82EF63E8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6770
	if (ctx.cr0.eq) goto loc_82EF6770;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824fe010
	ctx.lr = 0x82EF6770;
	sub_824FE010(ctx, base);
loc_82EF6770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EF6774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF677C"))) PPC_WEAK_FUNC(sub_82EF677C);
PPC_FUNC_IMPL(__imp__sub_82EF677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6780"))) PPC_WEAK_FUNC(sub_82EF6780);
PPC_FUNC_IMPL(__imp__sub_82EF6780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF6788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF67A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ef67d0
	if (ctx.cr0.eq) goto loc_82EF67D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF67C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82ef67d0
	if (!ctx.cr0.eq) goto loc_82EF67D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ef6810
	goto loc_82EF6810;
loc_82EF67D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ef67ec
	if (ctx.cr6.eq) goto loc_82EF67EC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-11996
	ctx.r4.s64 = ctx.r11.s64 + -11996;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x82ef6558
	ctx.lr = 0x82EF67EC;
	sub_82EF6558(ctx, base);
loc_82EF67EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef680c
	if (ctx.cr6.eq) goto loc_82EF680C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF680C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF680C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6818"))) PPC_WEAK_FUNC(sub_82EF6818);
PPC_FUNC_IMPL(__imp__sub_82EF6818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF6820;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef62e0
	ctx.lr = 0x82EF683C;
	sub_82EF62E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef68a4
	if (!ctx.cr0.eq) goto loc_82EF68A4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r29,r11,1
	ctx.r29.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82ef68a4
	if (ctx.cr0.eq) goto loc_82EF68A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7e30
	ctx.lr = 0x82EF6864;
	sub_82EF7E30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmplwi cr6,r11,92
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 92, ctx.xer);
	// beq cr6,0x82ef6894
	if (ctx.cr6.eq) goto loc_82EF6894;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x82ef6894
	if (ctx.cr6.eq) goto loc_82EF6894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,3064
	ctx.r4.s64 = ctx.r11.s64 + 3064;
	// bl 0x82ef8018
	ctx.lr = 0x82EF6894;
	sub_82EF8018(ctx, base);
loc_82EF6894:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7ed0
	ctx.lr = 0x82EF68A0;
	sub_82EF7ED0(ctx, base);
	// b 0x82ef68b0
	goto loc_82EF68B0;
loc_82EF68A4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef7e30
	ctx.lr = 0x82EF68B0;
	sub_82EF7E30(ctx, base);
loc_82EF68B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF68B8"))) PPC_WEAK_FUNC(sub_82EF68B8);
PPC_FUNC_IMPL(__imp__sub_82EF68B8) {
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
	// bl 0x82ef7210
	ctx.lr = 0x82EF68D4;
	sub_82EF7210(ctx, base);
	// addic. r30,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r30.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82ef6960
	if (ctx.cr0.lt) goto loc_82EF6960;
loc_82EF68DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef7280
	ctx.lr = 0x82EF68E8;
	sub_82EF7280(ctx, base);
	// cmplwi cr6,r3,47
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 47, ctx.xer);
	// beq cr6,0x82ef6904
	if (ctx.cr6.eq) goto loc_82EF6904;
	// cmplwi cr6,r3,92
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 92, ctx.xer);
	// beq cr6,0x82ef6904
	if (ctx.cr6.eq) goto loc_82EF6904;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82ef68dc
	if (!ctx.cr0.lt) goto loc_82EF68DC;
	// b 0x82ef6960
	goto loc_82EF6960;
loc_82EF6904:
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef8460
	ctx.lr = 0x82EF6918;
	sub_82EF8460(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef7e30
	ctx.lr = 0x82EF6924;
	sub_82EF7E30(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EF6934:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef6934
	if (!ctx.cr0.eq) goto loc_82EF6934;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef6960
	if (!ctx.cr0.eq) goto loc_82EF6960;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF6960;
	sub_82EF6F38(ctx, base);
loc_82EF6960:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82EF6988"))) PPC_WEAK_FUNC(sub_82EF6988);
PPC_FUNC_IMPL(__imp__sub_82EF6988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF6990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82ef6a60
	if (ctx.cr6.eq) goto loc_82EF6A60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82ef69e8
	if (ctx.cr6.eq) goto loc_82EF69E8;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF69B8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6c44
	if (ctx.cr0.eq) goto loc_82EF6C44;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ef5ff0
	ctx.lr = 0x82EF69E4;
	sub_82EF5FF0(ctx, base);
	// b 0x82ef6c48
	goto loc_82EF6C48;
loc_82EF69E8:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6A08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ef6c44
	if (ctx.cr0.eq) goto loc_82EF6C44;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82ef6380
	ctx.lr = 0x82EF6A24;
	sub_82EF6380(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne 0x82ef6a3c
	if (!ctx.cr0.eq) goto loc_82EF6A3C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ef6c38
	goto loc_82EF6C38;
loc_82EF6A3C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// lhz r28,30(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82ef6a8c
	goto loc_82EF6A8C;
loc_82EF6A60:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef6a80
	if (ctx.cr6.eq) goto loc_82EF6A80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6A80:
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r28,24(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_82EF6A8C:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82ef6b00
	if (ctx.cr0.eq) goto loc_82EF6B00;
loc_82EF6A98:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6AA0;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6ad8
	if (ctx.cr0.eq) goto loc_82EF6AD8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82EF6AAC:
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82ef60b0
	ctx.lr = 0x82EF6AD4;
	sub_82EF60B0(ctx, base);
	// b 0x82ef6adc
	goto loc_82EF6ADC;
loc_82EF6AD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6ADC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EF6AE0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ef6c48
	goto loc_82EF6C48;
loc_82EF6B00:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef6c2c
	if (ctx.cr6.eq) goto loc_82EF6C2C;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82ef6c2c
	if (ctx.cr6.eq) goto loc_82EF6C2C;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82ef6a98
	if (!ctx.cr0.eq) goto loc_82EF6A98;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82ef6b50
	if (ctx.cr0.eq) goto loc_82EF6B50;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef6b50
	if (!ctx.cr0.eq) goto loc_82EF6B50;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6B40;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6ad8
	if (ctx.cr0.eq) goto loc_82EF6AD8;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82ef6aac
	goto loc_82EF6AAC;
loc_82EF6B50:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82ef6c24
	if (ctx.cr0.eq) goto loc_82EF6C24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6c0c
	if (ctx.cr0.eq) goto loc_82EF6C0C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6B98;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6bd0
	if (ctx.cr0.eq) goto loc_82EF6BD0;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ef5b10
	ctx.lr = 0x82EF6BC8;
	sub_82EF5B10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef6bd4
	goto loc_82EF6BD4;
loc_82EF6BD0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF6BD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82ef6c48
	goto loc_82EF6C48;
loc_82EF6C0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6C24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6C24:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82ef6ae0
	goto loc_82EF6AE0;
loc_82EF6C2C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82EF6C38:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6C44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6C48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6C50"))) PPC_WEAK_FUNC(sub_82EF6C50);
PPC_FUNC_IMPL(__imp__sub_82EF6C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EF6C58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r11,r11,-12024
	ctx.r11.s64 = ctx.r11.s64 + -12024;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6C7C;
	sub_82EF6EF8(ctx, base);
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r29,r11,7817
	ctx.r29.u64 = ctx.r11.u64 | 7817;
	// ori r30,r10,9034
	ctx.r30.u64 = ctx.r10.u64 | 9034;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6ca8
	if (ctx.cr0.eq) goto loc_82EF6CA8;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x82ef24a8
	ctx.lr = 0x82EF6CA0;
	sub_82EF24A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82ef6cac
	goto loc_82EF6CAC;
loc_82EF6CA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF6CAC:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6CB8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6cd4
	if (ctx.cr0.eq) goto loc_82EF6CD4;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f03d68
	ctx.lr = 0x82EF6CD0;
	sub_82F03D68(ctx, base);
	// b 0x82ef6cd8
	goto loc_82EF6CD8;
loc_82EF6CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF6CD8:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6d68
	if (ctx.cr6.eq) goto loc_82EF6D68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF6D08;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef6d28
	if (ctx.cr0.eq) goto loc_82EF6D28;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// bl 0x82ef66a8
	ctx.lr = 0x82EF6D20;
	sub_82EF66A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef6d2c
	goto loc_82EF6D2C;
loc_82EF6D28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF6D2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef6d68
	if (ctx.cr6.eq) goto loc_82EF6D68;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF6D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF6D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6D74"))) PPC_WEAK_FUNC(sub_82EF6D74);
PPC_FUNC_IMPL(__imp__sub_82EF6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6D78"))) PPC_WEAK_FUNC(sub_82EF6D78);
PPC_FUNC_IMPL(__imp__sub_82EF6D78) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82EF6DA4;
	sub_82EF70B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6db4
	if (ctx.cr0.eq) goto loc_82EF6DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF6DB4;
	sub_82EF6F38(ctx, base);
loc_82EF6DB4:
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

__attribute__((alias("__imp__sub_82EF6DD0"))) PPC_WEAK_FUNC(sub_82EF6DD0);
PPC_FUNC_IMPL(__imp__sub_82EF6DD0) {
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
	// bl 0x82f00ba8
	ctx.lr = 0x82EF6DF0;
	sub_82F00BA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef6e00
	if (ctx.cr0.eq) goto loc_82EF6E00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF6E00;
	sub_82EF6F38(ctx, base);
loc_82EF6E00:
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

__attribute__((alias("__imp__sub_82EF6E1C"))) PPC_WEAK_FUNC(sub_82EF6E1C);
PPC_FUNC_IMPL(__imp__sub_82EF6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6E20"))) PPC_WEAK_FUNC(sub_82EF6E20);
PPC_FUNC_IMPL(__imp__sub_82EF6E20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82ef6dd0
	sub_82EF6DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6E28"))) PPC_WEAK_FUNC(sub_82EF6E28);
PPC_FUNC_IMPL(__imp__sub_82EF6E28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-24
	ctx.r3.s64 = ctx.r3.s64 + -24;
	// b 0x82ef6dd0
	sub_82EF6DD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF6E30"))) PPC_WEAK_FUNC(sub_82EF6E30);
PPC_FUNC_IMPL(__imp__sub_82EF6E30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6E48"))) PPC_WEAK_FUNC(sub_82EF6E48);
PPC_FUNC_IMPL(__imp__sub_82EF6E48) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-11852
	ctx.r11.s64 = ctx.r11.s64 + -11852;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ef6e74
	if (ctx.cr0.eq) goto loc_82EF6E74;
	// bl 0x824fe010
	ctx.lr = 0x82EF6E74;
	sub_824FE010(ctx, base);
loc_82EF6E74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EF6E8C"))) PPC_WEAK_FUNC(sub_82EF6E8C);
PPC_FUNC_IMPL(__imp__sub_82EF6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6E90"))) PPC_WEAK_FUNC(sub_82EF6E90);
PPC_FUNC_IMPL(__imp__sub_82EF6E90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// stw r3,-29208(r11)
	PPC_STORE_U32(ctx.r11.u32 + -29208, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6E9C"))) PPC_WEAK_FUNC(sub_82EF6E9C);
PPC_FUNC_IMPL(__imp__sub_82EF6E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6EA0"))) PPC_WEAK_FUNC(sub_82EF6EA0);
PPC_FUNC_IMPL(__imp__sub_82EF6EA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lwz r3,-29208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29208);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6EAC"))) PPC_WEAK_FUNC(sub_82EF6EAC);
PPC_FUNC_IMPL(__imp__sub_82EF6EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6EB0"))) PPC_WEAK_FUNC(sub_82EF6EB0);
PPC_FUNC_IMPL(__imp__sub_82EF6EB0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef6ec4
	if (ctx.cr6.eq) goto loc_82EF6EC4;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// stw r3,-7848(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7848, ctx.r3.u32);
	// blr 
	return;
loc_82EF6EC4:
	// lis r11,-31946
	ctx.r11.s64 = -2093613056;
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// addi r11,r11,-29128
	ctx.r11.s64 = ctx.r11.s64 + -29128;
	// stw r11,-7848(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7848, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6ED8"))) PPC_WEAK_FUNC(sub_82EF6ED8);
PPC_FUNC_IMPL(__imp__sub_82EF6ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6EE4"))) PPC_WEAK_FUNC(sub_82EF6EE4);
PPC_FUNC_IMPL(__imp__sub_82EF6EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6EE8"))) PPC_WEAK_FUNC(sub_82EF6EE8);
PPC_FUNC_IMPL(__imp__sub_82EF6EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// lwz r3,-7840(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6EF4"))) PPC_WEAK_FUNC(sub_82EF6EF4);
PPC_FUNC_IMPL(__imp__sub_82EF6EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6EF8"))) PPC_WEAK_FUNC(sub_82EF6EF8);
PPC_FUNC_IMPL(__imp__sub_82EF6EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6F14"))) PPC_WEAK_FUNC(sub_82EF6F14);
PPC_FUNC_IMPL(__imp__sub_82EF6F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6F18"))) PPC_WEAK_FUNC(sub_82EF6F18);
PPC_FUNC_IMPL(__imp__sub_82EF6F18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6F38"))) PPC_WEAK_FUNC(sub_82EF6F38);
PPC_FUNC_IMPL(__imp__sub_82EF6F38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6F54"))) PPC_WEAK_FUNC(sub_82EF6F54);
PPC_FUNC_IMPL(__imp__sub_82EF6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6F58"))) PPC_WEAK_FUNC(sub_82EF6F58);
PPC_FUNC_IMPL(__imp__sub_82EF6F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6F7C"))) PPC_WEAK_FUNC(sub_82EF6F7C);
PPC_FUNC_IMPL(__imp__sub_82EF6F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6F80"))) PPC_WEAK_FUNC(sub_82EF6F80);
PPC_FUNC_IMPL(__imp__sub_82EF6F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-7848(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7848);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6F9C"))) PPC_WEAK_FUNC(sub_82EF6F9C);
PPC_FUNC_IMPL(__imp__sub_82EF6F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF6FA0"))) PPC_WEAK_FUNC(sub_82EF6FA0);
PPC_FUNC_IMPL(__imp__sub_82EF6FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6FB0"))) PPC_WEAK_FUNC(sub_82EF6FB0);
PPC_FUNC_IMPL(__imp__sub_82EF6FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF6FDC"))) PPC_WEAK_FUNC(sub_82EF6FDC);
PPC_FUNC_IMPL(__imp__sub_82EF6FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF6FE0"))) PPC_WEAK_FUNC(sub_82EF6FE0);
PPC_FUNC_IMPL(__imp__sub_82EF6FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,22087
	ctx.r8.s64 = 1447493632;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-12028
	ctx.r10.s64 = ctx.r10.s64 + -12028;
	// ori r8,r8,7817
	ctx.r8.u64 = ctx.r8.u64 | 7817;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82ef7034
	if (!ctx.cr6.eq) goto loc_82EF7034;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ef7034
	if (!ctx.cr6.eq) goto loc_82EF7034;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-7832
	ctx.r11.s64 = ctx.r11.s64 + -7832;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82ef7040
	goto loc_82EF7040;
loc_82EF7034:
	// lis r10,-31952
	ctx.r10.s64 = -2094006272;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-7832
	ctx.r11.s64 = ctx.r10.s64 + -7832;
loc_82EF7040:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF7048"))) PPC_WEAK_FUNC(sub_82EF7048);
PPC_FUNC_IMPL(__imp__sub_82EF7048) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,22087
	ctx.r8.s64 = 1447493632;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-12028
	ctx.r10.s64 = ctx.r10.s64 + -12028;
	// ori r8,r8,7817
	ctx.r8.u64 = ctx.r8.u64 | 7817;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82ef7094
	if (!ctx.cr6.eq) goto loc_82EF7094;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ef7094
	if (!ctx.cr6.eq) goto loc_82EF7094;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82EF7094:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82ef70a8
	if (!ctx.cr6.eq) goto loc_82EF70A8;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r5,r11,-7832
	ctx.r5.s64 = ctx.r11.s64 + -7832;
loc_82EF70A8:
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF70B0"))) PPC_WEAK_FUNC(sub_82EF70B0);
PPC_FUNC_IMPL(__imp__sub_82EF70B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,-12028
	ctx.r10.s64 = ctx.r10.s64 + -12028;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x82ef6f38
	sub_82EF6F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF70E8"))) PPC_WEAK_FUNC(sub_82EF70E8);
PPC_FUNC_IMPL(__imp__sub_82EF70E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF70EC"))) PPC_WEAK_FUNC(sub_82EF70EC);
PPC_FUNC_IMPL(__imp__sub_82EF70EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF70F0"))) PPC_WEAK_FUNC(sub_82EF70F0);
PPC_FUNC_IMPL(__imp__sub_82EF70F0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r11,r11,-7832
	ctx.r11.s64 = ctx.r11.s64 + -7832;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82ef7110
	if (!ctx.cr6.eq) goto loc_82EF7110;
loc_82EF7108:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EF7110:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82ef7124
	if (ctx.cr6.lt) goto loc_82EF7124;
	// bne cr6,0x82ef7108
	if (!ctx.cr6.eq) goto loc_82EF7108;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x82ef7128
	goto loc_82EF7128;
loc_82EF7124:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EF7128:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF7134"))) PPC_WEAK_FUNC(sub_82EF7134);
PPC_FUNC_IMPL(__imp__sub_82EF7134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7138"))) PPC_WEAK_FUNC(sub_82EF7138);
PPC_FUNC_IMPL(__imp__sub_82EF7138) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef7194
	if (!ctx.cr6.eq) goto loc_82EF7194;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7160;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef717c
	if (ctx.cr0.eq) goto loc_82EF717C;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// b 0x82ef7180
	goto loc_82EF7180;
loc_82EF717C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF7180:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef7194
	if (!ctx.cr6.eq) goto loc_82EF7194;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ef71a8
	goto loc_82EF71A8;
loc_82EF7194:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82EF71A8:
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

__attribute__((alias("__imp__sub_82EF71BC"))) PPC_WEAK_FUNC(sub_82EF71BC);
PPC_FUNC_IMPL(__imp__sub_82EF71BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF71C0"))) PPC_WEAK_FUNC(sub_82EF71C0);
PPC_FUNC_IMPL(__imp__sub_82EF71C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
loc_82EF71C8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef71c8
	if (!ctx.cr0.eq) goto loc_82EF71C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF720C"))) PPC_WEAK_FUNC(sub_82EF720C);
PPC_FUNC_IMPL(__imp__sub_82EF720C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF7210"))) PPC_WEAK_FUNC(sub_82EF7210);
PPC_FUNC_IMPL(__imp__sub_82EF7210) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ef723c
	if (ctx.cr0.eq) goto loc_82EF723C;
	// clrlwi r3,r10,1
	ctx.r3.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// b 0x82ef726c
	goto loc_82EF726C;
loc_82EF723C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// clrlwi r4,r10,1
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// bl 0x82efe680
	ctx.lr = 0x82EF724C;
	sub_82EFE680(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82ef726c
	if (!ctx.cr6.eq) goto loc_82EF726C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82EF726C:
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

__attribute__((alias("__imp__sub_82EF7280"))) PPC_WEAK_FUNC(sub_82EF7280);
PPC_FUNC_IMPL(__imp__sub_82EF7280) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82EF72A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF72A8;
	sub_82EFDFA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef72c0
	if (ctx.cr0.eq) goto loc_82EF72C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82ef72a0
	if (!ctx.cr6.lt) goto loc_82EF72A0;
	// b 0x82ef72c4
	goto loc_82EF72C4;
loc_82EF72C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF72C4:
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

__attribute__((alias("__imp__sub_82EF72D8"))) PPC_WEAK_FUNC(sub_82EF72D8);
PPC_FUNC_IMPL(__imp__sub_82EF72D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF72E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ef7318
	if (!ctx.cr6.lt) goto loc_82EF7318;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x82ef7344
	if (ctx.cr0.eq) goto loc_82EF7344;
	// oris r11,r31,32768
	ctx.r11.u64 = ctx.r31.u64 | 2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ef7344
	goto loc_82EF7344;
loc_82EF7318:
	// rlwinm r29,r31,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// bl 0x82ef6f18
	ctx.lr = 0x82EF7324;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// beq 0x82ef7344
	if (ctx.cr0.eq) goto loc_82EF7344;
	// oris r10,r31,32768
	ctx.r10.u64 = ctx.r31.u64 | 2147483648;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82EF7344:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF734C"))) PPC_WEAK_FUNC(sub_82EF734C);
PPC_FUNC_IMPL(__imp__sub_82EF734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7350"))) PPC_WEAK_FUNC(sub_82EF7350);
PPC_FUNC_IMPL(__imp__sub_82EF7350) {
	PPC_FUNC_PROLOGUE();
	// b 0x82f040c8
	sub_82F040C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7354"))) PPC_WEAK_FUNC(sub_82EF7354);
PPC_FUNC_IMPL(__imp__sub_82EF7354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7358"))) PPC_WEAK_FUNC(sub_82EF7358);
PPC_FUNC_IMPL(__imp__sub_82EF7358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF7360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82ef7414
	if (ctx.cr6.eq) goto loc_82EF7414;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82EF7380:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x821ee9e8
	ctx.lr = 0x82EF738C;
	sub_821EE9E8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x821ee9e8
	ctx.lr = 0x82EF73A0;
	sub_821EE9E8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// beq 0x82ef73c8
	if (ctx.cr0.eq) goto loc_82EF73C8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82ef73c8
	if (ctx.cr6.eq) goto loc_82EF73C8;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82ef740c
	if (!ctx.cr6.eq) goto loc_82EF740C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef7380
	if (!ctx.cr6.eq) goto loc_82EF7380;
loc_82EF73C8:
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82ef740c
	if (!ctx.cr6.eq) goto loc_82EF740C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82ef73e4
	if (!ctx.cr6.eq) goto loc_82EF73E4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef740c
	if (ctx.cr6.eq) goto loc_82EF740C;
loc_82EF73E4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82EF73E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef73e8
	if (!ctx.cr6.eq) goto loc_82EF73E8;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r3,r11,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r11.s64;
	// b 0x82ef7438
	goto loc_82EF7438;
loc_82EF740C:
	// subf r3,r3,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r3.s64;
	// b 0x82ef7438
	goto loc_82EF7438;
loc_82EF7414:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EF7418:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef7418
	if (!ctx.cr6.eq) goto loc_82EF7418;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
loc_82EF7438:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7440"))) PPC_WEAK_FUNC(sub_82EF7440);
PPC_FUNC_IMPL(__imp__sub_82EF7440) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ef745c
	if (ctx.cr6.eq) goto loc_82EF745C;
loc_82EF7448:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mulli r11,r5,33
	ctx.r11.s64 = ctx.r5.s64 * 33;
	// lbzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// bne 0x82ef7448
	if (!ctx.cr0.eq) goto loc_82EF7448;
loc_82EF745C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF7464"))) PPC_WEAK_FUNC(sub_82EF7464);
PPC_FUNC_IMPL(__imp__sub_82EF7464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7468"))) PPC_WEAK_FUNC(sub_82EF7468);
PPC_FUNC_IMPL(__imp__sub_82EF7468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF7470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x82ef7498
	goto loc_82EF7498;
loc_82EF7484:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lbzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// bl 0x821ee9e8
	ctx.lr = 0x82EF7490;
	sub_821EE9E8(ctx, base);
	// mulli r11,r30,33
	ctx.r11.s64 = ctx.r30.s64 * 33;
	// xor r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 ^ ctx.r11.u64;
loc_82EF7498:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82ef7484
	if (!ctx.cr6.eq) goto loc_82EF7484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF74AC"))) PPC_WEAK_FUNC(sub_82EF74AC);
PPC_FUNC_IMPL(__imp__sub_82EF74AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF74B0"))) PPC_WEAK_FUNC(sub_82EF74B0);
PPC_FUNC_IMPL(__imp__sub_82EF74B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ef6f38
	sub_82EF6F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF74D0"))) PPC_WEAK_FUNC(sub_82EF74D0);
PPC_FUNC_IMPL(__imp__sub_82EF74D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF74D4"))) PPC_WEAK_FUNC(sub_82EF74D4);
PPC_FUNC_IMPL(__imp__sub_82EF74D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF74D8"))) PPC_WEAK_FUNC(sub_82EF74D8);
PPC_FUNC_IMPL(__imp__sub_82EF74D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF74E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ef756c
	if (!ctx.cr6.gt) goto loc_82EF756C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82ef756c
	if (ctx.cr6.lt) goto loc_82EF756C;
	// rlwinm r29,r28,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,2
	ctx.r3.s64 = ctx.r29.s64 + 2;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7510;
	sub_82EF6EF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82ef7564
	if (ctx.cr0.eq) goto loc_82EF7564;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82ef7538
	if (ctx.cr6.eq) goto loc_82EF7538;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7538;
	sub_82CA2C60(ctx, base);
loc_82EF7538:
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82ef755c
	if (ctx.cr6.eq) goto loc_82EF755C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef755c
	if (ctx.cr6.eq) goto loc_82EF755C;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF755C;
	sub_82EF6F38(ctx, base);
loc_82EF755C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x82ef7584
	goto loc_82EF7584;
loc_82EF7564:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ef758c
	goto loc_82EF758C;
loc_82EF756C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82ef7584
	if (ctx.cr6.eq) goto loc_82EF7584;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_82EF7584:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_82EF758C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7594"))) PPC_WEAK_FUNC(sub_82EF7594);
PPC_FUNC_IMPL(__imp__sub_82EF7594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7598"))) PPC_WEAK_FUNC(sub_82EF7598);
PPC_FUNC_IMPL(__imp__sub_82EF7598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF75A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82ef75c4
	if (!ctx.cr6.eq) goto loc_82EF75C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f040d0
	ctx.lr = 0x82EF75C0;
	sub_82F040D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EF75C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef74d8
	ctx.lr = 0x82EF75D0;
	sub_82EF74D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef75f4
	if (ctx.cr0.eq) goto loc_82EF75F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef75f4
	if (ctx.cr6.eq) goto loc_82EF75F4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF75F4;
	sub_82CA2C60(ctx, base);
loc_82EF75F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF75FC"))) PPC_WEAK_FUNC(sub_82EF75FC);
PPC_FUNC_IMPL(__imp__sub_82EF75FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7600"))) PPC_WEAK_FUNC(sub_82EF7600);
PPC_FUNC_IMPL(__imp__sub_82EF7600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EF7614:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7614
	if (!ctx.cr0.eq) goto loc_82EF7614;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF7634"))) PPC_WEAK_FUNC(sub_82EF7634);
PPC_FUNC_IMPL(__imp__sub_82EF7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7638"))) PPC_WEAK_FUNC(sub_82EF7638);
PPC_FUNC_IMPL(__imp__sub_82EF7638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF7640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ef7688
	if (!ctx.cr6.eq) goto loc_82EF7688;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82EF7668:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7668
	if (!ctx.cr0.eq) goto loc_82EF7668;
	// b 0x82ef76f0
	goto loc_82EF76F0;
loc_82EF7688:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EF768C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef768c
	if (!ctx.cr6.eq) goto loc_82EF768C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF76B0;
	sub_82EF6EF8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF76C4;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82EF76F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF76FC"))) PPC_WEAK_FUNC(sub_82EF76FC);
PPC_FUNC_IMPL(__imp__sub_82EF76FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7700"))) PPC_WEAK_FUNC(sub_82EF7700);
PPC_FUNC_IMPL(__imp__sub_82EF7700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF7708;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ef7754
	if (!ctx.cr6.eq) goto loc_82EF7754;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF7734:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7734
	if (!ctx.cr0.eq) goto loc_82EF7734;
	// b 0x82ef779c
	goto loc_82EF779C;
loc_82EF7754:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF775C;
	sub_82EF6EF8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7770;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82EF779C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF77A8"))) PPC_WEAK_FUNC(sub_82EF77A8);
PPC_FUNC_IMPL(__imp__sub_82EF77A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF77B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef7818
	if (!ctx.cr6.eq) goto loc_82EF7818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82ef77ec
	if (!ctx.cr6.lt) goto loc_82EF77EC;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// b 0x82ef780c
	goto loc_82EF780C;
loc_82EF77EC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82ef7894
	if (!ctx.cr6.gt) goto loc_82EF7894;
	// rlwinm r30,r31,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x82ef6f18
	ctx.lr = 0x82EF7804;
	sub_82EF6F18(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
loc_82EF780C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// b 0x82ef7894
	goto loc_82EF7894;
loc_82EF7818:
	// rlwinm r28,r31,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7824;
	sub_82EF6EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// addi r28,r30,12
	ctx.r28.s64 = ctx.r30.s64 + 12;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7850;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r11,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EF7864:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7864
	if (!ctx.cr0.eq) goto loc_82EF7864;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7890
	if (!ctx.cr0.eq) goto loc_82EF7890;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7890;
	sub_82EF6F38(ctx, base);
loc_82EF7890:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82EF7894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF789C"))) PPC_WEAK_FUNC(sub_82EF789C);
PPC_FUNC_IMPL(__imp__sub_82EF789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF78A0"))) PPC_WEAK_FUNC(sub_82EF78A0);
PPC_FUNC_IMPL(__imp__sub_82EF78A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF78A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// clrlwi r31,r11,1
	ctx.r31.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82efe2c8
	ctx.lr = 0x82EF78D4;
	sub_82EFE2C8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r27,r29,r31
	ctx.r27.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stbx r28,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u8);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef7928
	if (!ctx.cr6.eq) goto loc_82EF7928;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7904;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7920;
	sub_82CA2C60(ctx, base);
	// stbx r28,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r28.u8);
	// b 0x82ef79d0
	goto loc_82EF79D0;
loc_82EF7928:
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7934;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r26,r11,1
	ctx.r26.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7968;
	sub_82CA2C60(ctx, base);
	// stbx r28,r27,r26
	PPC_STORE_U8(ctx.r27.u32 + ctx.r26.u32, ctx.r28.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7990;
	sub_82CA2C60(ctx, base);
	// stbx r28,r27,r29
	PPC_STORE_U8(ctx.r27.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF79A0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef79a0
	if (!ctx.cr0.eq) goto loc_82EF79A0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef79cc
	if (!ctx.cr0.eq) goto loc_82EF79CC;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF79CC;
	sub_82EF6F38(ctx, base);
loc_82EF79CC:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82EF79D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF79D8"))) PPC_WEAK_FUNC(sub_82EF79D8);
PPC_FUNC_IMPL(__imp__sub_82EF79D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EF79E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82ef7adc
	if (ctx.cr6.eq) goto loc_82EF7ADC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82efe4c8
	ctx.lr = 0x82EF7A04;
	sub_82EFE4C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r30,r10,1
	ctx.r30.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// add r28,r30,r3
	ctx.r28.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bne cr6,0x82ef7a4c
	if (!ctx.cr6.eq) goto loc_82EF7A4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7A30;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82efe550
	ctx.lr = 0x82EF7A48;
	sub_82EFE550(ctx, base);
	// b 0x82ef7adc
	goto loc_82EF7ADC;
loc_82EF7A4C:
	// rlwinm r27,r28,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7A58;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7A84;
	sub_82CA2C60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stbx r10,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r10.u8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82efe550
	ctx.lr = 0x82EF7AA0;
	sub_82EFE550(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF7AAC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7aac
	if (!ctx.cr0.eq) goto loc_82EF7AAC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7ad8
	if (!ctx.cr0.eq) goto loc_82EF7AD8;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7AD8;
	sub_82EF6F38(ctx, base);
loc_82EF7AD8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82EF7ADC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7AE4"))) PPC_WEAK_FUNC(sub_82EF7AE4);
PPC_FUNC_IMPL(__imp__sub_82EF7AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7AE8"))) PPC_WEAK_FUNC(sub_82EF7AE8);
PPC_FUNC_IMPL(__imp__sub_82EF7AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EF7AF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82ef7c24
	if (ctx.cr6.eq) goto loc_82EF7C24;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82ef7c24
	if (ctx.cr6.eq) goto loc_82EF7C24;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82ef7b38
	if (!ctx.cr6.eq) goto loc_82EF7B38;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EF7B1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef7b1c
	if (!ctx.cr6.eq) goto loc_82EF7B1C;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EF7B38:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r30,r10,1
	ctx.r30.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// add r26,r30,r29
	ctx.r26.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bne cr6,0x82ef7b8c
	if (!ctx.cr6.eq) goto loc_82EF7B8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7B64;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7B80;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x82ef7c24
	goto loc_82EF7C24;
loc_82EF7B8C:
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7B98;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7BC4;
	sub_82CA2C60(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stbx r26,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r26.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7BE4;
	sub_82CA2C60(ctx, base);
	// stbx r26,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r26.u8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF7BF4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7bf4
	if (!ctx.cr0.eq) goto loc_82EF7BF4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7c20
	if (!ctx.cr0.eq) goto loc_82EF7C20;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7C20;
	sub_82EF6F38(ctx, base);
loc_82EF7C20:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82EF7C24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7C2C"))) PPC_WEAK_FUNC(sub_82EF7C2C);
PPC_FUNC_IMPL(__imp__sub_82EF7C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7C30"))) PPC_WEAK_FUNC(sub_82EF7C30);
PPC_FUNC_IMPL(__imp__sub_82EF7C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EF7C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82ef7c54
	if (!ctx.cr6.eq) goto loc_82EF7C54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
loc_82EF7C54:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EF7C58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef7c58
	if (!ctx.cr6.eq) goto loc_82EF7C58;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef7ccc
	if (!ctx.cr6.eq) goto loc_82EF7CCC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7C94;
	sub_82EF72D8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EF7C98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef7c98
	if (!ctx.cr6.eq) goto loc_82EF7C98;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7CC8;
	sub_82CA2C60(ctx, base);
	// b 0x82ef7d44
	goto loc_82EF7D44;
loc_82EF7CCC:
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7CD8;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7D00;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EF7D14:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7d14
	if (!ctx.cr0.eq) goto loc_82EF7D14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7d40
	if (!ctx.cr0.eq) goto loc_82EF7D40;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7D40;
	sub_82EF6F38(ctx, base);
loc_82EF7D40:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82EF7D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7D4C"))) PPC_WEAK_FUNC(sub_82EF7D4C);
PPC_FUNC_IMPL(__imp__sub_82EF7D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7D50"))) PPC_WEAK_FUNC(sub_82EF7D50);
PPC_FUNC_IMPL(__imp__sub_82EF7D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EF7D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82ef7d74
	if (!ctx.cr6.eq) goto loc_82EF7D74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,2804
	ctx.r28.s64 = ctx.r11.s64 + 2804;
loc_82EF7D74:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe4c8
	ctx.lr = 0x82EF7D80;
	sub_82EFE4C8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef7dbc
	if (!ctx.cr6.eq) goto loc_82EF7DBC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7DA4;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82efe550
	ctx.lr = 0x82EF7DB8;
	sub_82EFE550(ctx, base);
	// b 0x82ef7e28
	goto loc_82EF7E28;
loc_82EF7DBC:
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7DC8;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// bl 0x82efe550
	ctx.lr = 0x82EF7DEC;
	sub_82EFE550(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF7DF8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7df8
	if (!ctx.cr0.eq) goto loc_82EF7DF8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7e24
	if (!ctx.cr0.eq) goto loc_82EF7E24;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7E24;
	sub_82EF6F38(ctx, base);
loc_82EF7E24:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82EF7E28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF7E30"))) PPC_WEAK_FUNC(sub_82EF7E30);
PPC_FUNC_IMPL(__imp__sub_82EF7E30) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82EF7E58:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7e58
	if (!ctx.cr0.eq) goto loc_82EF7E58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF7E80:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7e80
	if (!ctx.cr0.eq) goto loc_82EF7E80;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef7eac
	if (!ctx.cr0.eq) goto loc_82EF7EAC;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF7EAC;
	sub_82EF6F38(ctx, base);
loc_82EF7EAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EF7ECC"))) PPC_WEAK_FUNC(sub_82EF7ECC);
PPC_FUNC_IMPL(__imp__sub_82EF7ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF7ED0"))) PPC_WEAK_FUNC(sub_82EF7ED0);
PPC_FUNC_IMPL(__imp__sub_82EF7ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EF7ED8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r31,r8,1
	ctx.r31.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi r29,r9,1
	ctx.r29.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// rlwinm r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r28,r31,r29
	ctx.r28.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82ef7f5c
	if (!ctx.cr6.eq) goto loc_82EF7F5C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF7F30;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7F50;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x82ef8010
	goto loc_82EF8010;
loc_82EF7F5C:
	// rlwinm r25,r28,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r25,16
	ctx.r3.s64 = ctx.r25.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF7F68;
	sub_82EF6EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// beq 0x82ef7f8c
	if (ctx.cr0.eq) goto loc_82EF7F8C;
	// oris r11,r28,32768
	ctx.r11.u64 = ctx.r28.u64 | 2147483648;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EF7F8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r29,12
	ctx.r28.s64 = ctx.r29.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7FA4;
	sub_82CA2C60(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stbx r26,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r11,1
	ctx.r28.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF7FD0;
	sub_82CA2C60(ctx, base);
	// stbx r26,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r26.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF7FE0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef7fe0
	if (!ctx.cr0.eq) goto loc_82EF7FE0;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef800c
	if (!ctx.cr0.eq) goto loc_82EF800C;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF800C;
	sub_82EF6F38(ctx, base);
loc_82EF800C:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82EF8010:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8018"))) PPC_WEAK_FUNC(sub_82EF8018);
PPC_FUNC_IMPL(__imp__sub_82EF8018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EF8020;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82ef803c
	if (!ctx.cr6.eq) goto loc_82EF803C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,3224
	ctx.r25.s64 = ctx.r11.s64 + 3224;
loc_82EF803C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EF8040:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef8040
	if (!ctx.cr6.eq) goto loc_82EF8040;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r30,r11,1
	ctx.r30.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// add r27,r30,r29
	ctx.r27.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bne cr6,0x82ef80b0
	if (!ctx.cr6.eq) goto loc_82EF80B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF8088;
	sub_82EF72D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF80A4;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// b 0x82ef8148
	goto loc_82EF8148;
loc_82EF80B0:
	// rlwinm r26,r27,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF80BC;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF80E8;
	sub_82CA2C60(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stbx r26,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r26.u8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF8108;
	sub_82CA2C60(ctx, base);
	// stbx r26,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r26.u8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF8118:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8118
	if (!ctx.cr0.eq) goto loc_82EF8118;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef8144
	if (!ctx.cr0.eq) goto loc_82EF8144;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF8144;
	sub_82EF6F38(ctx, base);
loc_82EF8144:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82EF8148:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8150"))) PPC_WEAK_FUNC(sub_82EF8150);
PPC_FUNC_IMPL(__imp__sub_82EF8150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF8158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r4,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r4.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r30,r10,1
	ctx.r30.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm r27,r10,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef81b4
	if (!ctx.cr6.eq) goto loc_82EF81B4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF8190;
	sub_82EF72D8(ctx, base);
	// addi r10,r1,175
	ctx.r10.s64 = ctx.r1.s64 + 175;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// b 0x82ef8258
	goto loc_82EF8258;
loc_82EF81B4:
	// rlwinm r26,r28,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r26,16
	ctx.r3.s64 = ctx.r26.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF81C0;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq 0x82ef81e4
	if (ctx.cr0.eq) goto loc_82EF81E4;
	// oris r11,r28,32768
	ctx.r11.u64 = ctx.r28.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF81E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF81FC;
	sub_82CA2C60(ctx, base);
	// addi r8,r1,175
	ctx.r8.s64 = ctx.r1.s64 + 175;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stbx r9,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r9.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// stb r9,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r9.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EF8228:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwcx. r6,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r6.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8228
	if (!ctx.cr0.eq) goto loc_82EF8228;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef8254
	if (!ctx.cr0.eq) goto loc_82EF8254;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF8254;
	sub_82EF6F38(ctx, base);
loc_82EF8254:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82EF8258:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8260"))) PPC_WEAK_FUNC(sub_82EF8260);
PPC_FUNC_IMPL(__imp__sub_82EF8260) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82ef8284
	if (!ctx.cr6.eq) goto loc_82EF8284;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,3224
	ctx.r5.s64 = ctx.r11.s64 + 3224;
loc_82EF8284:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF8294:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8294
	if (!ctx.cr0.eq) goto loc_82EF8294;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef8018
	ctx.lr = 0x82EF82BC;
	sub_82EF8018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EF82D4"))) PPC_WEAK_FUNC(sub_82EF82D4);
PPC_FUNC_IMPL(__imp__sub_82EF82D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF82D8"))) PPC_WEAK_FUNC(sub_82EF82D8);
PPC_FUNC_IMPL(__imp__sub_82EF82D8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF82FC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef82fc
	if (!ctx.cr0.eq) goto loc_82EF82FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82ef7ed0
	ctx.lr = 0x82EF8324;
	sub_82EF7ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EF833C"))) PPC_WEAK_FUNC(sub_82EF833C);
PPC_FUNC_IMPL(__imp__sub_82EF833C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8340"))) PPC_WEAK_FUNC(sub_82EF8340);
PPC_FUNC_IMPL(__imp__sub_82EF8340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF8348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82ef7210
	ctx.lr = 0x82EF835C;
	sub_82EF7210(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82ef8454
	if (ctx.cr6.lt) goto loc_82EF8454;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82ef83ac
	if (!ctx.cr6.eq) goto loc_82EF83AC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ef6f38
	ctx.lr = 0x82EF8378;
	sub_82EF6F38(ctx, base);
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF838C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef838c
	if (!ctx.cr0.eq) goto loc_82EF838C;
	// b 0x82ef8454
	goto loc_82EF8454;
loc_82EF83AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82ef83e0
	if (ctx.cr0.eq) goto loc_82EF83E0;
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82ef8440
	goto loc_82EF8440;
loc_82EF83E0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe6f8
	ctx.lr = 0x82EF83F0;
	sub_82EFE6F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// add r3,r28,r29
	ctx.r3.u64 = ctx.r28.u64 + ctx.r29.u64;
	// bl 0x82efe6f8
	ctx.lr = 0x82EF8408;
	sub_82EFE6F8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82ef8454
	if (ctx.cr6.eq) goto loc_82EF8454;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r29,r30,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r8,12
	ctx.r3.s64 = ctx.r8.s64 + 12;
	// addi r4,r9,12
	ctx.r4.s64 = ctx.r9.s64 + 12;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82EF8440:
	// bl 0x82ca2c60
	ctx.lr = 0x82EF8444;
	sub_82CA2C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82EF8454:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF845C"))) PPC_WEAK_FUNC(sub_82EF845C);
PPC_FUNC_IMPL(__imp__sub_82EF845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8460"))) PPC_WEAK_FUNC(sub_82EF8460);
PPC_FUNC_IMPL(__imp__sub_82EF8460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF8468;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82ef7210
	ctx.lr = 0x82EF8484;
	sub_82EF7210(ctx, base);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82ef84c0
	if (!ctx.cr6.gt) goto loc_82EF84C0;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82EF84A0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef84a0
	if (!ctx.cr0.eq) goto loc_82EF84A0;
	// b 0x82ef85d0
	goto loc_82EF85D0;
loc_82EF84C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82ef8534
	if (ctx.cr0.eq) goto loc_82EF8534;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ef7700
	ctx.lr = 0x82EF84E4;
	sub_82EF7700(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82EF84F4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef84f4
	if (!ctx.cr0.eq) goto loc_82EF84F4;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82EF8514:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8514
	if (!ctx.cr0.eq) goto loc_82EF8514;
	// b 0x82ef85c0
	goto loc_82EF85C0;
loc_82EF8534:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82efe6f8
	ctx.lr = 0x82EF8544;
	sub_82EFE6F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82efe6f8
	ctx.lr = 0x82EF855C;
	sub_82EFE6F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r5,r31,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r31.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82ef7700
	ctx.lr = 0x82EF8574;
	sub_82EF7700(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82EF8584:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8584
	if (!ctx.cr0.eq) goto loc_82EF8584;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82EF85A4:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef85a4
	if (!ctx.cr0.eq) goto loc_82EF85A4;
loc_82EF85C0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef85d0
	if (!ctx.cr0.eq) goto loc_82EF85D0;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF85D0;
	sub_82EF6F38(ctx, base);
loc_82EF85D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF85DC"))) PPC_WEAK_FUNC(sub_82EF85DC);
PPC_FUNC_IMPL(__imp__sub_82EF85DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF85E0"))) PPC_WEAK_FUNC(sub_82EF85E0);
PPC_FUNC_IMPL(__imp__sub_82EF85E0) {
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
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7808
	ctx.r30.s64 = ctx.r11.s64 + -7808;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_82EF8608:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8608
	if (!ctx.cr0.eq) goto loc_82EF8608;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF8630:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8630
	if (!ctx.cr0.eq) goto loc_82EF8630;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef865c
	if (!ctx.cr0.eq) goto loc_82EF865C;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF865C;
	sub_82EF6F38(ctx, base);
loc_82EF865C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82EF8678"))) PPC_WEAK_FUNC(sub_82EF8678);
PPC_FUNC_IMPL(__imp__sub_82EF8678) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF86AC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef86ac
	if (!ctx.cr0.eq) goto loc_82EF86AC;
	// b 0x82ef86e0
	goto loc_82EF86E0;
loc_82EF86CC:
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x83002b58
	ctx.lr = 0x82EF86D4;
	sub_83002B58(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef78a0
	ctx.lr = 0x82EF86E0;
	sub_82EF78A0(ctx, base);
loc_82EF86E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF86E8;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef86cc
	if (!ctx.cr0.eq) goto loc_82EF86CC;
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

__attribute__((alias("__imp__sub_82EF8708"))) PPC_WEAK_FUNC(sub_82EF8708);
PPC_FUNC_IMPL(__imp__sub_82EF8708) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-31952
	ctx.r11.s64 = -2094006272;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,-7808
	ctx.r11.s64 = ctx.r11.s64 + -7808;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF873C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stwcx. r8,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef873c
	if (!ctx.cr0.eq) goto loc_82EF873C;
	// b 0x82ef8770
	goto loc_82EF8770;
loc_82EF875C:
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x8217a980
	ctx.lr = 0x82EF8764;
	sub_8217A980(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef78a0
	ctx.lr = 0x82EF8770;
	sub_82EF78A0(ctx, base);
loc_82EF8770:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF8778;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef875c
	if (!ctx.cr0.eq) goto loc_82EF875C;
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

__attribute__((alias("__imp__sub_82EF8798"))) PPC_WEAK_FUNC(sub_82EF8798);
PPC_FUNC_IMPL(__imp__sub_82EF8798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x82EF87A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82ef87dc
	if (!ctx.cr6.lt) goto loc_82EF87DC;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82EF87BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82ef87bc
	if (!ctx.cr6.eq) goto loc_82EF87BC;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82ef87e0
	goto loc_82EF87E0;
loc_82EF87DC:
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_82EF87E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r25,r10,1
	ctx.r25.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r29,r25,r28
	ctx.r29.u64 = ctx.r25.u64 + ctx.r28.u64;
	// bne 0x82ef8804
	if (!ctx.cr0.eq) goto loc_82EF8804;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82efe6f8
	ctx.lr = 0x82EF8804;
	sub_82EFE6F8(ctx, base);
loc_82EF8804:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82ef885c
	if (!ctx.cr6.eq) goto loc_82EF885C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ef72d8
	ctx.lr = 0x82EF8828;
	sub_82EF72D8(ctx, base);
	// subf r11,r27,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r27.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x82caa2e0
	ctx.lr = 0x82EF8848;
	sub_82CAA2E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF8858;
	sub_82CA2C60(ctx, base);
	// b 0x82ef8908
	goto loc_82EF8908;
loc_82EF885C:
	// rlwinm r30,r29,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF8868;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r23,r11,1
	ctx.r23.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF889C;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r29,r30,r27
	ctx.r29.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stbx r11,r30,r23
	PPC_STORE_U8(ctx.r30.u32 + ctx.r23.u32, ctx.r11.u8);
	// subf r11,r27,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r27.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82caa2e0
	ctx.lr = 0x82EF88BC;
	sub_82CAA2E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF88CC;
	sub_82CA2C60(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF88D8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef88d8
	if (!ctx.cr0.eq) goto loc_82EF88D8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef8904
	if (!ctx.cr0.eq) goto loc_82EF8904;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF8904;
	sub_82EF6F38(ctx, base);
loc_82EF8904:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_82EF8908:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8914"))) PPC_WEAK_FUNC(sub_82EF8914);
PPC_FUNC_IMPL(__imp__sub_82EF8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8918"))) PPC_WEAK_FUNC(sub_82EF8918);
PPC_FUNC_IMPL(__imp__sub_82EF8918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF8920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF8934;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef89e4
	if (ctx.cr0.eq) goto loc_82EF89E4;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r30,r7,-3588
	ctx.r30.s64 = ctx.r7.s64 + -3588;
	// addi r29,r8,-11820
	ctx.r29.s64 = ctx.r8.s64 + -11820;
	// addi r28,r9,-3612
	ctx.r28.s64 = ctx.r9.s64 + -3612;
	// addi r27,r10,-3604
	ctx.r27.s64 = ctx.r10.s64 + -3604;
	// addi r26,r11,-3596
	ctx.r26.s64 = ctx.r11.s64 + -3596;
loc_82EF8964:
	// cmplwi cr6,r3,60
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 60, ctx.xer);
	// bne cr6,0x82ef8974
	if (!ctx.cr6.eq) goto loc_82EF8974;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82ef8980
	goto loc_82EF8980;
loc_82EF8974:
	// cmplwi cr6,r3,62
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 62, ctx.xer);
	// bne cr6,0x82ef8988
	if (!ctx.cr6.eq) goto loc_82EF8988;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82EF8980:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82ef89bc
	goto loc_82EF89BC;
loc_82EF8988:
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bne cr6,0x82ef8998
	if (!ctx.cr6.eq) goto loc_82EF8998;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82ef89a4
	goto loc_82EF89A4;
loc_82EF8998:
	// cmplwi cr6,r3,39
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 39, ctx.xer);
	// bne cr6,0x82ef89ac
	if (!ctx.cr6.eq) goto loc_82EF89AC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82EF89A4:
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x82ef89bc
	goto loc_82EF89BC;
loc_82EF89AC:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x82ef89c8
	if (!ctx.cr6.eq) goto loc_82EF89C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
loc_82EF89BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef7ae8
	ctx.lr = 0x82EF89C4;
	sub_82EF7AE8(ctx, base);
	// b 0x82ef89d4
	goto loc_82EF89D4;
loc_82EF89C8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef78a0
	ctx.lr = 0x82EF89D4;
	sub_82EF78A0(ctx, base);
loc_82EF89D4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF89DC;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef8964
	if (!ctx.cr0.eq) goto loc_82EF8964;
loc_82EF89E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF89EC"))) PPC_WEAK_FUNC(sub_82EF89EC);
PPC_FUNC_IMPL(__imp__sub_82EF89EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF89F0"))) PPC_WEAK_FUNC(sub_82EF89F0);
PPC_FUNC_IMPL(__imp__sub_82EF89F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x82EF89F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF8A0C;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef8b14
	if (ctx.cr0.eq) goto loc_82EF8B14;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r7,-11784
	ctx.r31.s64 = ctx.r7.s64 + -11784;
	// addi r30,r8,-11788
	ctx.r30.s64 = ctx.r8.s64 + -11788;
	// addi r29,r9,-11796
	ctx.r29.s64 = ctx.r9.s64 + -11796;
	// addi r28,r10,-11804
	ctx.r28.s64 = ctx.r10.s64 + -11804;
	// addi r27,r11,-11812
	ctx.r27.s64 = ctx.r11.s64 + -11812;
loc_82EF8A3C:
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// bne cr6,0x82ef8ac8
	if (!ctx.cr6.eq) goto loc_82EF8AC8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82ca3920
	ctx.lr = 0x82EF8A54;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ef8ae8
	if (ctx.cr0.eq) goto loc_82EF8AE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x82ca3920
	ctx.lr = 0x82EF8A6C;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ef8af4
	if (ctx.cr0.eq) goto loc_82EF8AF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x82ca3920
	ctx.lr = 0x82EF8A84;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ef8afc
	if (ctx.cr0.eq) goto loc_82EF8AFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82ca3920
	ctx.lr = 0x82EF8A9C;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82ef8b04
	if (ctx.cr0.eq) goto loc_82EF8B04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82ca3920
	ctx.lr = 0x82EF8AB4;
	sub_82CA3920(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq 0x82ef8b0c
	if (ctx.cr0.eq) goto loc_82EF8B0C;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82ef8ad0
	goto loc_82EF8AD0;
loc_82EF8AC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82EF8AD0:
	// bl 0x82ef78a0
	ctx.lr = 0x82EF8AD4;
	sub_82EF78A0(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82efdfa8
	ctx.lr = 0x82EF8ADC;
	sub_82EFDFA8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82ef8a3c
	if (!ctx.cr0.eq) goto loc_82EF8A3C;
	// b 0x82ef8b14
	goto loc_82EF8B14;
loc_82EF8AE8:
	// li r4,34
	ctx.r4.s64 = 34;
loc_82EF8AEC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82ef8b10
	goto loc_82EF8B10;
loc_82EF8AF4:
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x82ef8aec
	goto loc_82EF8AEC;
loc_82EF8AFC:
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x82ef8aec
	goto loc_82EF8AEC;
loc_82EF8B04:
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x82ef8aec
	goto loc_82EF8AEC;
loc_82EF8B0C:
	// li r4,62
	ctx.r4.s64 = 62;
loc_82EF8B10:
	// bl 0x82ef78a0
	ctx.lr = 0x82EF8B14;
	sub_82EF78A0(ctx, base);
loc_82EF8B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8B1C"))) PPC_WEAK_FUNC(sub_82EF8B1C);
PPC_FUNC_IMPL(__imp__sub_82EF8B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8B20"))) PPC_WEAK_FUNC(sub_82EF8B20);
PPC_FUNC_IMPL(__imp__sub_82EF8B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x82EF8B28;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r27,r10,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82ef8bec
	if (ctx.cr6.eq) goto loc_82EF8BEC;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// clrlwi r28,r11,1
	ctx.r28.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF8B64;
	sub_82EF6EF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq 0x82ef8b88
	if (ctx.cr0.eq) goto loc_82EF8B88;
	// oris r11,r28,32768
	ctx.r11.u64 = ctx.r28.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82EF8B88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r11,1
	ctx.r28.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82ca2c60
	ctx.lr = 0x82EF8BA8;
	sub_82CA2C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82EF8BBC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef8bbc
	if (!ctx.cr0.eq) goto loc_82EF8BBC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef8be8
	if (!ctx.cr0.eq) goto loc_82EF8BE8;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF8BE8;
	sub_82EF6F38(ctx, base);
loc_82EF8BE8:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82EF8BEC:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef8340
	ctx.lr = 0x82EF8BFC;
	sub_82EF8340(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8C04"))) PPC_WEAK_FUNC(sub_82EF8C04);
PPC_FUNC_IMPL(__imp__sub_82EF8C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8C08"))) PPC_WEAK_FUNC(sub_82EF8C08);
PPC_FUNC_IMPL(__imp__sub_82EF8C08) {
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
	// bl 0x82266070
	ctx.lr = 0x82EF8C18;
	sub_82266070(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF8C2C"))) PPC_WEAK_FUNC(sub_82EF8C2C);
PPC_FUNC_IMPL(__imp__sub_82EF8C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8C30"))) PPC_WEAK_FUNC(sub_82EF8C30);
PPC_FUNC_IMPL(__imp__sub_82EF8C30) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82f28ae0
	sub_82F28AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF8C38"))) PPC_WEAK_FUNC(sub_82EF8C38);
PPC_FUNC_IMPL(__imp__sub_82EF8C38) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef8c74
	if (!ctx.cr6.eq) goto loc_82EF8C74;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef8c74
	if (ctx.cr6.eq) goto loc_82EF8C74;
	// bl 0x82ef1710
	ctx.lr = 0x82EF8C74;
	sub_82EF1710(ctx, base);
loc_82EF8C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EF8C8C"))) PPC_WEAK_FUNC(sub_82EF8C8C);
PPC_FUNC_IMPL(__imp__sub_82EF8C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8C90"))) PPC_WEAK_FUNC(sub_82EF8C90);
PPC_FUNC_IMPL(__imp__sub_82EF8C90) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef8cc8
	if (!ctx.cr6.eq) goto loc_82EF8CC8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef8cc8
	if (ctx.cr6.eq) goto loc_82EF8CC8;
	// bl 0x82ef1710
	ctx.lr = 0x82EF8CC8;
	sub_82EF1710(ctx, base);
loc_82EF8CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef8ce4
	if (!ctx.cr6.eq) goto loc_82EF8CE4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef8ce4
	if (ctx.cr6.eq) goto loc_82EF8CE4;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF8CE4;
	sub_82EF1BF0(ctx, base);
loc_82EF8CE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EF8D10"))) PPC_WEAK_FUNC(sub_82EF8D10);
PPC_FUNC_IMPL(__imp__sub_82EF8D10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EF8D20"))) PPC_WEAK_FUNC(sub_82EF8D20);
PPC_FUNC_IMPL(__imp__sub_82EF8D20) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF8D34"))) PPC_WEAK_FUNC(sub_82EF8D34);
PPC_FUNC_IMPL(__imp__sub_82EF8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8D38"))) PPC_WEAK_FUNC(sub_82EF8D38);
PPC_FUNC_IMPL(__imp__sub_82EF8D38) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef8d6c
	if (!ctx.cr6.eq) goto loc_82EF8D6C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF8D68;
	sub_82EF6EF8(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82EF8D6C:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82EF8DB8"))) PPC_WEAK_FUNC(sub_82EF8DB8);
PPC_FUNC_IMPL(__imp__sub_82EF8DB8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82ef8dec
	if (!ctx.cr6.eq) goto loc_82EF8DEC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF8DE8;
	sub_82EF6EF8(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
loc_82EF8DEC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_82EF8E38"))) PPC_WEAK_FUNC(sub_82EF8E38);
PPC_FUNC_IMPL(__imp__sub_82EF8E38) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// stb r10,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r10.u8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82ef8e70
	if (!ctx.cr6.lt) goto loc_82EF8E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82EF8E70;
	sub_82F29438(ctx, base);
loc_82EF8E70:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EF8E98"))) PPC_WEAK_FUNC(sub_82EF8E98);
PPC_FUNC_IMPL(__imp__sub_82EF8E98) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// stb r10,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r10.u8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82ef8ed4
	if (!ctx.cr6.lt) goto loc_82EF8ED4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82EF8ED4;
	sub_82F29318(ctx, base);
loc_82EF8ED4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
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

__attribute__((alias("__imp__sub_82EF8F0C"))) PPC_WEAK_FUNC(sub_82EF8F0C);
PPC_FUNC_IMPL(__imp__sub_82EF8F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8F10"))) PPC_WEAK_FUNC(sub_82EF8F10);
PPC_FUNC_IMPL(__imp__sub_82EF8F10) {
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// stb r10,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r10.u8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82ef8f4c
	if (!ctx.cr6.lt) goto loc_82EF8F4C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82EF8F4C;
	sub_82F29318(ctx, base);
loc_82EF8F4C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lbz r9,51(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r7,49(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82EF8F98"))) PPC_WEAK_FUNC(sub_82EF8F98);
PPC_FUNC_IMPL(__imp__sub_82EF8F98) {
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
	// bl 0x82ef6fe0
	ctx.lr = 0x82EF8FB0;
	sub_82EF6FE0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,-11672
	ctx.r11.s64 = ctx.r11.s64 + -11672;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82EF8FC4;
	sub_82EF7600(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EF8FEC"))) PPC_WEAK_FUNC(sub_82EF8FEC);
PPC_FUNC_IMPL(__imp__sub_82EF8FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF8FF0"))) PPC_WEAK_FUNC(sub_82EF8FF0);
PPC_FUNC_IMPL(__imp__sub_82EF8FF0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF9010:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef9010
	if (!ctx.cr0.eq) goto loc_82EF9010;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef903c
	if (!ctx.cr0.eq) goto loc_82EF903C;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF903C;
	sub_82EF6F38(ctx, base);
loc_82EF903C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EF9044;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF9058"))) PPC_WEAK_FUNC(sub_82EF9058);
PPC_FUNC_IMPL(__imp__sub_82EF9058) {
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
	// bl 0x82ef8f98
	ctx.lr = 0x82EF9070;
	sub_82EF8F98(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r11,r11,-11668
	ctx.r11.s64 = ctx.r11.s64 + -11668;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef7600
	ctx.lr = 0x82EF9084;
	sub_82EF7600(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EF90AC"))) PPC_WEAK_FUNC(sub_82EF90AC);
PPC_FUNC_IMPL(__imp__sub_82EF90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF90B0"))) PPC_WEAK_FUNC(sub_82EF90B0);
PPC_FUNC_IMPL(__imp__sub_82EF90B0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82EF90D0:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82ef90d0
	if (!ctx.cr0.eq) goto loc_82EF90D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82ef90fc
	if (!ctx.cr0.eq) goto loc_82EF90FC;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF90FC;
	sub_82EF6F38(ctx, base);
loc_82EF90FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef8ff0
	ctx.lr = 0x82EF9104;
	sub_82EF8FF0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF9118"))) PPC_WEAK_FUNC(sub_82EF9118);
PPC_FUNC_IMPL(__imp__sub_82EF9118) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-11664
	ctx.r11.s64 = ctx.r11.s64 + -11664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef9154
	if (!ctx.cr6.eq) goto loc_82EF9154;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9154
	if (ctx.cr6.eq) goto loc_82EF9154;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9154;
	sub_82EF1BF0(ctx, base);
loc_82EF9154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef70b0
	ctx.lr = 0x82EF915C;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF9170"))) PPC_WEAK_FUNC(sub_82EF9170);
PPC_FUNC_IMPL(__imp__sub_82EF9170) {
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
	// bl 0x82ef9118
	ctx.lr = 0x82EF9190;
	sub_82EF9118(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef91a0
	if (ctx.cr0.eq) goto loc_82EF91A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF91A0;
	sub_82EF6F38(ctx, base);
loc_82EF91A0:
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

__attribute__((alias("__imp__sub_82EF91BC"))) PPC_WEAK_FUNC(sub_82EF91BC);
PPC_FUNC_IMPL(__imp__sub_82EF91BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF91C0"))) PPC_WEAK_FUNC(sub_82EF91C0);
PPC_FUNC_IMPL(__imp__sub_82EF91C0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-11780
	ctx.r11.s64 = ctx.r11.s64 + -11780;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82ef91ec
	if (ctx.cr0.eq) goto loc_82EF91EC;
	// bl 0x824fe010
	ctx.lr = 0x82EF91EC;
	sub_824FE010(ctx, base);
loc_82EF91EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82EF9204"))) PPC_WEAK_FUNC(sub_82EF9204);
PPC_FUNC_IMPL(__imp__sub_82EF9204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9208"))) PPC_WEAK_FUNC(sub_82EF9208);
PPC_FUNC_IMPL(__imp__sub_82EF9208) {
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
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f2a4e0
	ctx.lr = 0x82EF9228;
	sub_82F2A4E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bne cr6,0x82ef9254
	if (!ctx.cr6.eq) goto loc_82EF9254;
	// lwz r3,732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82ef9260
	goto loc_82EF9260;
loc_82EF9254:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82EF9260:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF9270;
	sub_82EF6F38(ctx, base);
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

__attribute__((alias("__imp__sub_82EF9288"))) PPC_WEAK_FUNC(sub_82EF9288);
PPC_FUNC_IMPL(__imp__sub_82EF9288) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82ef92bc
	if (!ctx.cr6.gt) goto loc_82EF92BC;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f29440
	ctx.lr = 0x82EF92B0;
	sub_82F29440(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82f3e3b0
	ctx.lr = 0x82EF92B8;
	sub_82F3E3B0(ctx, base);
	// stw r3,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r3.u32);
loc_82EF92BC:
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

__attribute__((alias("__imp__sub_82EF92D0"))) PPC_WEAK_FUNC(sub_82EF92D0);
PPC_FUNC_IMPL(__imp__sub_82EF92D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF92D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r29,48
	ctx.r31.s64 = ctx.r29.s64 + 48;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r9,84(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// stb r10,69(r29)
	PPC_STORE_U8(ctx.r29.u32 + 69, ctx.r10.u8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82ef930c
	if (!ctx.cr6.lt) goto loc_82EF930C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29318
	ctx.lr = 0x82EF930C;
	sub_82F29318(ctx, base);
loc_82EF930C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r9,49(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lbz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82f29440
	ctx.lr = 0x82EF9338;
	sub_82F29440(ctx, base);
	// lwz r30,680(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 680);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82ef9358
	if (!ctx.cr6.eq) goto loc_82EF9358;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29440
	ctx.lr = 0x82EF934C;
	sub_82F29440(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82effbf8
	ctx.lr = 0x82EF9354;
	sub_82EFFBF8(ctx, base);
	// b 0x82ef9374
	goto loc_82EF9374;
loc_82EF9358:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF936C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82effd10
	ctx.lr = 0x82EF9374;
	sub_82EFFD10(ctx, base);
loc_82EF9374:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f3ff00
	ctx.lr = 0x82EF9390;
	sub_82F3FF00(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef93b0
	if (ctx.cr6.eq) goto loc_82EF93B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF93B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF93B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF93B8"))) PPC_WEAK_FUNC(sub_82EF93B8);
PPC_FUNC_IMPL(__imp__sub_82EF93B8) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef93ec
	if (ctx.cr6.eq) goto loc_82EF93EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF93EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF93EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-12000
	ctx.r11.s64 = ctx.r11.s64 + -12000;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82ef70b0
	ctx.lr = 0x82EF9400;
	sub_82EF70B0(ctx, base);
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

__attribute__((alias("__imp__sub_82EF9414"))) PPC_WEAK_FUNC(sub_82EF9414);
PPC_FUNC_IMPL(__imp__sub_82EF9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9418"))) PPC_WEAK_FUNC(sub_82EF9418);
PPC_FUNC_IMPL(__imp__sub_82EF9418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x82EF9420;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF9458;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9484
	if (ctx.cr0.eq) goto loc_82EF9484;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82ef9058
	ctx.lr = 0x82EF947C;
	sub_82EF9058(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82ef9488
	goto loc_82EF9488;
loc_82EF9484:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82EF9488:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef9578
	if (ctx.cr6.eq) goto loc_82EF9578;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef7c30
	ctx.lr = 0x82EF949C;
	sub_82EF7C30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82ef7c30
	ctx.lr = 0x82EF94A8;
	sub_82EF7C30(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82ef94c0
	if (!ctx.cr6.eq) goto loc_82EF94C0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82EF94C0:
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// sth r23,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r23.u16);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// sth r22,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r22.u16);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r10,0,4,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF0000;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82ef94f0
	if (!ctx.cr6.eq) goto loc_82EF94F0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82EF94F0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f3f550
	ctx.lr = 0x82EF9504;
	sub_82F3F550(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f3fc78
	ctx.lr = 0x82EF9518;
	sub_82F3FC78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ef8c90
	ctx.lr = 0x82EF9524;
	sub_82EF8C90(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef9540
	if (!ctx.cr6.eq) goto loc_82EF9540;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9540
	if (ctx.cr6.eq) goto loc_82EF9540;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9540;
	sub_82EF1BF0(ctx, base);
loc_82EF9540:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9560
	if (ctx.cr6.eq) goto loc_82EF9560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9560:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9578:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9584"))) PPC_WEAK_FUNC(sub_82EF9584);
PPC_FUNC_IMPL(__imp__sub_82EF9584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9588"))) PPC_WEAK_FUNC(sub_82EF9588);
PPC_FUNC_IMPL(__imp__sub_82EF9588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82f290d8
	ctx.lr = 0x82EF95C4;
	sub_82F290D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef95e8
	if (ctx.cr0.eq) goto loc_82EF95E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF95E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF95E8:
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

__attribute__((alias("__imp__sub_82EF95FC"))) PPC_WEAK_FUNC(sub_82EF95FC);
PPC_FUNC_IMPL(__imp__sub_82EF95FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9600"))) PPC_WEAK_FUNC(sub_82EF9600);
PPC_FUNC_IMPL(__imp__sub_82EF9600) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82f290e0
	ctx.lr = 0x82EF9644;
	sub_82F290E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef9678
	if (ctx.cr0.eq) goto loc_82EF9678;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f290d8
	ctx.lr = 0x82EF9654;
	sub_82F290D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9678
	if (ctx.cr0.eq) goto loc_82EF9678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9678:
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

__attribute__((alias("__imp__sub_82EF9690"))) PPC_WEAK_FUNC(sub_82EF9690);
PPC_FUNC_IMPL(__imp__sub_82EF9690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82ef96d4
	if (!ctx.cr6.eq) goto loc_82EF96D4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF96D4:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef96fc
	if (ctx.cr6.eq) goto loc_82EF96FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF96FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF96FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF970C"))) PPC_WEAK_FUNC(sub_82EF970C);
PPC_FUNC_IMPL(__imp__sub_82EF970C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9710"))) PPC_WEAK_FUNC(sub_82EF9710);
PPC_FUNC_IMPL(__imp__sub_82EF9710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r3,-24
	ctx.r11.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82ef9754
	if (!ctx.cr6.eq) goto loc_82EF9754;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF9754:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef977c
	if (ctx.cr6.eq) goto loc_82EF977C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF977C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF977C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF978C"))) PPC_WEAK_FUNC(sub_82EF978C);
PPC_FUNC_IMPL(__imp__sub_82EF978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9790"))) PPC_WEAK_FUNC(sub_82EF9790);
PPC_FUNC_IMPL(__imp__sub_82EF9790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r3,-24
	ctx.r10.s64 = ctx.r3.s64 + -24;
	// bne cr6,0x82ef97d4
	if (!ctx.cr6.eq) goto loc_82EF97D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EF97D4:
	// addic. r11,r10,24
	ctx.xer.ca = ctx.r10.u32 > 4294967271;
	ctx.r11.s64 = ctx.r10.s64 + 24;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// bne 0x82ef97e4
	if (!ctx.cr0.eq) goto loc_82EF97E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82EF97E4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef9818
	if (ctx.cr0.eq) goto loc_82EF9818;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9818
	if (ctx.cr6.eq) goto loc_82EF9818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9818;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9818:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF9828"))) PPC_WEAK_FUNC(sub_82EF9828);
PPC_FUNC_IMPL(__imp__sub_82EF9828) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// blt cr6,0x82ef9864
	if (ctx.cr6.lt) goto loc_82EF9864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82ef9870
	goto loc_82EF9870;
loc_82EF9864:
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f2ab08
	ctx.lr = 0x82EF9870;
	sub_82F2AB08(ctx, base);
loc_82EF9870:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9880
	if (ctx.cr6.eq) goto loc_82EF9880;
	// bl 0x82f38d30
	ctx.lr = 0x82EF987C;
	sub_82F38D30(ctx, base);
	// b 0x82ef9884
	goto loc_82EF9884;
loc_82EF9880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF9884:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF9894"))) PPC_WEAK_FUNC(sub_82EF9894);
PPC_FUNC_IMPL(__imp__sub_82EF9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9898"))) PPC_WEAK_FUNC(sub_82EF9898);
PPC_FUNC_IMPL(__imp__sub_82EF9898) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82ef98d0
	if (ctx.cr6.lt) goto loc_82EF98D0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82ef98dc
	goto loc_82EF98DC;
loc_82EF98D0:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82f2ab08
	ctx.lr = 0x82EF98DC;
	sub_82F2AB08(ctx, base);
loc_82EF98DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef98fc
	if (ctx.cr6.eq) goto loc_82EF98FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-11744
	ctx.r11.s64 = ctx.r10.s64 + -11744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82ef9900
	goto loc_82EF9900;
loc_82EF98FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF9900:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EF9910"))) PPC_WEAK_FUNC(sub_82EF9910);
PPC_FUNC_IMPL(__imp__sub_82EF9910) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82ef9950
	if (ctx.cr6.eq) goto loc_82EF9950;
	// bl 0x82ef6fe0
	ctx.lr = 0x82EF9930;
	sub_82EF6FE0(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-11664
	ctx.r10.s64 = ctx.r10.s64 + -11664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82ef9954
	goto loc_82EF9954;
loc_82EF9950:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EF9954:
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

__attribute__((alias("__imp__sub_82EF9968"))) PPC_WEAK_FUNC(sub_82EF9968);
PPC_FUNC_IMPL(__imp__sub_82EF9968) {
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
	// bl 0x82ef8ff0
	ctx.lr = 0x82EF9988;
	sub_82EF8FF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef9998
	if (ctx.cr0.eq) goto loc_82EF9998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF9998;
	sub_82EF6F38(ctx, base);
loc_82EF9998:
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

__attribute__((alias("__imp__sub_82EF99B4"))) PPC_WEAK_FUNC(sub_82EF99B4);
PPC_FUNC_IMPL(__imp__sub_82EF99B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF99B8"))) PPC_WEAK_FUNC(sub_82EF99B8);
PPC_FUNC_IMPL(__imp__sub_82EF99B8) {
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
	// bl 0x82ef90b0
	ctx.lr = 0x82EF99D8;
	sub_82EF90B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82ef99e8
	if (ctx.cr0.eq) goto loc_82EF99E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef6f38
	ctx.lr = 0x82EF99E8;
	sub_82EF6F38(ctx, base);
loc_82EF99E8:
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

__attribute__((alias("__imp__sub_82EF9A04"))) PPC_WEAK_FUNC(sub_82EF9A04);
PPC_FUNC_IMPL(__imp__sub_82EF9A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9A08"))) PPC_WEAK_FUNC(sub_82EF9A08);
PPC_FUNC_IMPL(__imp__sub_82EF9A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF9A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9A1C;
	sub_82EF8E98(ctx, base);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r8,-11624
	ctx.r4.s64 = ctx.r8.s64 + -11624;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9A4C;
	sub_82EF9790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f29440
	ctx.lr = 0x82EF9A54;
	sub_82F29440(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82f00110
	ctx.lr = 0x82EF9A5C;
	sub_82F00110(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3ff00
	ctx.lr = 0x82EF9A74;
	sub_82F3FF00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef9a94
	if (ctx.cr6.eq) goto loc_82EF9A94;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9A9C"))) PPC_WEAK_FUNC(sub_82EF9A9C);
PPC_FUNC_IMPL(__imp__sub_82EF9A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9AA0"))) PPC_WEAK_FUNC(sub_82EF9AA0);
PPC_FUNC_IMPL(__imp__sub_82EF9AA0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// addi r4,r11,-28876
	ctx.r4.s64 = ctx.r11.s64 + -28876;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82b538e0
	ctx.lr = 0x82EF9AEC;
	sub_82B538E0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82ef9b00
	if (ctx.cr0.eq) goto loc_82EF9B00;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-11464
	ctx.r4.s64 = ctx.r11.s64 + -11464;
	// b 0x82ef9b90
	goto loc_82EF9B90;
loc_82EF9B00:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82ef9b20
	if (!ctx.cr6.lt) goto loc_82EF9B20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f29438
	ctx.lr = 0x82EF9B20;
	sub_82F29438(ctx, base);
loc_82EF9B20:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r8,48(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 48);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x82b53a40
	ctx.lr = 0x82EF9B54;
	sub_82B53A40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82ef9b78
	if (ctx.cr6.eq) goto loc_82EF9B78;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82ef9b00
	if (ctx.cr6.eq) goto loc_82EF9B00;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-11516
	ctx.r4.s64 = ctx.r11.s64 + -11516;
	// bl 0x82ef9588
	ctx.lr = 0x82EF9B78;
	sub_82EF9588(ctx, base);
loc_82EF9B78:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b55128
	ctx.lr = 0x82EF9B80;
	sub_82B55128(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82ef9b98
	if (ctx.cr0.eq) goto loc_82EF9B98;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,-11568
	ctx.r4.s64 = ctx.r11.s64 + -11568;
loc_82EF9B90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ef9588
	ctx.lr = 0x82EF9B98;
	sub_82EF9588(ctx, base);
loc_82EF9B98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82EF9BB0"))) PPC_WEAK_FUNC(sub_82EF9BB0);
PPC_FUNC_IMPL(__imp__sub_82EF9BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x82EF9BB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9BC8;
	sub_82EF8E98(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-11392
	ctx.r4.s64 = ctx.r11.s64 + -11392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9BE4;
	sub_82EF9790(ctx, base);
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF9BEC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9c04
	if (ctx.cr0.eq) goto loc_82EF9C04;
	// li r4,8178
	ctx.r4.s64 = 8178;
	// bl 0x82f45330
	ctx.lr = 0x82EF9BFC;
	sub_82F45330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef9c08
	goto loc_82EF9C08;
loc_82EF9C04:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF9C08:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f456f0
	ctx.lr = 0x82EF9C1C;
	sub_82F456F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82ef9c68
	if (ctx.cr6.eq) goto loc_82EF9C68;
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r4,r11,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// bl 0x82f45fc8
	ctx.lr = 0x82EF9C50;
	sub_82F45FC8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f442e8
	ctx.lr = 0x82EF9C60;
	sub_82F442E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ef93b8
	ctx.lr = 0x82EF9C68;
	sub_82EF93B8(ctx, base);
loc_82EF9C68:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-11408
	ctx.r4.s64 = ctx.r11.s64 + -11408;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9C78;
	sub_82EF9790(ctx, base);
	// addi r4,r30,72
	ctx.r4.s64 = ctx.r30.s64 + 72;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82f2a270
	ctx.lr = 0x82EF9C84;
	sub_82F2A270(ctx, base);
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef9ca4
	if (!ctx.cr6.eq) goto loc_82EF9CA4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f307a0
	ctx.lr = 0x82EF9CA4;
	sub_82F307A0(ctx, base);
loc_82EF9CA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef9cb4
	if (ctx.cr6.eq) goto loc_82EF9CB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9CB4;
	sub_82EF1BF0(ctx, base);
loc_82EF9CB4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9CBC"))) PPC_WEAK_FUNC(sub_82EF9CBC);
PPC_FUNC_IMPL(__imp__sub_82EF9CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9CC0"))) PPC_WEAK_FUNC(sub_82EF9CC0);
PPC_FUNC_IMPL(__imp__sub_82EF9CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF9CC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9CD8;
	sub_82EF8E98(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-11368
	ctx.r4.s64 = ctx.r11.s64 + -11368;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9CF0;
	sub_82EF9790(ctx, base);
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF9CF8;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9d0c
	if (ctx.cr0.eq) goto loc_82EF9D0C;
	// bl 0x82f480a0
	ctx.lr = 0x82EF9D04;
	sub_82F480A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef9d10
	goto loc_82EF9D10;
loc_82EF9D0C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF9D10:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f47870
	ctx.lr = 0x82EF9D24;
	sub_82F47870(ctx, base);
	// lwz r11,728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef9d44
	if (!ctx.cr6.eq) goto loc_82EF9D44;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f307a0
	ctx.lr = 0x82EF9D44;
	sub_82F307A0(ctx, base);
loc_82EF9D44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef9d54
	if (ctx.cr6.eq) goto loc_82EF9D54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9D54;
	sub_82EF1BF0(ctx, base);
loc_82EF9D54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9D5C"))) PPC_WEAK_FUNC(sub_82EF9D5C);
PPC_FUNC_IMPL(__imp__sub_82EF9D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9D60"))) PPC_WEAK_FUNC(sub_82EF9D60);
PPC_FUNC_IMPL(__imp__sub_82EF9D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x82EF9D68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9D78;
	sub_82EF8E98(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-11336
	ctx.r4.s64 = ctx.r11.s64 + -11336;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9D90;
	sub_82EF9790(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF9D98;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9dc4
	if (ctx.cr0.eq) goto loc_82EF9DC4;
	// lis r11,22087
	ctx.r11.s64 = 1447493632;
	// lis r10,-24607
	ctx.r10.s64 = -1612644352;
	// ori r11,r11,7817
	ctx.r11.u64 = ctx.r11.u64 | 7817;
	// ori r10,r10,9034
	ctx.r10.u64 = ctx.r10.u64 | 9034;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82f4a3d0
	ctx.lr = 0x82EF9DBC;
	sub_82F4A3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef9dc8
	goto loc_82EF9DC8;
loc_82EF9DC4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF9DC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f4ab78
	ctx.lr = 0x82EF9DD8;
	sub_82F4AB78(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f3fd28
	ctx.lr = 0x82EF9DF0;
	sub_82F3FD28(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82ef9e0c
	if (!ctx.cr6.eq) goto loc_82EF9E0C;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82ef9e0c
	if (ctx.cr6.eq) goto loc_82EF9E0C;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9E0C;
	sub_82EF1BF0(ctx, base);
loc_82EF9E0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82ef9e2c
	if (ctx.cr6.eq) goto loc_82EF9E2C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82EF9E2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82EF9E2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9E34"))) PPC_WEAK_FUNC(sub_82EF9E34);
PPC_FUNC_IMPL(__imp__sub_82EF9E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EF9E38"))) PPC_WEAK_FUNC(sub_82EF9E38);
PPC_FUNC_IMPL(__imp__sub_82EF9E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF9E40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9E50;
	sub_82EF8E98(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82f2cad0
	ctx.lr = 0x82EF9E64;
	sub_82F2CAD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9e7c
	if (ctx.cr0.eq) goto loc_82EF9E7C;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82f4b9c8
	ctx.lr = 0x82EF9E78;
	sub_82F4B9C8(ctx, base);
	// b 0x82ef9e90
	goto loc_82EF9E90;
loc_82EF9E7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-11316
	ctx.r4.s64 = ctx.r11.s64 + -11316;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef9690
	ctx.lr = 0x82EF9E90;
	sub_82EF9690(ctx, base);
loc_82EF9E90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EF9E98"))) PPC_WEAK_FUNC(sub_82EF9E98);
PPC_FUNC_IMPL(__imp__sub_82EF9E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x82EF9EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82ef8e98
	ctx.lr = 0x82EF9EAC;
	sub_82EF8E98(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-11252
	ctx.r4.s64 = ctx.r11.s64 + -11252;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82ef9790
	ctx.lr = 0x82EF9EC4;
	sub_82EF9790(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82ef6ef8
	ctx.lr = 0x82EF9ECC;
	sub_82EF6EF8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82ef9ee4
	if (ctx.cr0.eq) goto loc_82EF9EE4;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82f55cb0
	ctx.lr = 0x82EF9EDC;
	sub_82F55CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82ef9ee8
	goto loc_82EF9EE8;
loc_82EF9EE4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EF9EE8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f534a0
	ctx.lr = 0x82EF9EFC;
	sub_82F534A0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82f307a0
	ctx.lr = 0x82EF9F14;
	sub_82F307A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ef1bf0
	ctx.lr = 0x82EF9F1C;
	sub_82EF1BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

