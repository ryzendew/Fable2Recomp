#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827D0F48"))) PPC_WEAK_FUNC(sub_827D0F48);
PPC_FUNC_IMPL(__imp__sub_827D0F48) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,10468
	ctx.r10.s64 = ctx.r11.s64 + 10468;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x827d1278
	ctx.lr = 0x827D0F74;
	sub_827D1278(ctx, base);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x821c6868
	ctx.lr = 0x827D0F7C;
	sub_821C6868(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x821c6868
	ctx.lr = 0x827D0F84;
	sub_821C6868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d27c0
	ctx.lr = 0x827D0F8C;
	sub_827D27C0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d0fa4
	if (ctx.cr6.eq) goto loc_827D0FA4;
	// bl 0x8221be68
	ctx.lr = 0x827D0FA0;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D0FA4:
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

__attribute__((alias("__imp__sub_827D0FBC"))) PPC_WEAK_FUNC(sub_827D0FBC);
PPC_FUNC_IMPL(__imp__sub_827D0FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D0FC0"))) PPC_WEAK_FUNC(sub_827D0FC0);
PPC_FUNC_IMPL(__imp__sub_827D0FC0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d1054
	if (ctx.cr6.eq) goto loc_827D1054;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821de708
	ctx.lr = 0x827D0FF4;
	sub_821DE708(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278188
	ctx.lr = 0x827D1000;
	sub_82278188(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821d5d10
	ctx.lr = 0x827D100C;
	sub_821D5D10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d13f8
	ctx.lr = 0x827D1018;
	sub_827D13F8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d13f8
	ctx.lr = 0x827D1024;
	sub_827D13F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r7,r10,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r9,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// stw r8,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r8.u32);
	// stw r6,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// stw r5,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r5.u32);
loc_827D1054:
	// lfs f0,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,344(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,352(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_827D1090"))) PPC_WEAK_FUNC(sub_827D1090);
PPC_FUNC_IMPL(__imp__sub_827D1090) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d115c
	if (ctx.cr6.eq) goto loc_827D115C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x827d1110
	if (!ctx.cr6.eq) goto loc_827D1110;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827D10F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827d10f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D10F8;
	// b 0x827d1150
	goto loc_827D1150;
loc_827D1110:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d0fc0
	ctx.lr = 0x827D111C;
	sub_827D0FC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821decc8
	ctx.lr = 0x827D112C;
	sub_821DECC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827D113C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827d113c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D113C;
loc_827D1150:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_827D115C:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_827D11A8"))) PPC_WEAK_FUNC(sub_827D11A8);
PPC_FUNC_IMPL(__imp__sub_827D11A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d2830
	ctx.lr = 0x827D11C0;
	sub_827D2830(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r11,-27468
	ctx.r10.s64 = ctx.r11.s64 + -27468;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
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

__attribute__((alias("__imp__sub_827D1204"))) PPC_WEAK_FUNC(sub_827D1204);
PPC_FUNC_IMPL(__imp__sub_827D1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1208"))) PPC_WEAK_FUNC(sub_827D1208);
PPC_FUNC_IMPL(__imp__sub_827D1208) {
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827d2ab8
	ctx.lr = 0x827D1230;
	sub_827D2AB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eea00
	ctx.lr = 0x827D123C;
	sub_821EEA00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bfd780
	ctx.lr = 0x827D1244;
	sub_82BFD780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D1250;
	sub_82214F08(ctx, base);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D125C;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827D1274"))) PPC_WEAK_FUNC(sub_827D1274);
PPC_FUNC_IMPL(__imp__sub_827D1274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1278"))) PPC_WEAK_FUNC(sub_827D1278);
PPC_FUNC_IMPL(__imp__sub_827D1278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D1280;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827d12c4
	if (ctx.cr6.eq) goto loc_827D12C4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825f7b10
	ctx.lr = 0x827D12C0;
	sub_825F7B10(ctx, base);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
loc_827D12C4:
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827d12f8
	if (ctx.cr6.eq) goto loc_827D12F8;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825f7b10
	ctx.lr = 0x827D12F4;
	sub_825F7B10(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_827D12F8:
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827d132c
	if (ctx.cr6.eq) goto loc_827D132C;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x825f7b10
	ctx.lr = 0x827D1328;
	sub_825F7B10(ctx, base);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
loc_827D132C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1334"))) PPC_WEAK_FUNC(sub_827D1334);
PPC_FUNC_IMPL(__imp__sub_827D1334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1338"))) PPC_WEAK_FUNC(sub_827D1338);
PPC_FUNC_IMPL(__imp__sub_827D1338) {
	PPC_FUNC_PROLOGUE();
	// b 0x827d1278
	sub_827D1278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D133C"))) PPC_WEAK_FUNC(sub_827D133C);
PPC_FUNC_IMPL(__imp__sub_827D133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1340"))) PPC_WEAK_FUNC(sub_827D1340);
PPC_FUNC_IMPL(__imp__sub_827D1340) {
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
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x822b85c8
	ctx.lr = 0x827D1364;
	sub_822B85C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x822b85c8
	ctx.lr = 0x827D1370;
	sub_822B85C8(ctx, base);
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

__attribute__((alias("__imp__sub_827D1388"))) PPC_WEAK_FUNC(sub_827D1388);
PPC_FUNC_IMPL(__imp__sub_827D1388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r10,r10,-27468
	ctx.r10.s64 = ctx.r10.s64 + -27468;
	// lbz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x827d13ac
	if (!ctx.cr6.eq) goto loc_827D13AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d13c0
	goto loc_827D13C0;
loc_827D13AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r3,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r3.u8);
	// stb r9,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r9.u8);
loc_827D13C0:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f12,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,168(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f12,156(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f0,164(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D13F4"))) PPC_WEAK_FUNC(sub_827D13F4);
PPC_FUNC_IMPL(__imp__sub_827D13F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D13F8"))) PPC_WEAK_FUNC(sub_827D13F8);
PPC_FUNC_IMPL(__imp__sub_827D13F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// lfs f0,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f10,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// mfcr r11
	ctx.r11.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r11.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r11.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r11.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r11.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r11.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r11.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r11.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r11.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r11.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r11.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r11.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r11.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r11.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r11.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r11.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r11.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r11.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r11.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r11.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r11.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r11.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r11.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r11.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r11.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r11.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r11.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r11.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r11.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r11.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r11.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r11.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r8,r11,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lfsx f5,r9,r7
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsel f4,f5,f8,f7
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f8.f64 : ctx.f7.f64;
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// mfcr r6
	ctx.r6.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r6.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r6.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r6.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r6.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r6.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r6.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r6.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r6.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r6.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r6.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r6.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r6.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r6.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r6.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r6.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r6.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r6.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r6.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r6.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r6.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r6.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r6.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r6.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r6.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r6.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r6.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r6.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r6.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r6.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r6.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r6.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r5,r6,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// rlwinm r11,r6,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 | ctx.r11.u64;
	// lfsx f13,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f13,f2,f3
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f3.f64;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r8
	ctx.r8.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	ctx.r8.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	ctx.r8.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	ctx.r8.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	ctx.r8.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	ctx.r8.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	ctx.r8.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	ctx.r8.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	ctx.r8.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	ctx.r8.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	ctx.r8.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	ctx.r8.u64 |= ctx.cr2.so ? 0x100000 : 0;
	ctx.r8.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	ctx.r8.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	ctx.r8.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	ctx.r8.u64 |= ctx.cr3.so ? 0x10000 : 0;
	ctx.r8.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	ctx.r8.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	ctx.r8.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	ctx.r8.u64 |= ctx.cr4.so ? 0x1000 : 0;
	ctx.r8.u64 |= ctx.cr5.lt ? 0x800 : 0;
	ctx.r8.u64 |= ctx.cr5.gt ? 0x400 : 0;
	ctx.r8.u64 |= ctx.cr5.eq ? 0x200 : 0;
	ctx.r8.u64 |= ctx.cr5.so ? 0x100 : 0;
	ctx.r8.u64 |= ctx.cr6.lt ? 0x80 : 0;
	ctx.r8.u64 |= ctx.cr6.gt ? 0x40 : 0;
	ctx.r8.u64 |= ctx.cr6.eq ? 0x20 : 0;
	ctx.r8.u64 |= ctx.cr6.so ? 0x10 : 0;
	ctx.r8.u64 |= ctx.cr7.lt ? 0x8 : 0;
	ctx.r8.u64 |= ctx.cr7.gt ? 0x4 : 0;
	ctx.r8.u64 |= ctx.cr7.eq ? 0x2 : 0;
	ctx.r8.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r6,r8,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lfsx f8,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f8,f10,f11
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D14BC"))) PPC_WEAK_FUNC(sub_827D14BC);
PPC_FUNC_IMPL(__imp__sub_827D14BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D14C0"))) PPC_WEAK_FUNC(sub_827D14C0);
PPC_FUNC_IMPL(__imp__sub_827D14C0) {
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
	// bl 0x827d1510
	ctx.lr = 0x827D14E0;
	sub_827D1510(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d14f8
	if (ctx.cr6.eq) goto loc_827D14F8;
	// bl 0x8221be68
	ctx.lr = 0x827D14F4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D14F8:
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

__attribute__((alias("__imp__sub_827D1510"))) PPC_WEAK_FUNC(sub_827D1510);
PPC_FUNC_IMPL(__imp__sub_827D1510) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// addi r9,r11,27120
	ctx.r9.s64 = ctx.r11.s64 + 27120;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d155c
	if (ctx.cr6.eq) goto loc_827D155C;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82283d80
	ctx.lr = 0x827D155C;
	sub_82283D80(ctx, base);
loc_827D155C:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stb r9,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r9.u8);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,-16800(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -16800);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x823f8510
	ctx.lr = 0x827D1584;
	sub_823F8510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d27c0
	ctx.lr = 0x827D158C;
	sub_827D27C0(ctx, base);
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

__attribute__((alias("__imp__sub_827D15A4"))) PPC_WEAK_FUNC(sub_827D15A4);
PPC_FUNC_IMPL(__imp__sub_827D15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D15A8"))) PPC_WEAK_FUNC(sub_827D15A8);
PPC_FUNC_IMPL(__imp__sub_827D15A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,80(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f7,72(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lfs f8,76(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f6,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,-2164
	ctx.r11.s64 = ctx.r11.s64 + -2164;
	// fsubs f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f11,27524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27524);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-16700(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16700);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f12,f5,f0,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f2,f4,f0,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fadds f13,f2,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fnmsubs f9,f1,f0,f10
	ctx.f9.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fnmsubs f10,f7,f0,f8
	ctx.f10.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x827d161c
	if (ctx.cr6.lt) goto loc_827D161C;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
loc_827D161C:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,-28208
	ctx.r8.s64 = ctx.r10.s64 + -28208;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v6,r0,r8
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v0,v1,v0,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827d1660
	if (ctx.cr6.lt) goto loc_827D1660;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
loc_827D1660:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// addi r9,r11,-28192
	ctx.r9.s64 = ctx.r11.s64 + -28192;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v7,r0,r9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v0,v0,v13,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x827d16a0
	if (ctx.cr6.gt) goto loc_827D16A0;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_827D16A0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v0,v0,v13,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x827d16d4
	if (!ctx.cr6.gt) goto loc_827D16D4;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x827d16d8
	goto loc_827D16D8;
loc_827D16D4:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
loc_827D16D8:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,26788(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26788);
	// vperm v0,v0,v13,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,76(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// bl 0x821dee00
	ctx.lr = 0x827D1728;
	sub_821DEE00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D1738"))) PPC_WEAK_FUNC(sub_827D1738);
PPC_FUNC_IMPL(__imp__sub_827D1738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D1740;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// bne cr6,0x827d177c
	if (!ctx.cr6.eq) goto loc_827D177C;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_827D177C:
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lfs f0,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r3,26912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D17AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r7,r8,32
	ctx.xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r7.s64 = ctx.r8.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x827d1bec
	if (ctx.cr0.eq) goto loc_827D1BEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821de960
	ctx.lr = 0x827D17C4;
	sub_821DE960(ctx, base);
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r4,76(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// lvx128 v127,r0,r10
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x821de4d8
	ctx.lr = 0x827D17E8;
	sub_821DE4D8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,-19232
	ctx.r27.s64 = ctx.r11.s64 + -19232;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,-8236(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8236);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x827d1860
	if (ctx.cr6.lt) goto loc_827D1860;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x827d184c
	if (ctx.cr6.lt) goto loc_827D184C;
	// lfs f12,148(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x827d184c
	if (!ctx.cr6.lt) goto loc_827D184C;
	// lfs f0,144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827d184c
	if (ctx.cr6.lt) goto loc_827D184C;
	// lfs f0,152(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x827d1850
	if (ctx.cr6.lt) goto loc_827D1850;
loc_827D184C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D1850:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x827d1864
	if (!ctx.cr6.eq) goto loc_827D1864;
loc_827D1860:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D1864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d19e0
	if (!ctx.cr6.eq) goto loc_827D19E0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x827d1884
	if (ctx.cr6.eq) goto loc_827D1884;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x827d19e0
	if (!ctx.cr6.eq) goto loc_827D19E0;
loc_827D1884:
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821de4d8
	ctx.lr = 0x827D1890;
	sub_821DE4D8(ctx, base);
	// lwz r3,26912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D18A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,26788(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// lvx128 v1,r0,r9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827d19bc
	if (!ctx.cr6.lt) goto loc_827D19BC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// ld r5,40(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 40);
	// bl 0x822b40f8
	ctx.lr = 0x827D18DC;
	sub_822B40F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,-8224(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -8224);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,-28160
	ctx.r9.s64 = ctx.r11.s64 + -28160;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lfs f13,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslw v11,v13,v13
	ctx.v11.u32[0] = ctx.v13.u32[0] << (ctx.v13.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v13.u32[1] << (ctx.v13.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v13.u32[2] << (ctx.v13.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v13.u32[3] << (ctx.v13.u8[12] & 0x1F);
	// vperm128 v10,v127,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r4,r6,-28400
	ctx.r4.s64 = ctx.r6.s64 + -28400;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lvx128 v9,r29,r7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// vmsum3fp128 v7,v0,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// lvx128 v13,r0,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r3,-32240
	ctx.r3.s64 = -2112880640;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r3,368
	ctx.r9.s64 = ctx.r3.s64 + 368;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,76(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 76);
	// vxor v6,v7,v11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsel v5,v6,v0,v13
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmsum4fp128 v4,v5,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// stvx128 v4,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
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
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r5,r7,30,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lfsx f7,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsel f6,f7,f12,f9
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v3,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v1,v3,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vmaddcfp128 v1,v0,v1,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v127.f32)));
	// bl 0x821de4d8
	ctx.lr = 0x827D19A0;
	sub_821DE4D8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lvx128 v2,r0,r3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r8,r10,-28192
	ctx.r8.s64 = ctx.r10.s64 + -28192;
	// lvlx v1,r29,r9
	temp.u32 = ctx.r29.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v1,v2,v1,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
loc_827D19BC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,76(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// bl 0x827d15a8
	ctx.lr = 0x827D19D8;
	sub_827D15A8(ctx, base);
	// lvx128 v127,r0,r3
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x827d1af4
	goto loc_827D1AF4;
loc_827D19E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D19F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x827d1a68
	if (ctx.cr6.eq) goto loc_827D1A68;
	// addi r11,r31,144
	ctx.r11.s64 = ctx.r31.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// lbz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r9,-28176
	ctx.r7.s64 = ctx.r9.s64 + -28176;
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm v11,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_827D1A68:
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// lvx128 v0,r31,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp128 v127,v127,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// beq cr6,0x827d1a88
	if (ctx.cr6.eq) goto loc_827D1A88;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x827d1af0
	if (!ctx.cr6.eq) goto loc_827D1AF0;
loc_827D1A88:
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,76(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// bl 0x821de4d8
	ctx.lr = 0x827D1AA4;
	sub_821DE4D8(ctx, base);
	// lwz r3,26912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D1AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,26788(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lvx128 v1,r0,r6
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r6,76(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// bl 0x827d15a8
	ctx.lr = 0x827D1AE8;
	sub_827D15A8(ctx, base);
	// lvx128 v127,r0,r3
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x827d1af4
	goto loc_827D1AF4;
loc_827D1AF0:
	// lwz r30,26788(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
loc_827D1AF4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d1b30
	if (ctx.cr6.eq) goto loc_827D1B30;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x827d1b28
	if (ctx.cr6.eq) goto loc_827D1B28;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x823f9040
	ctx.lr = 0x827D1B20;
	sub_823F9040(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
loc_827D1B28:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827d1b34
	goto loc_827D1B34;
loc_827D1B30:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D1B34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D1B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v2,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v2,v13,4,3
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lwz r30,26788(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v2,v12,3,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r5,72(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r4,76(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// bl 0x82a3a490
	ctx.lr = 0x827D1BA4;
	sub_82A3A490(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f3,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f7678
	ctx.lr = 0x827D1BE4;
	sub_823F7678(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r8.u8);
loc_827D1BEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1C04"))) PPC_WEAK_FUNC(sub_827D1C04);
PPC_FUNC_IMPL(__imp__sub_827D1C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1C08"))) PPC_WEAK_FUNC(sub_827D1C08);
PPC_FUNC_IMPL(__imp__sub_827D1C08) {
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
	// lbz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d1c2c
	if (!ctx.cr6.eq) goto loc_827D1C2C;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x827d1c48
	goto loc_827D1C48;
loc_827D1C2C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r31,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r31.u8);
	// stb r10,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r10.u8);
	// lfs f0,-27456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_827D1C48:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d1c74
	if (!ctx.cr6.eq) goto loc_827D1C74;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823f9040
	ctx.lr = 0x827D1C74;
	sub_823F9040(ctx, base);
loc_827D1C74:
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

__attribute__((alias("__imp__sub_827D1C8C"))) PPC_WEAK_FUNC(sub_827D1C8C);
PPC_FUNC_IMPL(__imp__sub_827D1C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1C90"))) PPC_WEAK_FUNC(sub_827D1C90);
PPC_FUNC_IMPL(__imp__sub_827D1C90) {
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
	// bl 0x827d2830
	ctx.lr = 0x827D1CA8;
	sub_827D2830(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d1ce8
	if (ctx.cr6.eq) goto loc_827D1CE8;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x821ab5b8
	ctx.lr = 0x827D1CD0;
	sub_821AB5B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827d1ce4
	if (!ctx.cr6.eq) goto loc_827D1CE4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D1CE4:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_827D1CE8:
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

__attribute__((alias("__imp__sub_827D1CFC"))) PPC_WEAK_FUNC(sub_827D1CFC);
PPC_FUNC_IMPL(__imp__sub_827D1CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1D00"))) PPC_WEAK_FUNC(sub_827D1D00);
PPC_FUNC_IMPL(__imp__sub_827D1D00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82283d80
	sub_82283D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1D28"))) PPC_WEAK_FUNC(sub_827D1D28);
PPC_FUNC_IMPL(__imp__sub_827D1D28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D1D2C"))) PPC_WEAK_FUNC(sub_827D1D2C);
PPC_FUNC_IMPL(__imp__sub_827D1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1D30"))) PPC_WEAK_FUNC(sub_827D1D30);
PPC_FUNC_IMPL(__imp__sub_827D1D30) {
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
	// cmpwi cr6,r30,35
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 35, ctx.xer);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// beq cr6,0x827d1db8
	if (ctx.cr6.eq) goto loc_827D1DB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d2ab8
	ctx.lr = 0x827D1D64;
	sub_827D2AB8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d1db0
	if (ctx.cr6.eq) goto loc_827D1DB0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// cmpwi cr6,r30,54
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 54, ctx.xer);
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x827d1d98
	if (!ctx.cr6.eq) goto loc_827D1D98;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x823f86f8
	ctx.lr = 0x827D1D94;
	sub_823F86F8(ctx, base);
	// b 0x827d1db0
	goto loc_827D1DB0;
loc_827D1D98:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823f86f8
	ctx.lr = 0x827D1DA0;
	sub_823F86F8(ctx, base);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x823f8050
	ctx.lr = 0x827D1DB0;
	sub_823F8050(ctx, base);
loc_827D1DB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D1DB8;
	sub_82214F08(ctx, base);
loc_827D1DB8:
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

__attribute__((alias("__imp__sub_827D1DD0"))) PPC_WEAK_FUNC(sub_827D1DD0);
PPC_FUNC_IMPL(__imp__sub_827D1DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D1DD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823f8268
	ctx.lr = 0x827D1E04;
	sub_823F8268(ctx, base);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x823f8268
	ctx.lr = 0x827D1E20;
	sub_823F8268(ctx, base);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,-16800(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16800);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823f8510
	ctx.lr = 0x827D1E40;
	sub_823F8510(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1E48"))) PPC_WEAK_FUNC(sub_827D1E48);
PPC_FUNC_IMPL(__imp__sub_827D1E48) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827d3a08
	ctx.lr = 0x827D1E60;
	sub_827D3A08(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d1e98
	if (ctx.cr6.eq) goto loc_827D1E98;
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,26788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lfs f0,-16800(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16800);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x823f8510
	ctx.lr = 0x827D1E98;
	sub_823F8510(ctx, base);
loc_827D1E98:
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

__attribute__((alias("__imp__sub_827D1EAC"))) PPC_WEAK_FUNC(sub_827D1EAC);
PPC_FUNC_IMPL(__imp__sub_827D1EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D1EB0"))) PPC_WEAK_FUNC(sub_827D1EB0);
PPC_FUNC_IMPL(__imp__sub_827D1EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D1EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d1f2c
	if (ctx.cr6.eq) goto loc_827D1F2C;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x827ce1e0
	ctx.lr = 0x827D1EE0;
	sub_827CE1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d1f2c
	if (ctx.cr6.eq) goto loc_827D1F2C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-16596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16596);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f99e8
	ctx.lr = 0x827D1F04;
	sub_823F99E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8d30
	ctx.lr = 0x827D1F14;
	sub_823F8D30(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x827d1f38
	if (ctx.cr6.eq) goto loc_827D1F38;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f9a78
	ctx.lr = 0x827D1F2C;
	sub_823F9A78(ctx, base);
loc_827D1F2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D1F38:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-18864
	ctx.r29.s64 = ctx.r11.s64 + -18864;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_827D1F48:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x827d2140
	ctx.lr = 0x827D1F58;
	sub_827D2140(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r10,r29,1024
	ctx.r10.s64 = ctx.r29.s64 + 1024;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827d1f48
	if (ctx.cr6.lt) goto loc_827D1F48;
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x827ce1e0
	ctx.lr = 0x827D1F80;
	sub_827CE1E0(ctx, base);
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-17840
	ctx.r3.s64 = ctx.r10.s64 + -17840;
	// bl 0x827d2320
	ctx.lr = 0x827D1F90;
	sub_827D2320(ctx, base);
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// bl 0x827ce1e0
	ctx.lr = 0x827D1FA4;
	sub_827CE1E0(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r8,-17776
	ctx.r3.s64 = ctx.r8.s64 + -17776;
	// bl 0x827d2140
	ctx.lr = 0x827D1FB4;
	sub_827D2140(ctx, base);
	// lwz r11,26788(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26788);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,32(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// bl 0x827ce1e0
	ctx.lr = 0x827D1FC8;
	sub_827CE1E0(ctx, base);
	// lis r6,-31926
	ctx.r6.s64 = -2092302336;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r6,-17712
	ctx.r3.s64 = ctx.r6.s64 + -17712;
	// bl 0x827d2140
	ctx.lr = 0x827D1FD8;
	sub_827D2140(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f9a78
	ctx.lr = 0x827D1FE4;
	sub_823F9A78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D1FF0"))) PPC_WEAK_FUNC(sub_827D1FF0);
PPC_FUNC_IMPL(__imp__sub_827D1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D1FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bne cr6,0x827d20b4
	if (!ctx.cr6.eq) goto loc_827D20B4;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-17840
	ctx.r30.s64 = ctx.r11.s64 + -17840;
loc_827D2014:
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d2104
	if (!ctx.cr6.eq) goto loc_827D2104;
loc_827D2020:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8221f388
	ctx.lr = 0x827D2028;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d2118
	if (ctx.cr6.eq) goto loc_827D2118;
	// bl 0x827d2688
	ctx.lr = 0x827D2038;
	sub_827D2688(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// li r10,144
	ctx.r10.s64 = 144;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r8,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// addi r7,r9,27120
	ctx.r7.s64 = ctx.r9.s64 + 27120;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,128(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// stb r11,48(r5)
	PPC_STORE_U8(ctx.r5.u32 + 48, ctx.r11.u8);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lfs f1,-16800(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -16800);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823f8510
	ctx.lr = 0x827D208C;
	sub_823F8510(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d211c
	if (ctx.cr6.eq) goto loc_827D211C;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82283d80
	ctx.lr = 0x827D20B0;
	sub_82283D80(ctx, base);
	// b 0x827d211c
	goto loc_827D211C;
loc_827D20B4:
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// bne cr6,0x827d20c8
	if (!ctx.cr6.eq) goto loc_827D20C8;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-17776
	ctx.r30.s64 = ctx.r11.s64 + -17776;
	// b 0x827d2014
	goto loc_827D2014;
loc_827D20C8:
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// bne cr6,0x827d20dc
	if (!ctx.cr6.eq) goto loc_827D20DC;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r30,r11,-17712
	ctx.r30.s64 = ctx.r11.s64 + -17712;
	// b 0x827d2014
	goto loc_827D2014;
loc_827D20DC:
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// addi r10,r11,-18864
	ctx.r10.s64 = ctx.r11.s64 + -18864;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827D20E8:
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d2110
	if (ctx.cr6.eq) goto loc_827D2110;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r9,r10,1024
	ctx.r9.s64 = ctx.r10.s64 + 1024;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827d20e8
	if (ctx.cr6.lt) goto loc_827D20E8;
loc_827D2104:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_827D2110:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x827d2020
	goto loc_827D2020;
loc_827D2118:
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D211C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2140"))) PPC_WEAK_FUNC(sub_827D2140);
PPC_FUNC_IMPL(__imp__sub_827D2140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827D2148;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,27028
	ctx.r4.s64 = ctx.r11.s64 + 27028;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D216C;
	sub_8222CF18(ctx, base);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D218C;
	sub_821F0108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D2198;
	sub_823F8A38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D21A4;
	sub_82214F08(ctx, base);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r9,27040
	ctx.r4.s64 = ctx.r9.s64 + 27040;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D21BC;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D21D8;
	sub_821F0108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D21E4;
	sub_823F8A38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D21F0;
	sub_82214F08(ctx, base);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r7,27060
	ctx.r4.s64 = ctx.r7.s64 + 27060;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D2208;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D2224;
	sub_821F0108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D2230;
	sub_823F8A38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D223C;
	sub_82214F08(ctx, base);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lis r4,-32243
	ctx.r4.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,27076
	ctx.r4.s64 = ctx.r4.s64 + 27076;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D2254;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D2270;
	sub_821F0108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D227C;
	sub_823F8A38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D2288;
	sub_82214F08(ctx, base);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,27092
	ctx.r4.s64 = ctx.r10.s64 + 27092;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D22A0;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D22BC;
	sub_821F0108(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D22C8;
	sub_823F8A38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D22D4;
	sub_82214F08(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x823f7b78
	ctx.lr = 0x827D22EC;
	sub_823F7B78(ctx, base);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stvx128 v1,r30,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d2314
	if (ctx.cr6.eq) goto loc_827D2314;
	// lwz r11,26788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26788);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82283d80
	ctx.lr = 0x827D2314;
	sub_82283D80(ctx, base);
loc_827D2314:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D231C"))) PPC_WEAK_FUNC(sub_827D231C);
PPC_FUNC_IMPL(__imp__sub_827D231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D2320"))) PPC_WEAK_FUNC(sub_827D2320);
PPC_FUNC_IMPL(__imp__sub_827D2320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827D2328;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,27028
	ctx.r4.s64 = ctx.r10.s64 + 27028;
	// stw r31,-17840(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17840, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-17840
	ctx.r28.s64 = ctx.r11.s64 + -17840;
	// bl 0x8222cf18
	ctx.lr = 0x827D2350;
	sub_8222CF18(ctx, base);
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D2370;
	sub_821F0108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D237C;
	sub_823F8A38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D2388;
	sub_82214F08(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,27060
	ctx.r4.s64 = ctx.r8.s64 + 27060;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D23A0;
	sub_8222CF18(ctx, base);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r27,4(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x821f0108
	ctx.lr = 0x827D23BC;
	sub_821F0108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823f8a38
	ctx.lr = 0x827D23C8;
	sub_823F8A38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82214f08
	ctx.lr = 0x827D23D4;
	sub_82214F08(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d23f8
	if (ctx.cr6.eq) goto loc_827D23F8;
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82283d80
	ctx.lr = 0x827D23F8;
	sub_82283D80(ctx, base);
loc_827D23F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2400"))) PPC_WEAK_FUNC(sub_827D2400);
PPC_FUNC_IMPL(__imp__sub_827D2400) {
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
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lis r10,-31927
	ctx.r10.s64 = -2092367872;
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// lwz r31,26788(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26788);
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,16(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x823f82f0
	ctx.lr = 0x827D2458;
	sub_823F82F0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823f82f0
	ctx.lr = 0x827D2470;
	sub_823F82F0(ctx, base);
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

__attribute__((alias("__imp__sub_827D2488"))) PPC_WEAK_FUNC(sub_827D2488);
PPC_FUNC_IMPL(__imp__sub_827D2488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827D2490;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d264c
	if (ctx.cr6.eq) goto loc_827D264C;
	// lis r29,-31927
	ctx.r29.s64 = -2092367872;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823f96e8
	ctx.lr = 0x827D24CC;
	sub_823F96E8(ctx, base);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// lwz r28,76(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// lwz r27,72(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// bl 0x821de960
	ctx.lr = 0x827D2504;
	sub_821DE960(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lvlx v1,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v1,v0,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvx128 v2,r0,r9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v1,v12,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// bl 0x82a3a490
	ctx.lr = 0x827D2548;
	sub_82A3A490(ctx, base);
	// lwz r11,26788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26788);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r29,76(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 76);
	// lwz r28,72(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// bl 0x821de960
	ctx.lr = 0x827D2568;
	sub_821DE960(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lvlx v1,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v1,v11,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vrlimi128 v9,v10,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// lvx128 v2,r0,r9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v1,v9,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// bl 0x82a3a490
	ctx.lr = 0x827D25AC;
	sub_82A3A490(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r31,76
	ctx.r10.s64 = ctx.r31.s64 + 76;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v0,r0,r4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_827D262C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827d262c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827D262C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
loc_827D264C:
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2688"))) PPC_WEAK_FUNC(sub_827D2688);
PPC_FUNC_IMPL(__imp__sub_827D2688) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,29688
	ctx.r9.s64 = ctx.r11.s64 + 29688;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,27168
	ctx.r4.s64 = ctx.r10.s64 + 27168;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827D26C0;
	sub_8222CF18(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D26E0;
	sub_821940C8(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r6,-27456
	ctx.r4.s64 = ctx.r6.s64 + -27456;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f13,-27456(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27456);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,112
	ctx.r9.s64 = 112;
	// lfs f0,-12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r3,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r3.u8);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,56(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r30.u8);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stb r11,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r11.u8);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_827D276C"))) PPC_WEAK_FUNC(sub_827D276C);
PPC_FUNC_IMPL(__imp__sub_827D276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D2770"))) PPC_WEAK_FUNC(sub_827D2770);
PPC_FUNC_IMPL(__imp__sub_827D2770) {
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
	// bl 0x827d27c0
	ctx.lr = 0x827D2790;
	sub_827D27C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d27a8
	if (ctx.cr6.eq) goto loc_827D27A8;
	// bl 0x8221be68
	ctx.lr = 0x827D27A4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D27A8:
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

__attribute__((alias("__imp__sub_827D27C0"))) PPC_WEAK_FUNC(sub_827D27C0);
PPC_FUNC_IMPL(__imp__sub_827D27C0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// addi r10,r11,29688
	ctx.r10.s64 = ctx.r11.s64 + 29688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D27F0;
	sub_821940C8(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D2804;
	sub_821940C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// bl 0x82214f08
	ctx.lr = 0x827D2814;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827D282C"))) PPC_WEAK_FUNC(sub_827D282C);
PPC_FUNC_IMPL(__imp__sub_827D282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D2830"))) PPC_WEAK_FUNC(sub_827D2830);
PPC_FUNC_IMPL(__imp__sub_827D2830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827D2838;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82265160
	ctx.lr = 0x827D284C;
	sub_82265160(ctx, base);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lvx128 v0,r28,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d28ac
	if (ctx.cr6.eq) goto loc_827D28AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d28e4
	if (ctx.cr6.eq) goto loc_827D28E4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d28ac
	if (ctx.cr6.eq) goto loc_827D28AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D2898;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d28b0
	if (!ctx.cr6.eq) goto loc_827D28B0;
loc_827D28AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D28B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2908
	if (ctx.cr6.eq) goto loc_827D2908;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d28f8
	if (ctx.cr6.eq) goto loc_827D28F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d28f0
	if (ctx.cr6.eq) goto loc_827D28F0;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822149c8
	ctx.lr = 0x827D28E0;
	sub_822149C8(ctx, base);
	// b 0x827d2910
	goto loc_827D2910;
loc_827D28E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D28EC;
	sub_821940C8(ctx, base);
	// b 0x827d28ac
	goto loc_827D28AC;
loc_827D28F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D28F8;
	sub_821940C8(ctx, base);
loc_827D28F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822149c8
	ctx.lr = 0x827D2904;
	sub_822149C8(ctx, base);
	// b 0x827d2910
	goto loc_827D2910;
loc_827D2908:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x821940c8
	ctx.lr = 0x827D2910;
	sub_821940C8(ctx, base);
loc_827D2910:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// bl 0x821ab5b8
	ctx.lr = 0x827D2940;
	sub_821AB5B8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d2960
	if (ctx.cr6.eq) goto loc_827D2960;
	// addi r10,r11,-27468
	ctx.r10.s64 = ctx.r11.s64 + -27468;
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// lfs f0,9716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9716);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827d296c
	goto loc_827D296C;
loc_827D2960:
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
loc_827D296C:
	// stfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r29,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r29.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x827d30c0
	ctx.lr = 0x827D2990;
	sub_827D30C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D29A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r27,r8,2804
	ctx.r27.s64 = ctx.r8.s64 + 2804;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822d6b40
	ctx.lr = 0x827D29BC;
	sub_822D6B40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6b40
	ctx.lr = 0x827D29C8;
	sub_822D6B40(ctx, base);
	// lwz r11,26788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26788);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,28(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821ab5b8
	ctx.lr = 0x827D29E0;
	sub_821AB5B8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x827d2a54
	if (ctx.cr6.eq) goto loc_827D2A54;
	// cmpwi cr6,r4,38
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 38, ctx.xer);
	// blt cr6,0x827d2a00
	if (ctx.cr6.lt) goto loc_827D2A00;
	// cmpwi cr6,r4,39
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 39, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x827d2a04
	if (!ctx.cr6.gt) goto loc_827D2A04;
loc_827D2A00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D2A04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d2a30
	if (!ctx.cr6.eq) goto loc_827D2A30;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x823b7cc8
	ctx.lr = 0x827D2A18;
	sub_823B7CC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2a30
	if (ctx.cr6.eq) goto loc_827D2A30;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x827d33c8
	ctx.lr = 0x827D2A30;
	sub_827D33C8(ctx, base);
loc_827D2A30:
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b85c8
	ctx.lr = 0x827D2A3C;
	sub_822B85C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827d2a84
	goto loc_827D2A84;
loc_827D2A54:
	// cmpwi cr6,r4,54
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 54, ctx.xer);
	// bne cr6,0x827d2a64
	if (!ctx.cr6.eq) goto loc_827D2A64;
loc_827D2A5C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x827d2a7c
	goto loc_827D2A7C;
loc_827D2A64:
	// cmpwi cr6,r4,36
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 36, ctx.xer);
	// beq cr6,0x827d2a5c
	if (ctx.cr6.eq) goto loc_827D2A5C;
	// cmpwi cr6,r4,37
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 37, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x827d2a7c
	if (ctx.cr6.eq) goto loc_827D2A7C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_827D2A7C:
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// bl 0x822b85c8
	ctx.lr = 0x827D2A84;
	sub_822B85C8(ctx, base);
loc_827D2A84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D2AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c6868
	ctx.lr = 0x827D2AA8;
	sub_821C6868(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821c6868
	ctx.lr = 0x827D2AB0;
	sub_821C6868(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2AB8"))) PPC_WEAK_FUNC(sub_827D2AB8);
PPC_FUNC_IMPL(__imp__sub_827D2AB8) {
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
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r11,28344
	ctx.r7.s64 = ctx.r11.s64 + 28344;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_827D2ADC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d2adc
	if (!ctx.cr0.eq) goto loc_827D2ADC;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,59
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 59, ctx.xer);
	// bgt cr6,0x827d2e74
	if (ctx.cr6.gt) goto loc_827D2E74;
	// lis r12,-32131
	ctx.r12.s64 = -2105737216;
	// addi r12,r12,11040
	ctx.r12.s64 = ctx.r12.s64 + 11040;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827D2C28;
	case 1:
		goto loc_827D2C34;
	case 2:
		goto loc_827D2C40;
	case 3:
		goto loc_827D2C4C;
	case 4:
		goto loc_827D2C58;
	case 5:
		goto loc_827D2C70;
	case 6:
		goto loc_827D2C7C;
	case 7:
		goto loc_827D2C88;
	case 8:
		goto loc_827D2C94;
	case 9:
		goto loc_827D2CA0;
	case 10:
		goto loc_827D2CAC;
	case 11:
		goto loc_827D2CB8;
	case 12:
		goto loc_827D2CC4;
	case 13:
		goto loc_827D2CD0;
	case 14:
		goto loc_827D2CDC;
	case 15:
		goto loc_827D2CE8;
	case 16:
		goto loc_827D2CF4;
	case 17:
		goto loc_827D2D00;
	case 18:
		goto loc_827D2D0C;
	case 19:
		goto loc_827D2D18;
	case 20:
		goto loc_827D2C64;
	case 21:
		goto loc_827D2D24;
	case 22:
		goto loc_827D2D30;
	case 23:
		goto loc_827D2D3C;
	case 24:
		goto loc_827D2D48;
	case 25:
		goto loc_827D2D54;
	case 26:
		goto loc_827D2D60;
	case 27:
		goto loc_827D2D60;
	case 28:
		goto loc_827D2D6C;
	case 29:
		goto loc_827D2D78;
	case 30:
		goto loc_827D2D9C;
	case 31:
		goto loc_827D2DA8;
	case 32:
		goto loc_827D2DA8;
	case 33:
		goto loc_827D2DA8;
	case 34:
		goto loc_827D2E74;
	case 35:
		goto loc_827D2DB4;
	case 36:
		goto loc_827D2DB4;
	case 37:
		goto loc_827D2C4C;
	case 38:
		goto loc_827D2C94;
	case 39:
		goto loc_827D2DC0;
	case 40:
		goto loc_827D2DCC;
	case 41:
		goto loc_827D2DD8;
	case 42:
		goto loc_827D2DE4;
	case 43:
		goto loc_827D2DF0;
	case 44:
		goto loc_827D2DFC;
	case 45:
		goto loc_827D2E20;
	case 46:
		goto loc_827D2E2C;
	case 47:
		goto loc_827D2E08;
	case 48:
		goto loc_827D2E14;
	case 49:
		goto loc_827D2C10;
	case 50:
		goto loc_827D2C1C;
	case 51:
		goto loc_827D2D84;
	case 52:
		goto loc_827D2D90;
	case 53:
		goto loc_827D2E84;
	case 54:
		goto loc_827D2E38;
	case 55:
		goto loc_827D2E44;
	case 56:
		goto loc_827D2E50;
	case 57:
		goto loc_827D2E5C;
	case 58:
		goto loc_827D2E68;
	case 59:
		goto loc_827D2E84;
	default:
		__builtin_unreachable();
	}
	// lwz r19,11304(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11304);
	// lwz r19,11316(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11316);
	// lwz r19,11328(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11328);
	// lwz r19,11340(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// lwz r19,11352(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11352);
	// lwz r19,11376(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11376);
	// lwz r19,11388(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11388);
	// lwz r19,11400(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11400);
	// lwz r19,11412(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11412);
	// lwz r19,11424(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11424);
	// lwz r19,11436(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11436);
	// lwz r19,11448(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11448);
	// lwz r19,11460(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11460);
	// lwz r19,11472(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11472);
	// lwz r19,11484(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11484);
	// lwz r19,11496(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11496);
	// lwz r19,11508(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11508);
	// lwz r19,11520(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11520);
	// lwz r19,11532(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11532);
	// lwz r19,11544(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11544);
	// lwz r19,11364(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11364);
	// lwz r19,11556(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11556);
	// lwz r19,11568(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11568);
	// lwz r19,11580(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11580);
	// lwz r19,11592(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11592);
	// lwz r19,11604(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11604);
	// lwz r19,11616(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11616);
	// lwz r19,11616(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11616);
	// lwz r19,11628(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11628);
	// lwz r19,11640(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11640);
	// lwz r19,11676(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11676);
	// lwz r19,11688(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11688);
	// lwz r19,11688(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11688);
	// lwz r19,11688(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11688);
	// lwz r19,11892(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11892);
	// lwz r19,11700(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// lwz r19,11700(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11700);
	// lwz r19,11340(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11340);
	// lwz r19,11412(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11412);
	// lwz r19,11712(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11712);
	// lwz r19,11724(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11724);
	// lwz r19,11736(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11736);
	// lwz r19,11748(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11748);
	// lwz r19,11760(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11760);
	// lwz r19,11772(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11772);
	// lwz r19,11808(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11808);
	// lwz r19,11820(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11820);
	// lwz r19,11784(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11784);
	// lwz r19,11796(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11796);
	// lwz r19,11280(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11280);
	// lwz r19,11292(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11292);
	// lwz r19,11652(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11652);
	// lwz r19,11664(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11664);
	// lwz r19,11908(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
	// lwz r19,11832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11832);
	// lwz r19,11844(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11844);
	// lwz r19,11856(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11856);
	// lwz r19,11868(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11868);
	// lwz r19,11880(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11880);
	// lwz r19,11908(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11908);
loc_827D2C10:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27184
	ctx.r4.s64 = ctx.r11.s64 + 27184;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C1C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27208
	ctx.r4.s64 = ctx.r11.s64 + 27208;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C28:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27240
	ctx.r4.s64 = ctx.r11.s64 + 27240;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C34:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27292
	ctx.r4.s64 = ctx.r11.s64 + 27292;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C40:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27344
	ctx.r4.s64 = ctx.r11.s64 + 27344;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C4C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27384
	ctx.r4.s64 = ctx.r11.s64 + 27384;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C58:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27428
	ctx.r4.s64 = ctx.r11.s64 + 27428;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C64:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27472
	ctx.r4.s64 = ctx.r11.s64 + 27472;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C70:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27516
	ctx.r4.s64 = ctx.r11.s64 + 27516;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C7C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27556
	ctx.r4.s64 = ctx.r11.s64 + 27556;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C88:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27596
	ctx.r4.s64 = ctx.r11.s64 + 27596;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2C94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27636
	ctx.r4.s64 = ctx.r11.s64 + 27636;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CA0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27676
	ctx.r4.s64 = ctx.r11.s64 + 27676;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CAC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27724
	ctx.r4.s64 = ctx.r11.s64 + 27724;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CB8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27780
	ctx.r4.s64 = ctx.r11.s64 + 27780;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CC4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27836
	ctx.r4.s64 = ctx.r11.s64 + 27836;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CD0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27880
	ctx.r4.s64 = ctx.r11.s64 + 27880;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CDC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27928
	ctx.r4.s64 = ctx.r11.s64 + 27928;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CE8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,27976
	ctx.r4.s64 = ctx.r11.s64 + 27976;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2CF4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28020
	ctx.r4.s64 = ctx.r11.s64 + 28020;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D00:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28064
	ctx.r4.s64 = ctx.r11.s64 + 28064;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D0C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28108
	ctx.r4.s64 = ctx.r11.s64 + 28108;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D18:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28152
	ctx.r4.s64 = ctx.r11.s64 + 28152;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D24:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28204
	ctx.r4.s64 = ctx.r11.s64 + 28204;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28244
	ctx.r4.s64 = ctx.r11.s64 + 28244;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28280
	ctx.r4.s64 = ctx.r11.s64 + 28280;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D48:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28320
	ctx.r4.s64 = ctx.r11.s64 + 28320;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D54:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28360
	ctx.r4.s64 = ctx.r11.s64 + 28360;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D60:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28396
	ctx.r4.s64 = ctx.r11.s64 + 28396;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28428
	ctx.r4.s64 = ctx.r11.s64 + 28428;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28468
	ctx.r4.s64 = ctx.r11.s64 + 28468;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28504
	ctx.r4.s64 = ctx.r11.s64 + 28504;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28544
	ctx.r4.s64 = ctx.r11.s64 + 28544;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2D9C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28584
	ctx.r4.s64 = ctx.r11.s64 + 28584;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28612
	ctx.r4.s64 = ctx.r11.s64 + 28612;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DB4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28640
	ctx.r4.s64 = ctx.r11.s64 + 28640;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DC0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28668
	ctx.r4.s64 = ctx.r11.s64 + 28668;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DCC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28704
	ctx.r4.s64 = ctx.r11.s64 + 28704;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DD8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28744
	ctx.r4.s64 = ctx.r11.s64 + 28744;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DE4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28784
	ctx.r4.s64 = ctx.r11.s64 + 28784;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DF0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2DFC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28864
	ctx.r4.s64 = ctx.r11.s64 + 28864;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E08:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28904
	ctx.r4.s64 = ctx.r11.s64 + 28904;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E14:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28944
	ctx.r4.s64 = ctx.r11.s64 + 28944;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E20:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28984
	ctx.r4.s64 = ctx.r11.s64 + 28984;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E2C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29028
	ctx.r4.s64 = ctx.r11.s64 + 29028;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E38:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29068
	ctx.r4.s64 = ctx.r11.s64 + 29068;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E44:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29104
	ctx.r4.s64 = ctx.r11.s64 + 29104;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E50:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29140
	ctx.r4.s64 = ctx.r11.s64 + 29140;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29176
	ctx.r4.s64 = ctx.r11.s64 + 29176;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29208
	ctx.r4.s64 = ctx.r11.s64 + 29208;
	// b 0x827d2e7c
	goto loc_827D2E7C;
loc_827D2E74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,29236
	ctx.r4.s64 = ctx.r11.s64 + 29236;
loc_827D2E7C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275368
	ctx.lr = 0x827D2E84;
	sub_82275368(ctx, base);
loc_827D2E84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29248
	ctx.r4.s64 = ctx.r11.s64 + 29248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D2E98;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x821ec668
	ctx.lr = 0x827D2EA4;
	sub_821EC668(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0108
	ctx.lr = 0x827D2EB0;
	sub_821F0108(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,1080
	ctx.r4.s64 = ctx.r10.s64 + 1080;
	// bl 0x821da550
	ctx.lr = 0x827D2EC0;
	sub_821DA550(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D2EC8;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D2ED0;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827D2EE8"))) PPC_WEAK_FUNC(sub_827D2EE8);
PPC_FUNC_IMPL(__imp__sub_827D2EE8) {
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
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2f44
	if (ctx.cr6.eq) goto loc_827D2F44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d2f98
	if (ctx.cr6.eq) goto loc_827D2F98;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2f44
	if (ctx.cr6.eq) goto loc_827D2F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D2F30;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d2f48
	if (!ctx.cr6.eq) goto loc_827D2F48;
loc_827D2F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D2F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d30a4
	if (ctx.cr6.eq) goto loc_827D30A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825575c8
	ctx.lr = 0x827D2F60;
	sub_825575C8(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d3064
	if (ctx.cr6.eq) goto loc_827D3064;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d2fa4
	if (ctx.cr6.eq) goto loc_827D2FA4;
	// lbz r10,47(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827d3068
	goto loc_827D3068;
loc_827D2F98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D2FA0;
	sub_821940C8(ctx, base);
	// b 0x827d2f44
	goto loc_827D2F44;
loc_827D2FA4:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d3014
	if (!ctx.cr0.gt) goto loc_827D3014;
loc_827D2FC4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,47
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 47, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d2fe4
	if (ctx.cr6.lt) goto loc_827D2FE4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D2FE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d3000
	if (ctx.cr6.eq) goto loc_827D3000;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d3008
	goto loc_827D3008;
loc_827D3000:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D3008:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d2fc4
	if (ctx.cr6.gt) goto loc_827D2FC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D3014:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d3054
	if (ctx.cr6.eq) goto loc_827D3054;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d3030
	if (ctx.cr6.gt) goto loc_827D3030;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d3054
	if (!ctx.cr6.eq) goto loc_827D3054;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d3068
	goto loc_827D3068;
loc_827D3054:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d3068
	goto loc_827D3068;
loc_827D3064:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d30a4
	if (ctx.cr6.eq) goto loc_827D30A4;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,-18580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -18580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18828(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18828);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,56(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
loc_827D30A4:
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

__attribute__((alias("__imp__sub_827D30BC"))) PPC_WEAK_FUNC(sub_827D30BC);
PPC_FUNC_IMPL(__imp__sub_827D30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D30C0"))) PPC_WEAK_FUNC(sub_827D30C0);
PPC_FUNC_IMPL(__imp__sub_827D30C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x827d3390
	if (ctx.cr6.gt) {
		sub_827D3390(ctx, base);
		return;
	}
	// lis r12,-32131
	ctx.r12.s64 = -2105737216;
	// addi r12,r12,12516
	ctx.r12.s64 = ctx.r12.s64 + 12516;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x827D31A8
		return;
	case 1:
		// ERROR: 0x827D31D4
		return;
	case 2:
		// ERROR: 0x827D3200
		return;
	case 3:
		// ERROR: 0x827D322C
		return;
	case 4:
		// ERROR: 0x827D3258
		return;
	case 5:
		// ERROR: 0x827D3284
		return;
	case 6:
		// ERROR: 0x827D32B0
		return;
	case 7:
		// ERROR: 0x827D32DC
		return;
	case 8:
		// ERROR: 0x827D3304
		return;
	case 9:
		// ERROR: 0x827D3330
		return;
	case 10:
		// ERROR: 0x827D31A8
		return;
	case 11:
		// ERROR: 0x827D31D4
		return;
	case 12:
		// ERROR: 0x827D3200
		return;
	case 13:
		// ERROR: 0x827D322C
		return;
	case 14:
		// ERROR: 0x827D3258
		return;
	case 15:
		// ERROR: 0x827D3284
		return;
	case 16:
		// ERROR: 0x827D32B0
		return;
	case 17:
		// ERROR: 0x827D32DC
		return;
	case 18:
		// ERROR: 0x827D3304
		return;
	case 19:
		// ERROR: 0x827D3330
		return;
	case 20:
		// ERROR: 0x827D3304
		return;
	case 21:
		// ERROR: 0x827D3390
		return;
	case 22:
		// ERROR: 0x827D3390
		return;
	case 23:
		// ERROR: 0x827D3390
		return;
	case 24:
		// ERROR: 0x827D3390
		return;
	case 25:
		// ERROR: 0x827D3390
		return;
	case 26:
		// ERROR: 0x827D3390
		return;
	case 27:
		// ERROR: 0x827D3390
		return;
	case 28:
		// ERROR: 0x827D3380
		return;
	case 29:
		// ERROR: 0x827D3390
		return;
	case 30:
		// ERROR: 0x827D3390
		return;
	case 31:
		// ERROR: 0x827D3390
		return;
	case 32:
		// ERROR: 0x827D3390
		return;
	case 33:
		// ERROR: 0x827D3390
		return;
	case 34:
		// ERROR: 0x827D3390
		return;
	case 35:
		// ERROR: 0x827D335C
		return;
	case 36:
		// ERROR: 0x827D335C
		return;
	case 37:
		// ERROR: 0x827D335C
		return;
	case 38:
		// ERROR: 0x827D335C
		return;
	case 39:
		// ERROR: 0x827D3390
		return;
	case 40:
		// ERROR: 0x827D3390
		return;
	case 41:
		// ERROR: 0x827D3390
		return;
	case 42:
		// ERROR: 0x827D3390
		return;
	case 43:
		// ERROR: 0x827D3390
		return;
	case 44:
		// ERROR: 0x827D3390
		return;
	case 45:
		// ERROR: 0x827D3390
		return;
	case 46:
		// ERROR: 0x827D3390
		return;
	case 47:
		// ERROR: 0x827D3390
		return;
	case 48:
		// ERROR: 0x827D3390
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_827D30E4"))) PPC_WEAK_FUNC(sub_827D30E4);
PPC_FUNC_IMPL(__imp__sub_827D30E4) {
	PPC_FUNC_PROLOGUE();
	// lwz r19,12712(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12712);
	// lwz r19,12756(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12756);
	// lwz r19,12800(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12800);
	// lwz r19,12844(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12844);
	// lwz r19,12888(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12888);
	// lwz r19,12932(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12932);
	// lwz r19,12976(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12976);
	// lwz r19,13020(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13020);
	// lwz r19,13060(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13060);
	// lwz r19,13104(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13104);
	// lwz r19,12712(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12712);
	// lwz r19,12756(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12756);
	// lwz r19,12800(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12800);
	// lwz r19,12844(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12844);
	// lwz r19,12888(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12888);
	// lwz r19,12932(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12932);
	// lwz r19,12976(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12976);
	// lwz r19,13020(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13020);
	// lwz r19,13060(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13060);
	// lwz r19,13104(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13104);
	// lwz r19,13060(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13060);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13184(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13184);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13148(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13148);
	// lwz r19,13148(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13148);
	// lwz r19,13148(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13148);
	// lwz r19,13148(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13148);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// lwz r19,13200(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13200);
	// li r11,85
	ctx.r11.s64 = 85;
	// li r10,116
	ctx.r10.s64 = 116;
	// li r9,182
	ctx.r9.s64 = 182;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D31D4"))) PPC_WEAK_FUNC(sub_827D31D4);
PPC_FUNC_IMPL(__imp__sub_827D31D4) {
	PPC_FUNC_PROLOGUE();
	// li r11,132
	ctx.r11.s64 = 132;
	// li r10,225
	ctx.r10.s64 = 225;
	// li r9,141
	ctx.r9.s64 = 141;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3200"))) PPC_WEAK_FUNC(sub_827D3200);
PPC_FUNC_IMPL(__imp__sub_827D3200) {
	PPC_FUNC_PROLOGUE();
	// li r11,252
	ctx.r11.s64 = 252;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,165
	ctx.r9.s64 = 165;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D322C"))) PPC_WEAK_FUNC(sub_827D322C);
PPC_FUNC_IMPL(__imp__sub_827D322C) {
	PPC_FUNC_PROLOGUE();
	// li r11,247
	ctx.r11.s64 = 247;
	// li r10,218
	ctx.r10.s64 = 218;
	// li r9,93
	ctx.r9.s64 = 93;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3258"))) PPC_WEAK_FUNC(sub_827D3258);
PPC_FUNC_IMPL(__imp__sub_827D3258) {
	PPC_FUNC_PROLOGUE();
	// li r11,131
	ctx.r11.s64 = 131;
	// li r10,218
	ctx.r10.s64 = 218;
	// li r9,196
	ctx.r9.s64 = 196;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3284"))) PPC_WEAK_FUNC(sub_827D3284);
PPC_FUNC_IMPL(__imp__sub_827D3284) {
	PPC_FUNC_PROLOGUE();
	// li r11,163
	ctx.r11.s64 = 163;
	// li r10,97
	ctx.r10.s64 = 97;
	// li r9,13
	ctx.r9.s64 = 13;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D32B0"))) PPC_WEAK_FUNC(sub_827D32B0);
PPC_FUNC_IMPL(__imp__sub_827D32B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,242
	ctx.r11.s64 = 242;
	// li r10,98
	ctx.r10.s64 = 98;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D32DC"))) PPC_WEAK_FUNC(sub_827D32DC);
PPC_FUNC_IMPL(__imp__sub_827D32DC) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// li r9,175
	ctx.r9.s64 = 175;
	// stb r11,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r11.u8);
	// stb r10,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r10.u8);
	// stb r9,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r9.u8);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3304"))) PPC_WEAK_FUNC(sub_827D3304);
PPC_FUNC_IMPL(__imp__sub_827D3304) {
	PPC_FUNC_PROLOGUE();
	// li r11,239
	ctx.r11.s64 = 239;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r9,7
	ctx.r9.s64 = 7;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3330"))) PPC_WEAK_FUNC(sub_827D3330);
PPC_FUNC_IMPL(__imp__sub_827D3330) {
	PPC_FUNC_PROLOGUE();
	// li r11,188
	ctx.r11.s64 = 188;
	// li r10,178
	ctx.r10.s64 = 178;
	// li r9,248
	ctx.r9.s64 = 248;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r10,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r10.u8);
	// stb r9,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r9.u8);
	// stb r8,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r8.u8);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D335C"))) PPC_WEAK_FUNC(sub_827D335C);
PPC_FUNC_IMPL(__imp__sub_827D335C) {
	PPC_FUNC_PROLOGUE();
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r11.u8);
	// stb r11,-15(r1)
	PPC_STORE_U8(ctx.r1.u32 + -15, ctx.r11.u8);
	// stb r10,-16(r1)
	PPC_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// stb r11,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3380"))) PPC_WEAK_FUNC(sub_827D3380);
PPC_FUNC_IMPL(__imp__sub_827D3380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-20460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20460);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3390"))) PPC_WEAK_FUNC(sub_827D3390);
PPC_FUNC_IMPL(__imp__sub_827D3390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-20468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20468);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D33A0"))) PPC_WEAK_FUNC(sub_827D33A0);
PPC_FUNC_IMPL(__imp__sub_827D33A0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 + 60;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r11.u8);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r9,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r9.u8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r8,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r8.u8);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r7,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D33C8"))) PPC_WEAK_FUNC(sub_827D33C8);
PPC_FUNC_IMPL(__imp__sub_827D33C8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,2804
	ctx.r4.s64 = ctx.r11.s64 + 2804;
	// bl 0x82b38d00
	ctx.lr = 0x827D33F4;
	sub_82B38D00(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bgt cr6,0x827d39f0
	if (ctx.cr6.gt) goto loc_827D39F0;
	// lis r12,-32131
	ctx.r12.s64 = -2105737216;
	// addi r12,r12,13336
	ctx.r12.s64 = ctx.r12.s64 + 13336;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_827D34DC;
	case 1:
		goto loc_827D3510;
	case 2:
		goto loc_827D3544;
	case 3:
		goto loc_827D3578;
	case 4:
		goto loc_827D35AC;
	case 5:
		goto loc_827D35E0;
	case 6:
		goto loc_827D3614;
	case 7:
		goto loc_827D3648;
	case 8:
		goto loc_827D367C;
	case 9:
		goto loc_827D36B0;
	case 10:
		goto loc_827D34DC;
	case 11:
		goto loc_827D3510;
	case 12:
		goto loc_827D3544;
	case 13:
		goto loc_827D3578;
	case 14:
		goto loc_827D35AC;
	case 15:
		goto loc_827D35E0;
	case 16:
		goto loc_827D3614;
	case 17:
		goto loc_827D3648;
	case 18:
		goto loc_827D367C;
	case 19:
		goto loc_827D36B0;
	case 20:
		goto loc_827D36E4;
	case 21:
		goto loc_827D39F0;
	case 22:
		goto loc_827D39F0;
	case 23:
		goto loc_827D39F0;
	case 24:
		goto loc_827D39F0;
	case 25:
		goto loc_827D39F0;
	case 26:
		goto loc_827D39F0;
	case 27:
		goto loc_827D39F0;
	case 28:
		goto loc_827D39F0;
	case 29:
		goto loc_827D39F0;
	case 30:
		goto loc_827D39F0;
	case 31:
		goto loc_827D39F0;
	case 32:
		goto loc_827D39F0;
	case 33:
		goto loc_827D39F0;
	case 34:
		goto loc_827D39F0;
	case 35:
		goto loc_827D3718;
	case 36:
		goto loc_827D374C;
	case 37:
		goto loc_827D3780;
	case 38:
		goto loc_827D37B4;
	case 39:
		goto loc_827D37E8;
	case 40:
		goto loc_827D381C;
	case 41:
		goto loc_827D3850;
	case 42:
		goto loc_827D3884;
	case 43:
		goto loc_827D38B8;
	case 44:
		goto loc_827D38EC;
	case 45:
		goto loc_827D3920;
	case 46:
		goto loc_827D3954;
	case 47:
		goto loc_827D3988;
	case 48:
		goto loc_827D39BC;
	default:
		__builtin_unreachable();
	}
	// lwz r19,13532(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13532);
	// lwz r19,13584(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13584);
	// lwz r19,13636(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13636);
	// lwz r19,13688(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13688);
	// lwz r19,13740(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13740);
	// lwz r19,13792(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13792);
	// lwz r19,13844(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13844);
	// lwz r19,13896(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13896);
	// lwz r19,13948(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13948);
	// lwz r19,14000(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14000);
	// lwz r19,13532(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13532);
	// lwz r19,13584(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13584);
	// lwz r19,13636(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13636);
	// lwz r19,13688(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13688);
	// lwz r19,13740(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13740);
	// lwz r19,13792(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13792);
	// lwz r19,13844(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13844);
	// lwz r19,13896(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13896);
	// lwz r19,13948(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13948);
	// lwz r19,14000(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14000);
	// lwz r19,14052(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14052);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14832(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14832);
	// lwz r19,14104(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14104);
	// lwz r19,14156(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14156);
	// lwz r19,14208(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14208);
	// lwz r19,14260(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14260);
	// lwz r19,14312(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14312);
	// lwz r19,14364(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14364);
	// lwz r19,14416(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14416);
	// lwz r19,14468(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14468);
	// lwz r19,14520(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14520);
	// lwz r19,14572(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14572);
	// lwz r19,14624(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14624);
	// lwz r19,14676(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14676);
	// lwz r19,14728(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14728);
	// lwz r19,14780(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14780);
loc_827D34DC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29260
	ctx.r4.s64 = ctx.r11.s64 + 29260;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8222cf18
	ctx.lr = 0x827D34F0;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82301d40
	ctx.lr = 0x827D34FC;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3508;
	sub_822B85C8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3510:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29284
	ctx.r4.s64 = ctx.r11.s64 + 29284;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8222cf18
	ctx.lr = 0x827D3524;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82301d40
	ctx.lr = 0x827D3530;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D353C;
	sub_822B85C8(ctx, base);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3544:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29304
	ctx.r4.s64 = ctx.r11.s64 + 29304;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8222cf18
	ctx.lr = 0x827D3558;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82301d40
	ctx.lr = 0x827D3564;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3570;
	sub_822B85C8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3578:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29324
	ctx.r4.s64 = ctx.r11.s64 + 29324;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8222cf18
	ctx.lr = 0x827D358C;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82301d40
	ctx.lr = 0x827D3598;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D35A4;
	sub_822B85C8(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D35AC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29344
	ctx.r4.s64 = ctx.r11.s64 + 29344;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8222cf18
	ctx.lr = 0x827D35C0;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82301d40
	ctx.lr = 0x827D35CC;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D35D8;
	sub_822B85C8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D35E0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29364
	ctx.r4.s64 = ctx.r11.s64 + 29364;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8222cf18
	ctx.lr = 0x827D35F4;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82301d40
	ctx.lr = 0x827D3600;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D360C;
	sub_822B85C8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3614:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29384
	ctx.r4.s64 = ctx.r11.s64 + 29384;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8222cf18
	ctx.lr = 0x827D3628;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82301d40
	ctx.lr = 0x827D3634;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3640;
	sub_822B85C8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3648:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29404
	ctx.r4.s64 = ctx.r11.s64 + 29404;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8222cf18
	ctx.lr = 0x827D365C;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82301d40
	ctx.lr = 0x827D3668;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3674;
	sub_822B85C8(ctx, base);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D367C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29424
	ctx.r4.s64 = ctx.r11.s64 + 29424;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8222cf18
	ctx.lr = 0x827D3690;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82301d40
	ctx.lr = 0x827D369C;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D36A8;
	sub_822B85C8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D36B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29444
	ctx.r4.s64 = ctx.r11.s64 + 29444;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8222cf18
	ctx.lr = 0x827D36C4;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82301d40
	ctx.lr = 0x827D36D0;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D36DC;
	sub_822B85C8(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D36E4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29468
	ctx.r4.s64 = ctx.r11.s64 + 29468;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8222cf18
	ctx.lr = 0x827D36F8;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82301d40
	ctx.lr = 0x827D3704;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3710;
	sub_822B85C8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3718:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-28416
	ctx.r4.s64 = ctx.r11.s64 + -28416;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8222cf18
	ctx.lr = 0x827D372C;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82301d40
	ctx.lr = 0x827D3738;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3744;
	sub_822B85C8(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D374C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29496
	ctx.r4.s64 = ctx.r11.s64 + 29496;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8222cf18
	ctx.lr = 0x827D3760;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82301d40
	ctx.lr = 0x827D376C;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3778;
	sub_822B85C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3780:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29516
	ctx.r4.s64 = ctx.r11.s64 + 29516;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8222cf18
	ctx.lr = 0x827D3794;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82301d40
	ctx.lr = 0x827D37A0;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D37AC;
	sub_822B85C8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D37B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29532
	ctx.r4.s64 = ctx.r11.s64 + 29532;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8222cf18
	ctx.lr = 0x827D37C8;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82301d40
	ctx.lr = 0x827D37D4;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D37E0;
	sub_822B85C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D37E8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29548
	ctx.r4.s64 = ctx.r11.s64 + 29548;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8222cf18
	ctx.lr = 0x827D37FC;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82301d40
	ctx.lr = 0x827D3808;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3814;
	sub_822B85C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D381C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29564
	ctx.r4.s64 = ctx.r11.s64 + 29564;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x8222cf18
	ctx.lr = 0x827D3830;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82301d40
	ctx.lr = 0x827D383C;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3848;
	sub_822B85C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3850:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29580
	ctx.r4.s64 = ctx.r11.s64 + 29580;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x8222cf18
	ctx.lr = 0x827D3864;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82301d40
	ctx.lr = 0x827D3870;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D387C;
	sub_822B85C8(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3884:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29596
	ctx.r4.s64 = ctx.r11.s64 + 29596;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x8222cf18
	ctx.lr = 0x827D3898;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82301d40
	ctx.lr = 0x827D38A4;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D38B0;
	sub_822B85C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D38B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29612
	ctx.r4.s64 = ctx.r11.s64 + 29612;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8222cf18
	ctx.lr = 0x827D38CC;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82301d40
	ctx.lr = 0x827D38D8;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D38E4;
	sub_822B85C8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D38EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29632
	ctx.r4.s64 = ctx.r11.s64 + 29632;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x8222cf18
	ctx.lr = 0x827D3900;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82301d40
	ctx.lr = 0x827D390C;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3918;
	sub_822B85C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3920:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29648
	ctx.r4.s64 = ctx.r11.s64 + 29648;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x8222cf18
	ctx.lr = 0x827D3934;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82301d40
	ctx.lr = 0x827D3940;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D394C;
	sub_822B85C8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3954:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29672
	ctx.r4.s64 = ctx.r11.s64 + 29672;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x8222cf18
	ctx.lr = 0x827D3968;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82301d40
	ctx.lr = 0x827D3974;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D3980;
	sub_822B85C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D3988:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29516
	ctx.r4.s64 = ctx.r11.s64 + 29516;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x8222cf18
	ctx.lr = 0x827D399C;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82301d40
	ctx.lr = 0x827D39A8;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D39B4;
	sub_822B85C8(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// b 0x827d39ec
	goto loc_827D39EC;
loc_827D39BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29532
	ctx.r4.s64 = ctx.r11.s64 + 29532;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x8222cf18
	ctx.lr = 0x827D39D0;
	sub_8222CF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82301d40
	ctx.lr = 0x827D39DC;
	sub_82301D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b85c8
	ctx.lr = 0x827D39E8;
	sub_822B85C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_827D39EC:
	// bl 0x821c6868
	ctx.lr = 0x827D39F0;
	sub_821C6868(ctx, base);
loc_827D39F0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_827D3A08"))) PPC_WEAK_FUNC(sub_827D3A08);
PPC_FUNC_IMPL(__imp__sub_827D3A08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3a60
	if (ctx.cr6.eq) goto loc_827D3A60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d3a5c
	if (ctx.cr6.eq) goto loc_827D3A5C;
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827d3a64
	goto loc_827D3A64;
loc_827D3A5C:
	// bl 0x821940c8
	ctx.lr = 0x827D3A60;
	sub_821940C8(ctx, base);
loc_827D3A60:
	// li r30,0
	ctx.r30.s64 = 0;
loc_827D3A64:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3aa8
	if (ctx.cr6.eq) goto loc_827D3AA8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d3b38
	if (ctx.cr6.eq) goto loc_827D3B38;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3aa8
	if (ctx.cr6.eq) goto loc_827D3AA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D3A94;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d3aac
	if (!ctx.cr6.eq) goto loc_827D3AAC;
loc_827D3AA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3AAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3b20
	if (ctx.cr6.eq) goto loc_827D3B20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d3ad4
	if (ctx.cr6.eq) goto loc_827D3AD4;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d3ad8
	if (!ctx.cr6.eq) goto loc_827D3AD8;
loc_827D3AD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D3AD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3b20
	if (ctx.cr6.eq) goto loc_827D3B20;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D3AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D3B04;
	sub_825575C8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 124);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,64(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x827D3B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D3B20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_827D3B38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D3B40;
	sub_821940C8(ctx, base);
	// b 0x827d3aa8
	goto loc_827D3AA8;
}

__attribute__((alias("__imp__sub_827D3B44"))) PPC_WEAK_FUNC(sub_827D3B44);
PPC_FUNC_IMPL(__imp__sub_827D3B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D3B48"))) PPC_WEAK_FUNC(sub_827D3B48);
PPC_FUNC_IMPL(__imp__sub_827D3B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d3b60
	if (!ctx.cr6.eq) goto loc_827D3B60;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_827D3B60:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r8.u8);
	// lfs f0,-27456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3B84"))) PPC_WEAK_FUNC(sub_827D3B84);
PPC_FUNC_IMPL(__imp__sub_827D3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D3B88"))) PPC_WEAK_FUNC(sub_827D3B88);
PPC_FUNC_IMPL(__imp__sub_827D3B88) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29732
	ctx.r4.s64 = ctx.r11.s64 + -29732;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827D3BAC;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_827D3BC4"))) PPC_WEAK_FUNC(sub_827D3BC4);
PPC_FUNC_IMPL(__imp__sub_827D3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D3BC8"))) PPC_WEAK_FUNC(sub_827D3BC8);
PPC_FUNC_IMPL(__imp__sub_827D3BC8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D3BD0"))) PPC_WEAK_FUNC(sub_827D3BD0);
PPC_FUNC_IMPL(__imp__sub_827D3BD0) {
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
	// bl 0x827d3c20
	ctx.lr = 0x827D3BF0;
	sub_827D3C20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3c08
	if (ctx.cr6.eq) goto loc_827D3C08;
	// bl 0x8221be68
	ctx.lr = 0x827D3C04;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D3C08:
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

__attribute__((alias("__imp__sub_827D3C20"))) PPC_WEAK_FUNC(sub_827D3C20);
PPC_FUNC_IMPL(__imp__sub_827D3C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D3C28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// addi r10,r11,29816
	ctx.r10.s64 = ctx.r11.s64 + 29816;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x829ff648
	ctx.lr = 0x827D3C44;
	sub_829FF648(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r28,r30,56
	ctx.r28.s64 = ctx.r30.s64 + 56;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3c58
	if (ctx.cr6.eq) goto loc_827D3C58;
	// bl 0x8221be68
	ctx.lr = 0x827D3C58;
	sub_8221BE68(ctx, base);
loc_827D3C58:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3c7c
	if (ctx.cr6.eq) goto loc_827D3C7C;
	// bl 0x8221be68
	ctx.lr = 0x827D3C7C;
	sub_8221BE68(ctx, base);
loc_827D3C7C:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x829ff648
	ctx.lr = 0x827D3C90;
	sub_829FF648(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3ca4
	if (ctx.cr6.eq) goto loc_827D3CA4;
	// bl 0x8221be68
	ctx.lr = 0x827D3CA4;
	sub_8221BE68(ctx, base);
loc_827D3CA4:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addi r10,r11,-29424
	ctx.r10.s64 = ctx.r11.s64 + -29424;
	// stw r31,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3CC4"))) PPC_WEAK_FUNC(sub_827D3CC4);
PPC_FUNC_IMPL(__imp__sub_827D3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D3CC8"))) PPC_WEAK_FUNC(sub_827D3CC8);
PPC_FUNC_IMPL(__imp__sub_827D3CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x827D3CD0;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r20,-32246
	ctx.r20.s64 = -2113273856;
	// lfs f31,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r11,-27468
	ctx.r30.s64 = ctx.r11.s64 + -27468;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d3fa4
	if (ctx.cr6.eq) goto loc_827D3FA4;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,23004
	ctx.r4.s64 = ctx.r11.s64 + 23004;
	// bl 0x82303f38
	ctx.lr = 0x827D3D18;
	sub_82303F38(ctx, base);
	// stb r3,80(r27)
	PPC_STORE_U8(ctx.r27.u32 + 80, ctx.r3.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,29736
	ctx.r4.s64 = ctx.r10.s64 + 29736;
	// bl 0x82303f38
	ctx.lr = 0x827D3D2C;
	sub_82303F38(ctx, base);
	// stb r3,82(r27)
	PPC_STORE_U8(ctx.r27.u32 + 82, ctx.r3.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,29748
	ctx.r4.s64 = ctx.r9.s64 + 29748;
	// bl 0x822a97a8
	ctx.lr = 0x827D3D40;
	sub_822A97A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d3fa4
	if (ctx.cr6.eq) goto loc_827D3FA4;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// bl 0x829fb600
	ctx.lr = 0x827D3D54;
	sub_829FB600(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d4b70
	ctx.lr = 0x827D3D60;
	sub_827D4B70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r22,r27,40
	ctx.r22.s64 = ctx.r27.s64 + 40;
	// bl 0x829fb600
	ctx.lr = 0x827D3D6C;
	sub_829FB600(ctx, base);
	// rlwinm r4,r3,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82442a78
	ctx.lr = 0x827D3D78;
	sub_82442A78(ctx, base);
	// lbz r11,82(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 82);
	// lfs f0,-384(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3d94
	if (ctx.cr6.eq) goto loc_827D3D94;
	// lfs f0,11924(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11924);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_827D3D94:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,9556(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 9556);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r11,29760
	ctx.r4.s64 = ctx.r11.s64 + 29760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239ccb0
	ctx.lr = 0x827D3DB0;
	sub_8239CCB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d3dd0
	if (ctx.cr6.eq) goto loc_827D3DD0;
	// lfs f0,-25888(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x827d3dd0
	if (!ctx.cr6.gt) goto loc_827D3DD0;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_827D3DD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x829fbc40
	ctx.lr = 0x827D3DDC;
	sub_829FBC40(ctx, base);
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x827d3f9c
	if (ctx.cr6.eq) goto loc_827D3F9C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r10,-31926
	ctx.r10.s64 = -2092302336;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// lis r24,-31926
	ctx.r24.s64 = -2092302336;
	// addi r29,r11,-31340
	ctx.r29.s64 = ctx.r11.s64 + -31340;
	// addi r25,r10,-7836
	ctx.r25.s64 = ctx.r10.s64 + -7836;
loc_827D3E08:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x827d3e44
	if (ctx.cr6.eq) goto loc_827D3E44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827d3e44
	if (!ctx.cr6.eq) goto loc_827D3E44;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-7848(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + -7848);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827d3e44
	if (!ctx.cr6.eq) goto loc_827D3E44;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_827D3E44:
	// lwz r3,27600(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27600);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x821e3e10
	ctx.lr = 0x827D3E50;
	sub_821E3E10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d3f90
	if (ctx.cr6.eq) goto loc_827D3F90;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82446bc0
	ctx.lr = 0x827D3E70;
	sub_82446BC0(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d3e84
	if (!ctx.cr6.eq) goto loc_827D3E84;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// b 0x827d3e90
	goto loc_827D3E90;
loc_827D3E84:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
loc_827D3E90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827d3ecc
	if (!ctx.cr6.lt) goto loc_827D3ECC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d3ec0
	if (ctx.cr6.eq) goto loc_827D3EC0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
loc_827D3EC0:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x827d3ee8
	goto loc_827D3EE8;
loc_827D3ECC:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r21.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82a4a3f0
	ctx.lr = 0x827D3EE8;
	sub_82A4A3F0(ctx, base);
loc_827D3EE8:
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvx128 v127,r0,r7
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// vsubfp128 v10,v127,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82442b68
	ctx.lr = 0x827D3F40;
	sub_82442B68(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvlx v8,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvlx v7,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lvlx v6,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v6,v9,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v7,v6,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// vaddfp128 v5,v127,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82442b68
	ctx.lr = 0x827D3F90;
	sub_82442B68(ctx, base);
loc_827D3F90:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x827d3e08
	if (!ctx.cr6.eq) goto loc_827D3E08;
loc_827D3F9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D3FA4;
	sub_8221BE68(ctx, base);
loc_827D3FA4:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827d41c4
	if (ctx.cr6.eq) goto loc_827D41C4;
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// bl 0x82442a78
	ctx.lr = 0x827D3FE4;
	sub_82442A78(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r5,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x827d4030
	if (ctx.cr0.eq) goto loc_827D4030;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_827D4000:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82442b68
	ctx.lr = 0x827D4010;
	sub_82442B68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827d4000
	if (ctx.cr6.lt) goto loc_827D4000;
loc_827D4030:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r27,28
	ctx.r31.s64 = ctx.r27.s64 + 28;
	// bl 0x82442d00
	ctx.lr = 0x827D403C;
	sub_82442D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82538808
	ctx.lr = 0x827D4048;
	sub_82538808(ctx, base);
	// lwz r3,28(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d41b4
	if (ctx.cr6.eq) goto loc_827D41B4;
	// bl 0x821985b8
	ctx.lr = 0x827D4058;
	sub_821985B8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stfs f1,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D4078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31927
	ctx.r31.s64 = -2092367872;
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d40b4
	if (ctx.cr6.eq) goto loc_827D40B4;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821eed10
	ctx.lr = 0x827D40B0;
	sub_821EED10(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_827D40B4:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D40D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,26912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d4158
	if (ctx.cr6.eq) goto loc_827D4158;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lvx128 v1,r0,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x821eeb28
	ctx.lr = 0x827D4104;
	sub_821EEB28(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,-25888(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x827d4158
	if (!ctx.cr6.gt) goto loc_827D4158;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D4130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x827d4158
	if (!ctx.cr6.lt) goto loc_827D4158;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,81(r27)
	PPC_STORE_U8(ctx.r27.u32 + 81, ctx.r11.u8);
loc_827D4158:
	// lbz r11,81(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d416c
	if (ctx.cr6.eq) goto loc_827D416C;
	// stb r21,80(r27)
	PPC_STORE_U8(ctx.r27.u32 + 80, ctx.r21.u8);
	// b 0x827d4174
	goto loc_827D4174;
loc_827D416C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827d4588
	ctx.lr = 0x827D4174;
	sub_827D4588(ctx, base);
loc_827D4174:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x827D4190;
	sub_822149C8(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r9,-17636
	ctx.r3.s64 = ctx.r9.s64 + -17636;
	// bl 0x82209320
	ctx.lr = 0x827D41A0;
	sub_82209320(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D41B4;
	sub_821940C8(ctx, base);
loc_827D41B4:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d41c4
	if (ctx.cr6.eq) goto loc_827D41C4;
	// bl 0x8221be68
	ctx.lr = 0x827D41C4;
	sub_8221BE68(ctx, base);
loc_827D41C4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D41DC"))) PPC_WEAK_FUNC(sub_827D41DC);
PPC_FUNC_IMPL(__imp__sub_827D41DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D41E0"))) PPC_WEAK_FUNC(sub_827D41E0);
PPC_FUNC_IMPL(__imp__sub_827D41E0) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d4228
	if (ctx.cr6.eq) goto loc_827D4228;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D4210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d4228
	if (ctx.cr6.eq) goto loc_827D4228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D4228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D4228:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4238"))) PPC_WEAK_FUNC(sub_827D4238);
PPC_FUNC_IMPL(__imp__sub_827D4238) {
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
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d4290
	if (ctx.cr6.eq) goto loc_827D4290;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,24(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x827D4280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x827D4288;
	sub_829FF648(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
loc_827D4290:
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

__attribute__((alias("__imp__sub_827D42A4"))) PPC_WEAK_FUNC(sub_827D42A4);
PPC_FUNC_IMPL(__imp__sub_827D42A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D42A8"))) PPC_WEAK_FUNC(sub_827D42A8);
PPC_FUNC_IMPL(__imp__sub_827D42A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D42B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r10,26989(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26989);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d44a0
	if (ctx.cr6.eq) goto loc_827D44A0;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827d44a0
	if (ctx.cr6.eq) goto loc_827D44A0;
	// lis r31,-31924
	ctx.r31.s64 = -2092171264;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r26,-31927
	ctx.r26.s64 = -2092367872;
	// lfs f0,-6024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -6024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27468(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x827d4348
	if (!ctx.cr6.gt) goto loc_827D4348;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827D431C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,26912(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,88(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// bl 0x82290090
	ctx.lr = 0x827D4338;
	sub_82290090(ctx, base);
	// lfs f0,-6024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -6024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x827d44a0
	if (ctx.cr6.gt) goto loc_827D44A0;
loc_827D4348:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r8,r11,-23392
	ctx.r8.s64 = ctx.r11.s64 + -23392;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lbz r10,-23392(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -23392);
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// lbz r11,2(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// lbz r9,3(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bge cr6,0x827d4394
	if (!ctx.cr6.lt) goto loc_827D4394;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-23404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23404);
	// b 0x827d43c0
	goto loc_827D43C0;
loc_827D4394:
	// lbz r11,81(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d43ac
	if (ctx.cr6.eq) goto loc_827D43AC;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-23400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23400);
	// b 0x827d43c0
	goto loc_827D43C0;
loc_827D43AC:
	// lbz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d43c4
	if (!ctx.cr6.eq) goto loc_827D43C4;
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lwz r11,-23408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23408);
loc_827D43C0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_827D43C4:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r4,r8,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ori r10,r7,4
	ctx.r10.u64 = ctx.r7.u64 | 4;
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r7,r9,25844
	ctx.r7.s64 = ctx.r9.s64 + 25844;
	// srawi r4,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 4;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r6,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r6.u8);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// stb r5,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r5.u8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r3,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r3.u8);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r8,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r8.u8);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// ble cr6,0x827d446c
	if (!ctx.cr6.gt) goto loc_827D446C;
	// li r30,16
	ctx.r30.s64 = 16;
	// li r27,-16
	ctx.r27.s64 = -16;
loc_827D4434:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lvx128 v2,r0,r11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r11,r27
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82a3a508
	ctx.lr = 0x827D444C;
	sub_82A3A508(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827d4434
	if (ctx.cr6.lt) goto loc_827D4434;
loc_827D446C:
	// lwz r3,26912(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 26912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D4480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x821dde30
	ctx.lr = 0x827D4498;
	sub_821DDE30(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233e600
	ctx.lr = 0x827D44A0;
	sub_8233E600(ctx, base);
loc_827D44A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D44A8"))) PPC_WEAK_FUNC(sub_827D44A8);
PPC_FUNC_IMPL(__imp__sub_827D44A8) {
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
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d44e4
	if (ctx.cr6.eq) goto loc_827D44E4;
	// bl 0x82442c00
	ctx.lr = 0x827D44CC;
	sub_82442C00(ctx, base);
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
loc_827D44E4:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_827D4500"))) PPC_WEAK_FUNC(sub_827D4500);
PPC_FUNC_IMPL(__imp__sub_827D4500) {
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
	// lwz r4,72(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d4548
	if (ctx.cr6.eq) goto loc_827D4548;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D4530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
loc_827D4548:
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_827D4564"))) PPC_WEAK_FUNC(sub_827D4564);
PPC_FUNC_IMPL(__imp__sub_827D4564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D4568"))) PPC_WEAK_FUNC(sub_827D4568);
PPC_FUNC_IMPL(__imp__sub_827D4568) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_827D4584"))) PPC_WEAK_FUNC(sub_827D4584);
PPC_FUNC_IMPL(__imp__sub_827D4584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4588"))) PPC_WEAK_FUNC(sub_827D4588);
PPC_FUNC_IMPL(__imp__sub_827D4588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D4590;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r26,40
	ctx.r11.s64 = ctx.r26.s64 + 40;
	// lwz r10,48(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r9,44(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r7,r8,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x827d49b4
	if (ctx.cr6.eq) goto loc_827D49B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,44(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// li r6,-1
	ctx.r6.s64 = -1;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addic. r3,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r3.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// ble 0x827d469c
	if (!ctx.cr0.gt) goto loc_827D469C;
	// addi r30,r26,56
	ctx.r30.s64 = ctx.r26.s64 + 56;
loc_827D4618:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x827d4660
	if (!ctx.cr0.eq) goto loc_827D4660;
	// bl 0x822f5c68
	ctx.lr = 0x827D4640;
	sub_822F5C68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f5c68
	ctx.lr = 0x827D4654;
	sub_822F5C68(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x827d4680
	goto loc_827D4680;
loc_827D4660:
	// bl 0x822f5c68
	ctx.lr = 0x827D4664;
	sub_822F5C68(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822f5c68
	ctx.lr = 0x827D467C;
	sub_822F5C68(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_827D4680:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f5c68
	ctx.lr = 0x827D468C;
	sub_822F5C68(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827d4618
	if (ctx.cr6.lt) goto loc_827D4618;
loc_827D469C:
	// lwz r9,60(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,12
	ctx.r7.s64 = 12;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// li r5,38
	ctx.r5.s64 = 38;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x82d4ec28
	ctx.lr = 0x827D46D8;
	sub_82D4EC28(ctx, base);
	// li r6,96
	ctx.r6.s64 = 96;
	// lis r4,-31952
	ctx.r4.s64 = -2094006272;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// li r5,12
	ctx.r5.s64 = 12;
	// lfs f1,-23888(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -23888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82db6248
	ctx.lr = 0x827D46F0;
	sub_82DB6248(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D4708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82dad768
	ctx.lr = 0x827D4710;
	sub_82DAD768(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x82dadcb0
	ctx.lr = 0x827D4720;
	sub_82DADCB0(ctx, base);
	// lwzx r9,r28,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82d4ec28
	ctx.lr = 0x827D4738;
	sub_82D4EC28(ctx, base);
	// li r8,64
	ctx.r8.s64 = 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dae008
	ctx.lr = 0x827D474C;
	sub_82DAE008(ctx, base);
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d478c
	if (ctx.cr6.eq) goto loc_827D478C;
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827d478c
	if (!ctx.cr6.eq) goto loc_827D478C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D478C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D478C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d47c8
	if (ctx.cr6.eq) goto loc_827D47C8;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827d47c8
	if (!ctx.cr6.eq) goto loc_827D47C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D47C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D47C8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d7aaa8
	ctx.lr = 0x827D47D0;
	sub_82D7AAA8(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r7,r10,-27468
	ctx.r7.s64 = ctx.r10.s64 + -27468;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f0,-27468(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r8,784
	ctx.r6.s64 = ctx.r8.s64 + 784;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f31,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,400(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// stvx128 v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e438a8
	ctx.lr = 0x827D4848;
	sub_82E438A8(ctx, base);
	// lis r7,-31927
	ctx.r7.s64 = -2092367872;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f31,400(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lwz r11,27484(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27484);
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// addi r29,r1,368
	ctx.r29.s64 = ctx.r1.s64 + 368;
	// lvx128 v11,r0,r6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lvx128 v10,r0,r10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,7
	ctx.r5.s64 = 7;
	// lvx128 v9,r0,r9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r4,r31,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// stw r31,27484(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27484, ctx.r31.u32);
	// stb r5,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r5.u8);
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r11,r4,19
	ctx.r11.u64 = ctx.r4.u64 | 19;
	// stvx128 v10,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x82d4ec28
	ctx.lr = 0x827D48B4;
	sub_82D4EC28(ctx, base);
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// bl 0x82d7b138
	ctx.lr = 0x827D48C4;
	sub_82D7B138(ctx, base);
	// lis r9,-31926
	ctx.r9.s64 = -2092302336;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-17620(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d48e4
	if (!ctx.cr6.eq) goto loc_827D48E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// b 0x827d48e8
	goto loc_827D48E8;
loc_827D48E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D48E8:
	// stw r11,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r11.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8221f3f0
	ctx.lr = 0x827D48F4;
	sub_8221F3F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x827d49c0
	if (!ctx.cr6.eq) goto loc_827D49C0;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r10,28060(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28060);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d491c
	if (ctx.cr6.eq) goto loc_827D491C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D491C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D491C:
	// bl 0x82cbbb58
	ctx.lr = 0x827D4920;
	sub_82CBBB58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_827D4924:
	// addi r3,r26,72
	ctx.r3.s64 = ctx.r26.s64 + 72;
	// bl 0x8238a848
	ctx.lr = 0x827D492C;
	sub_8238A848(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d7a018
	ctx.lr = 0x827D4934;
	sub_82D7A018(ctx, base);
	// lwz r3,72(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D494C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// lwz r4,72(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r11,26912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26912);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,88(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r3,24(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d49b4
	if (ctx.cr6.eq) goto loc_827D49B4;
	// lhz r11,6(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827d49b4
	if (!ctx.cr6.eq) goto loc_827D49B4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D49B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D49B4:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
loc_827D49C0:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82687920
	ctx.lr = 0x827D49D4;
	sub_82687920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d4924
	goto loc_827D4924;
}

__attribute__((alias("__imp__sub_827D49DC"))) PPC_WEAK_FUNC(sub_827D49DC);
PPC_FUNC_IMPL(__imp__sub_827D49DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D49E0"))) PPC_WEAK_FUNC(sub_827D49E0);
PPC_FUNC_IMPL(__imp__sub_827D49E0) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7020
	ctx.r30.s64 = ctx.r11.s64 + -7020;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827D4A10;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827d4c68
	ctx.lr = 0x827D4A1C;
	sub_827D4C68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D4A24;
	sub_82214F08(ctx, base);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,2400
	ctx.r4.s64 = ctx.r10.s64 + 2400;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D4A38;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D4A48;
	sub_8222CF18(ctx, base);
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,-15800
	ctx.r6.s64 = ctx.r9.s64 + -15800;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827d4eb0
	ctx.lr = 0x827D4A60;
	sub_827D4EB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D4A68;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D4A70;
	sub_82214F08(ctx, base);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,-32768
	ctx.r4.s64 = ctx.r8.s64 + -32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D4A84;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D4A94;
	sub_8222CF18(ctx, base);
	// lis r7,-32131
	ctx.r7.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,15304
	ctx.r6.s64 = ctx.r7.s64 + 15304;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827d50b8
	ctx.lr = 0x827D4AAC;
	sub_827D50B8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D4AB4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D4ABC;
	sub_82214F08(ctx, base);
	// lis r6,-32244
	ctx.r6.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,-9444
	ctx.r4.s64 = ctx.r6.s64 + -9444;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D4AD0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D4AE0;
	sub_8222CF18(ctx, base);
	// lis r4,-32131
	ctx.r4.s64 = -2105737216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r4,17664
	ctx.r6.s64 = ctx.r4.s64 + 17664;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d52c0
	ctx.lr = 0x827D4AF8;
	sub_827D52C0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D4B00;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D4B08;
	sub_82214F08(ctx, base);
	// lis r3,-32244
	ctx.r3.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,12644
	ctx.r4.s64 = ctx.r3.s64 + 12644;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D4B1C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D4B2C;
	sub_8222CF18(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,17768
	ctx.r6.s64 = ctx.r11.s64 + 17768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d54c8
	ctx.lr = 0x827D4B44;
	sub_827D54C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D4B4C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D4B54;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827D4B6C"))) PPC_WEAK_FUNC(sub_827D4B6C);
PPC_FUNC_IMPL(__imp__sub_827D4B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D4B70"))) PPC_WEAK_FUNC(sub_827D4B70);
PPC_FUNC_IMPL(__imp__sub_827D4B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D4B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827d4ba0
	if (!ctx.cr6.gt) goto loc_827D4BA0;
	// bl 0x82a97648
	ctx.lr = 0x827D4B98;
	sub_82A97648(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D4BA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d4bb8
	if (ctx.cr6.eq) goto loc_827D4BB8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
loc_827D4BB8:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x827d4c5c
	if (!ctx.cr6.lt) goto loc_827D4C5C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82512640
	ctx.lr = 0x827D4BCC;
	sub_82512640(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// beq cr6,0x827d4c24
	if (ctx.cr6.eq) goto loc_827D4C24;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827D4BFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d4c14
	if (ctx.cr6.eq) goto loc_827D4C14;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
loc_827D4C14:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x827d4bfc
	if (!ctx.cr6.eq) goto loc_827D4BFC;
loc_827D4C24:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r29,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x827d4c40
	if (ctx.cr6.eq) goto loc_827D4C40;
	// bl 0x8221be68
	ctx.lr = 0x827D4C40;
	sub_8221BE68(ctx, base);
loc_827D4C40:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_827D4C5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4C64"))) PPC_WEAK_FUNC(sub_827D4C64);
PPC_FUNC_IMPL(__imp__sub_827D4C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D4C68"))) PPC_WEAK_FUNC(sub_827D4C68);
PPC_FUNC_IMPL(__imp__sub_827D4C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D4C70;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d4c90
	if (!ctx.cr6.eq) goto loc_827D4C90;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x827d4c94
	goto loc_827D4C94;
loc_827D4C90:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D4C94:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D4CA4;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x827D4CB4;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D4CBC;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x827D4CC4;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d4d0c
	if (ctx.cr6.eq) goto loc_827D4D0C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x827D4CE4;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d4d10
	if (ctx.cr6.eq) goto loc_827D4D10;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d4d14
	goto loc_827D4D14;
loc_827D4D0C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D4D10:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D4D14:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d4e18
	if (ctx.cr6.eq) goto loc_827D4E18;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x827D4D34;
	sub_82229208(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,22224
	ctx.r30.s64 = ctx.r11.s64 + 22224;
	// bl 0x822279a0
	ctx.lr = 0x827D4D48;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D4D68;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x827D4D80;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D4D90;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x827D4DB0;
	sub_82229208(ctx, base);
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,27672
	ctx.r31.s64 = ctx.r11.s64 + 27672;
	// bl 0x822279a0
	ctx.lr = 0x827D4DC4;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D4DE4;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x827D4DFC;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D4E0C;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_827D4E18:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x827d4e44
	if (ctx.cr6.eq) goto loc_827D4E44;
loc_827D4E28:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d4e28
	if (!ctx.cr0.eq) goto loc_827D4E28;
loc_827D4E44:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D4E54;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D4E5C;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827d4ea0
	if (ctx.cr6.eq) goto loc_827D4EA0;
loc_827D4E64:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d4e64
	if (!ctx.cr0.eq) goto loc_827D4E64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d4ea0
	if (!ctx.cr6.eq) goto loc_827D4EA0;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D4E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D4EA0;
	sub_8221BE68(ctx, base);
loc_827D4EA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D4EA8;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D4EB0"))) PPC_WEAK_FUNC(sub_827D4EB0);
PPC_FUNC_IMPL(__imp__sub_827D4EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D4EB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-15800
	ctx.r29.s64 = ctx.r10.s64 + -15800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d4eec
	if (ctx.cr6.eq) goto loc_827D4EEC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D4EEC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D4EFC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D4F0C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D4F14;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D4F1C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d4f80
	if (ctx.cr6.eq) goto loc_827D4F80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D4F4C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D4F58;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d4f84
	if (ctx.cr6.eq) goto loc_827D4F84;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d4f88
	goto loc_827D4F88;
loc_827D4F80:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D4F84:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D4F88:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d4f9c
	if (ctx.cr6.eq) goto loc_827D4F9C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D4F9C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d501c
	if (ctx.cr6.eq) goto loc_827D501C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D4FBC;
	sub_82229208(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,22288
	ctx.r30.s64 = ctx.r11.s64 + 22288;
	// bl 0x822279a0
	ctx.lr = 0x827D4FD0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D4FF0;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D5000;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D5010;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D501C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d5048
	if (ctx.cr6.eq) goto loc_827D5048;
loc_827D502C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d502c
	if (!ctx.cr0.eq) goto loc_827D502C;
loc_827D5048:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D5058;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D5060;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d50a4
	if (ctx.cr6.eq) goto loc_827D50A4;
loc_827D5068:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5068
	if (!ctx.cr0.eq) goto loc_827D5068;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d50a4
	if (!ctx.cr6.eq) goto loc_827D50A4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D509C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D50A4;
	sub_8221BE68(ctx, base);
loc_827D50A4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D50AC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D50B4"))) PPC_WEAK_FUNC(sub_827D50B4);
PPC_FUNC_IMPL(__imp__sub_827D50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D50B8"))) PPC_WEAK_FUNC(sub_827D50B8);
PPC_FUNC_IMPL(__imp__sub_827D50B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D50C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,15304
	ctx.r29.s64 = ctx.r10.s64 + 15304;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d50f4
	if (ctx.cr6.eq) goto loc_827D50F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D50F4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D5104;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D5114;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D511C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D5124;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d5188
	if (ctx.cr6.eq) goto loc_827D5188;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D5154;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D5160;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d518c
	if (ctx.cr6.eq) goto loc_827D518C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d5190
	goto loc_827D5190;
loc_827D5188:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D518C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D5190:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d51a4
	if (ctx.cr6.eq) goto loc_827D51A4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D51A4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5224
	if (ctx.cr6.eq) goto loc_827D5224;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D51C4;
	sub_82229208(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,22664
	ctx.r30.s64 = ctx.r11.s64 + 22664;
	// bl 0x822279a0
	ctx.lr = 0x827D51D8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D51F8;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D5208;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D5218;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D5224:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d5250
	if (ctx.cr6.eq) goto loc_827D5250;
loc_827D5234:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5234
	if (!ctx.cr0.eq) goto loc_827D5234;
loc_827D5250:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D5260;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D5268;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d52ac
	if (ctx.cr6.eq) goto loc_827D52AC;
loc_827D5270:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5270
	if (!ctx.cr0.eq) goto loc_827D5270;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d52ac
	if (!ctx.cr6.eq) goto loc_827D52AC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D52A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D52AC;
	sub_8221BE68(ctx, base);
loc_827D52AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D52B4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D52BC"))) PPC_WEAK_FUNC(sub_827D52BC);
PPC_FUNC_IMPL(__imp__sub_827D52BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D52C0"))) PPC_WEAK_FUNC(sub_827D52C0);
PPC_FUNC_IMPL(__imp__sub_827D52C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D52C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,17664
	ctx.r29.s64 = ctx.r10.s64 + 17664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d52fc
	if (ctx.cr6.eq) goto loc_827D52FC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D52FC:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D530C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D531C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D5324;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D532C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d5390
	if (ctx.cr6.eq) goto loc_827D5390;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D535C;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D5368;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d5394
	if (ctx.cr6.eq) goto loc_827D5394;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d5398
	goto loc_827D5398;
loc_827D5390:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D5394:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D5398:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d53ac
	if (ctx.cr6.eq) goto loc_827D53AC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D53AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d542c
	if (ctx.cr6.eq) goto loc_827D542C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D53CC;
	sub_82229208(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,23040
	ctx.r30.s64 = ctx.r11.s64 + 23040;
	// bl 0x822279a0
	ctx.lr = 0x827D53E0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-3736
	ctx.r4.s64 = ctx.r10.s64 + -3736;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D5400;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D5410;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D5420;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D542C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d5458
	if (ctx.cr6.eq) goto loc_827D5458;
loc_827D543C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d543c
	if (!ctx.cr0.eq) goto loc_827D543C;
loc_827D5458:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D5468;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D5470;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d54b4
	if (ctx.cr6.eq) goto loc_827D54B4;
loc_827D5478:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5478
	if (!ctx.cr0.eq) goto loc_827D5478;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d54b4
	if (!ctx.cr6.eq) goto loc_827D54B4;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D54AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D54B4;
	sub_8221BE68(ctx, base);
loc_827D54B4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D54BC;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D54C4"))) PPC_WEAK_FUNC(sub_827D54C4);
PPC_FUNC_IMPL(__imp__sub_827D54C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D54C8"))) PPC_WEAK_FUNC(sub_827D54C8);
PPC_FUNC_IMPL(__imp__sub_827D54C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D54D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,17768
	ctx.r29.s64 = ctx.r10.s64 + 17768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d5504
	if (ctx.cr6.eq) goto loc_827D5504;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D5504:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D5514;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D5524;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D552C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D5534;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d5598
	if (ctx.cr6.eq) goto loc_827D5598;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D5564;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D5570;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d559c
	if (ctx.cr6.eq) goto loc_827D559C;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d55a0
	goto loc_827D55A0;
loc_827D5598:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D559C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D55A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d55b4
	if (ctx.cr6.eq) goto loc_827D55B4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D55B4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5634
	if (ctx.cr6.eq) goto loc_827D5634;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D55D4;
	sub_82229208(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,23432
	ctx.r30.s64 = ctx.r11.s64 + 23432;
	// bl 0x822279a0
	ctx.lr = 0x827D55E8;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-24688
	ctx.r4.s64 = ctx.r10.s64 + -24688;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D5608;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D5618;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D5628;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D5634:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d5660
	if (ctx.cr6.eq) goto loc_827D5660;
loc_827D5644:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5644
	if (!ctx.cr0.eq) goto loc_827D5644;
loc_827D5660:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D5670;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D5678;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d56bc
	if (ctx.cr6.eq) goto loc_827D56BC;
loc_827D5680:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d5680
	if (!ctx.cr0.eq) goto loc_827D5680;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d56bc
	if (!ctx.cr6.eq) goto loc_827D56BC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D56B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D56BC;
	sub_8221BE68(ctx, base);
loc_827D56BC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D56C4;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D56CC"))) PPC_WEAK_FUNC(sub_827D56CC);
PPC_FUNC_IMPL(__imp__sub_827D56CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D56D0"))) PPC_WEAK_FUNC(sub_827D56D0);
PPC_FUNC_IMPL(__imp__sub_827D56D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d56ec
	if (ctx.cr6.eq) goto loc_827D56EC;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d56f0
	if (!ctx.cr6.eq) goto loc_827D56F0;
loc_827D56EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D56F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5708
	if (ctx.cr6.eq) goto loc_827D5708;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
loc_827D5708:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5710"))) PPC_WEAK_FUNC(sub_827D5710);
PPC_FUNC_IMPL(__imp__sub_827D5710) {
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
	// beq cr6,0x827d5738
	if (ctx.cr6.eq) goto loc_827D5738;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d573c
	if (!ctx.cr6.eq) goto loc_827D573C;
loc_827D5738:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D573C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5870
	if (ctx.cr6.eq) goto loc_827D5870;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d5840
	if (ctx.cr6.eq) goto loc_827D5840;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5784
	if (ctx.cr6.eq) goto loc_827D5784;
	// lbz r11,114(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827d5844
	goto loc_827D5844;
loc_827D5784:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d57f0
	if (!ctx.cr0.gt) goto loc_827D57F0;
loc_827D57A0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,114
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 114, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d57c0
	if (ctx.cr6.lt) goto loc_827D57C0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D57C0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d57dc
	if (ctx.cr6.eq) goto loc_827D57DC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d57e4
	goto loc_827D57E4;
loc_827D57DC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D57E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d57a0
	if (ctx.cr6.gt) goto loc_827D57A0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D57F0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d5830
	if (ctx.cr6.eq) goto loc_827D5830;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d580c
	if (ctx.cr6.gt) goto loc_827D580C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D580C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d5830
	if (!ctx.cr6.eq) goto loc_827D5830;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5844
	goto loc_827D5844;
loc_827D5830:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5844
	goto loc_827D5844;
loc_827D5840:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D5844:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5870
	if (ctx.cr6.eq) goto loc_827D5870;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D5860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_827D5870:
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

__attribute__((alias("__imp__sub_827D5884"))) PPC_WEAK_FUNC(sub_827D5884);
PPC_FUNC_IMPL(__imp__sub_827D5884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D5888"))) PPC_WEAK_FUNC(sub_827D5888);
PPC_FUNC_IMPL(__imp__sub_827D5888) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d58b4
	if (ctx.cr6.eq) goto loc_827D58B4;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827d58b8
	if (!ctx.cr6.eq) goto loc_827D58B8;
loc_827D58B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D58B8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d59f0
	if (ctx.cr6.eq) goto loc_827D59F0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,14,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d59cc
	if (ctx.cr6.eq) goto loc_827D59CC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5904
	if (ctx.cr6.eq) goto loc_827D5904;
	// lbz r9,114(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 114);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d59d0
	goto loc_827D59D0;
loc_827D5904:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d5974
	if (!ctx.cr0.gt) goto loc_827D5974;
loc_827D5924:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,114
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 114, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d5944
	if (ctx.cr6.lt) goto loc_827D5944;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D5944:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d5960
	if (ctx.cr6.eq) goto loc_827D5960;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d5968
	goto loc_827D5968;
loc_827D5960:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D5968:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d5924
	if (ctx.cr6.gt) goto loc_827D5924;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D5974:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d59b8
	if (ctx.cr6.eq) goto loc_827D59B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d5990
	if (ctx.cr6.gt) goto loc_827D5990;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D5990:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d59b8
	if (!ctx.cr6.eq) goto loc_827D59B8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d59d0
	goto loc_827D59D0;
loc_827D59B8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d59d0
	goto loc_827D59D0;
loc_827D59CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D59D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d59f0
	if (ctx.cr6.eq) goto loc_827D59F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D59F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D59F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5A00"))) PPC_WEAK_FUNC(sub_827D5A00);
PPC_FUNC_IMPL(__imp__sub_827D5A00) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d5a30
	if (ctx.cr6.eq) goto loc_827D5A30;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d5a34
	if (!ctx.cr6.eq) goto loc_827D5A34;
loc_827D5A30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D5A34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5b6c
	if (ctx.cr6.eq) goto loc_827D5B6C;
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d5b3c
	if (ctx.cr6.eq) goto loc_827D5B3C;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5a7c
	if (ctx.cr6.eq) goto loc_827D5A7C;
	// lbz r10,114(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827d5b40
	goto loc_827D5B40;
loc_827D5A7C:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d5aec
	if (!ctx.cr0.gt) goto loc_827D5AEC;
loc_827D5A9C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,114
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 114, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d5abc
	if (ctx.cr6.lt) goto loc_827D5ABC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D5ABC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d5ad8
	if (ctx.cr6.eq) goto loc_827D5AD8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d5ae0
	goto loc_827D5AE0;
loc_827D5AD8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D5AE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d5a9c
	if (ctx.cr6.gt) goto loc_827D5A9C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D5AEC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d5b2c
	if (ctx.cr6.eq) goto loc_827D5B2C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d5b08
	if (ctx.cr6.gt) goto loc_827D5B08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D5B08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d5b2c
	if (!ctx.cr6.eq) goto loc_827D5B2C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5b40
	goto loc_827D5B40;
loc_827D5B2C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5b40
	goto loc_827D5B40;
loc_827D5B3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D5B40:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5b6c
	if (ctx.cr6.eq) goto loc_827D5B6C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D5B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_827D5B6C:
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

__attribute__((alias("__imp__sub_827D5B84"))) PPC_WEAK_FUNC(sub_827D5B84);
PPC_FUNC_IMPL(__imp__sub_827D5B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D5B88"))) PPC_WEAK_FUNC(sub_827D5B88);
PPC_FUNC_IMPL(__imp__sub_827D5B88) {
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
	// beq cr6,0x827d5bb0
	if (ctx.cr6.eq) goto loc_827D5BB0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d5bb4
	if (!ctx.cr6.eq) goto loc_827D5BB4;
loc_827D5BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D5BB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5cd8
	if (ctx.cr6.eq) goto loc_827D5CD8;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,14,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d5cb8
	if (ctx.cr6.eq) goto loc_827D5CB8;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5bfc
	if (ctx.cr6.eq) goto loc_827D5BFC;
	// lbz r11,114(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827d5cbc
	goto loc_827D5CBC;
loc_827D5BFC:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d5c68
	if (!ctx.cr0.gt) goto loc_827D5C68;
loc_827D5C18:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,114
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 114, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d5c38
	if (ctx.cr6.lt) goto loc_827D5C38;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D5C38:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d5c54
	if (ctx.cr6.eq) goto loc_827D5C54;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d5c5c
	goto loc_827D5C5C;
loc_827D5C54:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D5C5C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d5c18
	if (ctx.cr6.gt) goto loc_827D5C18;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D5C68:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d5ca8
	if (ctx.cr6.eq) goto loc_827D5CA8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d5c84
	if (ctx.cr6.gt) goto loc_827D5C84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D5C84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d5ca8
	if (!ctx.cr6.eq) goto loc_827D5CA8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5cbc
	goto loc_827D5CBC;
loc_827D5CA8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d5cbc
	goto loc_827D5CBC;
loc_827D5CB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D5CBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5cd8
	if (ctx.cr6.eq) goto loc_827D5CD8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D5CD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D5CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D5CE8"))) PPC_WEAK_FUNC(sub_827D5CE8);
PPC_FUNC_IMPL(__imp__sub_827D5CE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D5CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5d18
	if (ctx.cr6.eq) goto loc_827D5D18;
loc_827D5D0C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d5d0c
	if (!ctx.cr6.eq) goto loc_827D5D0C;
loc_827D5D18:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82241480
	ctx.lr = 0x827D5D28;
	sub_82241480(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r29,64
	ctx.r31.s64 = ctx.r29.s64 + 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82978470
	ctx.lr = 0x827D5D3C;
	sub_82978470(ctx, base);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r9,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r9.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r8,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D5D60;
	sub_821940C8(ctx, base);
	// lis r7,-31924
	ctx.r7.s64 = -2092171264;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lbz r5,-6020(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + -6020);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d5da4
	if (ctx.cr6.eq) goto loc_827D5DA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5da4
	if (ctx.cr6.eq) goto loc_827D5DA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5db8
	if (ctx.cr6.eq) goto loc_827D5DB8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5da4
	if (ctx.cr6.eq) goto loc_827D5DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D5DA4;
	sub_825575C8(ctx, base);
loc_827D5DA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82daa8e0
	ctx.lr = 0x827D5DB0;
	sub_82DAA8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D5DB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D5DC0;
	sub_821940C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82daa8e0
	ctx.lr = 0x827D5DCC;
	sub_82DAA8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5DD4"))) PPC_WEAK_FUNC(sub_827D5DD4);
PPC_FUNC_IMPL(__imp__sub_827D5DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D5DD8"))) PPC_WEAK_FUNC(sub_827D5DD8);
PPC_FUNC_IMPL(__imp__sub_827D5DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D5DE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5e08
	if (ctx.cr6.eq) goto loc_827D5E08;
loc_827D5DFC:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d5dfc
	if (!ctx.cr6.eq) goto loc_827D5DFC;
loc_827D5E08:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r31,36(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r29,416
	ctx.r3.s64 = ctx.r29.s64 + 416;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x8228ed70
	ctx.lr = 0x827D5E38;
	sub_8228ED70(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r8,5732
	ctx.r27.s64 = ctx.r8.s64 + 5732;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D5E4C;
	sub_821940C8(ctx, base);
	// lwz r11,424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
	// bl 0x82241480
	ctx.lr = 0x827D5E64;
	sub_82241480(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82978470
	ctx.lr = 0x827D5E74;
	sub_82978470(ctx, base);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D5E90;
	sub_821940C8(ctx, base);
	// lis r5,-31924
	ctx.r5.s64 = -2092171264;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lbz r4,-6019(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + -6019);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d5ed0
	if (ctx.cr6.eq) goto loc_827D5ED0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5ed0
	if (ctx.cr6.eq) goto loc_827D5ED0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d5ee4
	if (ctx.cr6.eq) goto loc_827D5EE4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d5ed0
	if (ctx.cr6.eq) goto loc_827D5ED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D5ED0;
	sub_825575C8(ctx, base);
loc_827D5ED0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82daa3e0
	ctx.lr = 0x827D5EDC;
	sub_82DAA3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
loc_827D5EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D5EEC;
	sub_821940C8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82daa3e0
	ctx.lr = 0x827D5EF8;
	sub_82DAA3E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D5F00"))) PPC_WEAK_FUNC(sub_827D5F00);
PPC_FUNC_IMPL(__imp__sub_827D5F00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x827D5F08;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x827d5f28
	if (ctx.cr6.gt) goto loc_827D5F28;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_827D5F28:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d612c
	if (ctx.cr6.eq) goto loc_827D612C;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x827d60e8
	if (ctx.cr6.eq) goto loc_827D60E8;
	// li r23,16
	ctx.r23.s64 = 16;
	// li r22,48
	ctx.r22.s64 = 48;
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_827D5F54:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// add r11,r26,r9
	ctx.r11.u64 = ctx.r26.u64 + ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lvx128 v0,r11,r23
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x827d5fe0
	if (ctx.cr6.eq) goto loc_827D5FE0;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_827D5FB4:
	// lfs f13,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x827d5fc8
	if (ctx.cr6.gt) goto loc_827D5FC8;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_827D5FC8:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827d5fe0
	if (!ctx.cr6.eq) goto loc_827D5FE0;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d5fb4
	if (!ctx.cr6.eq) goto loc_827D5FB4;
loc_827D5FE0:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r31,r11,r22
	ctx.r31.s32 = ctx.r11.s32 / ctx.r22.s32;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x827d60d4
	if (ctx.cr6.eq) goto loc_827D60D4;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827d6138
	ctx.lr = 0x827D6004;
	sub_827D6138(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r29,416
	ctx.r4.s64 = ctx.r29.s64 + 416;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,48
	ctx.r9.s64 = ctx.r10.s64 + 48;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lvx128 v13,r0,r9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r21,40(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r20,44(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lvx128 v11,r0,r7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r8,84(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r6.u32);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r31,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r31.u32);
	// stw r21,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r21.u32);
	// stw r20,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r20.u32);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8228ee18
	ctx.lr = 0x827D60BC;
	sub_8228EE18(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// bl 0x826c5690
	ctx.lr = 0x827D60D4;
	sub_826C5690(ctx, base);
loc_827D60D4:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r24,r30
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x827d5f54
	if (!ctx.cr6.eq) goto loc_827D5F54;
loc_827D60E8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r29,16
	ctx.r31.s64 = ctx.r29.s64 + 16;
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x827d611c
	if (!ctx.cr6.lt) goto loc_827D611C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d610c
	if (ctx.cr6.lt) goto loc_827D610C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827D610C:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d51270
	ctx.lr = 0x827D611C;
	sub_82D51270(ctx, base);
loc_827D611C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,416
	ctx.r3.s64 = ctx.r29.s64 + 416;
	// bl 0x826c5390
	ctx.lr = 0x827D612C;
	sub_826C5390(ctx, base);
loc_827D612C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82ca2c18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6134"))) PPC_WEAK_FUNC(sub_827D6134);
PPC_FUNC_IMPL(__imp__sub_827D6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6138"))) PPC_WEAK_FUNC(sub_827D6138);
PPC_FUNC_IMPL(__imp__sub_827D6138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827D6140;
	__savegprlr_27(ctx, base);
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x827d618c
	if (!ctx.cr6.lt) goto loc_827D618C;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827d617c
	if (ctx.cr6.lt) goto loc_827D617C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827D617C:
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d51270
	ctx.lr = 0x827D618C;
	sub_82D51270(ctx, base);
loc_827D618C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addic. r9,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r9.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// blt 0x827d6224
	if (ctx.cr0.lt) goto loc_827D6224;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r6,-36
	ctx.r6.s64 = -36;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_827D61E4:
	// lvx128 v0,r10,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r7,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// stw r3,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// bge 0x827d61e4
	if (!ctx.cr0.lt) goto loc_827D61E4;
loc_827D6224:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r28,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,44(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D626C"))) PPC_WEAK_FUNC(sub_827D626C);
PPC_FUNC_IMPL(__imp__sub_827D626C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6270"))) PPC_WEAK_FUNC(sub_827D6270);
PPC_FUNC_IMPL(__imp__sub_827D6270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D6278;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31927
	ctx.r30.s64 = -2092367872;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// lfs f1,-27456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27456);
	ctx.f1.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x821f0890
	ctx.lr = 0x827D62C0;
	sub_821F0890(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x827d6308
	if (ctx.cr6.lt) goto loc_827D6308;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_827D62E0:
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f1,f8,f8
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// bne 0x827d62e0
	if (!ctx.cr0.eq) goto loc_827D62E0;
loc_827D6308:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827d6320
	if (!ctx.cr6.lt) goto loc_827D6320;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_827D6314:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// bne 0x827d6314
	if (!ctx.cr0.eq) goto loc_827D6314;
loc_827D6320:
	// lwz r11,26912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// mulli r10,r9,9377
	ctx.r10.s64 = ctx.r9.s64 * 9377;
	// addi r8,r10,9439
	ctx.r8.s64 = ctx.r10.s64 + 9439;
	// rotlwi r7,r8,19
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 19);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x827d635c
	if (!ctx.cr6.eq) goto loc_827D635C;
	// fsubs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fnmsubs f0,f0,f1,f31
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f1.f64 - ctx.f31.f64)));
	// b 0x827d6364
	goto loc_827D6364;
loc_827D635C:
	// fsubs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// fmadds f0,f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f31.f64));
loc_827D6364:
	// lis r11,-31950
	ctx.r11.s64 = -2093875200;
	// lis r10,-31950
	ctx.r10.s64 = -2093875200;
	// lwz r11,-27380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27380);
	// lfd f13,-27376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27376);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadd f10,f0,f13,f11
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f11.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D63A4"))) PPC_WEAK_FUNC(sub_827D63A4);
PPC_FUNC_IMPL(__imp__sub_827D63A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D63A8"))) PPC_WEAK_FUNC(sub_827D63A8);
PPC_FUNC_IMPL(__imp__sub_827D63A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D63B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r10,63
	ctx.r30.s64 = ctx.r10.s64 + 63;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x827d63d8
	if (ctx.cr6.eq) goto loc_827D63D8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D63D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D63EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d6448
	if (ctx.cr6.eq) goto loc_827D6448;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29880
	ctx.r4.s64 = ctx.r11.s64 + 29880;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D640C;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d6420
	if (ctx.cr6.eq) goto loc_827D6420;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D6420:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x827D642C;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D6434;
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6450"))) PPC_WEAK_FUNC(sub_827D6450);
PPC_FUNC_IMPL(__imp__sub_827D6450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D6458;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r10,63
	ctx.r30.s64 = ctx.r10.s64 + 63;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x827d6480
	if (ctx.cr6.eq) goto loc_827D6480;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D6480:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d64f0
	if (ctx.cr6.eq) goto loc_827D64F0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29908
	ctx.r4.s64 = ctx.r11.s64 + 29908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D64B4;
	sub_8222CF18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d64c8
	if (ctx.cr6.eq) goto loc_827D64C8;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D64C8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825cbb08
	ctx.lr = 0x827D64D4;
	sub_825CBB08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D64DC;
	sub_82214F08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D64F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D64F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D64F8"))) PPC_WEAK_FUNC(sub_827D64F8);
PPC_FUNC_IMPL(__imp__sub_827D64F8) {
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
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x829ff648
	ctx.lr = 0x827D651C;
	sub_829FF648(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,30104
	ctx.r9.s64 = ctx.r11.s64 + 30104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827d6540
	if (ctx.cr6.eq) goto loc_827D6540;
	// bl 0x8221be68
	ctx.lr = 0x827D653C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6540:
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

__attribute__((alias("__imp__sub_827D6558"))) PPC_WEAK_FUNC(sub_827D6558);
PPC_FUNC_IMPL(__imp__sub_827D6558) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-15336
	ctx.r4.s64 = ctx.r11.s64 + -15336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827D657C;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_827D6594"))) PPC_WEAK_FUNC(sub_827D6594);
PPC_FUNC_IMPL(__imp__sub_827D6594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6598"))) PPC_WEAK_FUNC(sub_827D6598);
PPC_FUNC_IMPL(__imp__sub_827D6598) {
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
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x829ff648
	ctx.lr = 0x827D65B8;
	sub_829FF648(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x829ff648
	ctx.lr = 0x827D65C0;
	sub_829FF648(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x829ff648
	ctx.lr = 0x827D65C8;
	sub_829FF648(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x829ff648
	ctx.lr = 0x827D65D0;
	sub_829FF648(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d661c
	if (ctx.cr6.eq) goto loc_827D661C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D65E4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d65e4
	if (!ctx.cr0.eq) goto loc_827D65E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6618
	if (!ctx.cr6.eq) goto loc_827D6618;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6618:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_827D661C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6664
	if (ctx.cr6.eq) goto loc_827D6664;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D662C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d662c
	if (!ctx.cr0.eq) goto loc_827D662C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6660
	if (!ctx.cr6.eq) goto loc_827D6660;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6660:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_827D6664:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d66ac
	if (ctx.cr6.eq) goto loc_827D66AC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6674:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6674
	if (!ctx.cr0.eq) goto loc_827D6674;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d66a8
	if (!ctx.cr6.eq) goto loc_827D66A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D66A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D66A8:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_827D66AC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,30104
	ctx.r10.s64 = ctx.r11.s64 + 30104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827D66D0"))) PPC_WEAK_FUNC(sub_827D66D0);
PPC_FUNC_IMPL(__imp__sub_827D66D0) {
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
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x829ff648
	ctx.lr = 0x827D66F4;
	sub_829FF648(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x829ff648
	ctx.lr = 0x827D66FC;
	sub_829FF648(ctx, base);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x829ff648
	ctx.lr = 0x827D6704;
	sub_829FF648(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x829ff648
	ctx.lr = 0x827D670C;
	sub_829FF648(ctx, base);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6758
	if (ctx.cr6.eq) goto loc_827D6758;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D671C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d671c
	if (!ctx.cr0.eq) goto loc_827D671C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6750
	if (!ctx.cr6.eq) goto loc_827D6750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6750:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_827D6758:
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x829ff648
	ctx.lr = 0x827D6760;
	sub_829FF648(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x829ff648
	ctx.lr = 0x827D6768;
	sub_829FF648(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D6770;
	sub_829FF648(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D6778;
	sub_829FF648(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D6780;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d6598
	ctx.lr = 0x827D6788;
	sub_827D6598(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d67a0
	if (ctx.cr6.eq) goto loc_827D67A0;
	// bl 0x8221be68
	ctx.lr = 0x827D679C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D67A0:
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

__attribute__((alias("__imp__sub_827D67B8"))) PPC_WEAK_FUNC(sub_827D67B8);
PPC_FUNC_IMPL(__imp__sub_827D67B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,2112
	ctx.r3.s64 = ctx.r3.s64 + 2112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D67C0"))) PPC_WEAK_FUNC(sub_827D67C0);
PPC_FUNC_IMPL(__imp__sub_827D67C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D67E8"))) PPC_WEAK_FUNC(sub_827D67E8);
PPC_FUNC_IMPL(__imp__sub_827D67E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D67F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,832
	ctx.r11.s64 = ctx.r31.s64 + 832;
	// addi r9,r10,9280
	ctx.r9.s64 = ctx.r10.s64 + 9280;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r29,r11,572
	ctx.r29.s64 = ctx.r11.s64 + 572;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_827D6818:
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,26560
	ctx.r6.s64 = ctx.r11.s64 + 26560;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r29,-556
	ctx.r3.s64 = ctx.r29.s64 + -556;
	// bl 0x8221fc28
	ctx.lr = 0x827D6830;
	sub_8221FC28(ctx, base);
	// stw r30,-12(r29)
	PPC_STORE_U32(ctx.r29.u32 + -12, ctx.r30.u32);
	// stw r30,-8(r29)
	PPC_STORE_U32(ctx.r29.u32 + -8, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addi r29,r29,576
	ctx.r29.s64 = ctx.r29.s64 + 576;
	// bge 0x827d6818
	if (!ctx.cr0.lt) goto loc_827D6818;
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r30,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1996, ctx.r30.u32);
	// stw r30,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r30.u32);
	// stw r30,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r30.u32);
	// lfs f0,-27468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r30.u32);
	// stw r30,2320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2320, ctx.r30.u32);
	// stw r30,2324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2324, ctx.r30.u32);
	// stw r30,2328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2328, ctx.r30.u32);
	// stw r30,2332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2332, ctx.r30.u32);
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
	// stw r30,2340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2340, ctx.r30.u32);
	// stw r30,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// stw r30,2348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2348, ctx.r30.u32);
	// stw r30,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r30.u32);
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
	// stw r30,2360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2360, ctx.r30.u32);
	// stw r30,2364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2364, ctx.r30.u32);
	// stw r30,2368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2368, ctx.r30.u32);
	// stw r30,2372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2372, ctx.r30.u32);
	// stw r30,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r30.u32);
	// stw r30,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r30.u32);
	// stw r30,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// stw r30,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r30.u32);
	// stw r30,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r30.u32);
	// stw r30,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r30.u32);
	// stw r30,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r30.u32);
	// stw r30,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r30.u32);
	// stw r30,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r30.u32);
	// stw r30,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r30.u32);
	// stw r30,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r30.u32);
	// stw r30,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r30.u32);
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
	// stw r30,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r30.u32);
	// stw r30,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
	// stw r30,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r30.u32);
	// stw r30,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r30.u32);
	// stw r30,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r30.u32);
	// stw r30,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r30.u32);
	// stw r30,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r30.u32);
	// stfs f0,2452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2452, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// stw r10,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r10.u32);
	// stfs f0,2448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2448, temp.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stfs f0,2460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2460, temp.u32);
	// stb r30,2380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2380, ctx.r30.u8);
	// stfs f0,2100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2100, temp.u32);
	// stb r30,2382(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2382, ctx.r30.u8);
	// stfs f0,2472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stb r30,2381(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2381, ctx.r30.u8);
	// stfs f0,2476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2476, temp.u32);
	// stb r30,2383(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2383, ctx.r30.u8);
	// stb r30,2386(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2386, ctx.r30.u8);
	// stb r30,2387(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2387, ctx.r30.u8);
	// stb r30,2388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2388, ctx.r30.u8);
	// stw r30,2628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2628, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D694C"))) PPC_WEAK_FUNC(sub_827D694C);
PPC_FUNC_IMPL(__imp__sub_827D694C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6950"))) PPC_WEAK_FUNC(sub_827D6950);
PPC_FUNC_IMPL(__imp__sub_827D6950) {
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
	// bl 0x827d6a10
	ctx.lr = 0x827D6970;
	sub_827D6A10(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d6988
	if (ctx.cr6.eq) goto loc_827D6988;
	// bl 0x8221be68
	ctx.lr = 0x827D6984;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6988:
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

__attribute__((alias("__imp__sub_827D69A0"))) PPC_WEAK_FUNC(sub_827D69A0);
PPC_FUNC_IMPL(__imp__sub_827D69A0) {
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
	// addi r3,r31,568
	ctx.r3.s64 = ctx.r31.s64 + 568;
	// bl 0x829ff648
	ctx.lr = 0x827D69C0;
	sub_829FF648(ctx, base);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// bl 0x829ff648
	ctx.lr = 0x827D69C8;
	sub_829FF648(ctx, base);
	// addi r11,r31,544
	ctx.r11.s64 = ctx.r31.s64 + 544;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r31,r11,84
	ctx.r31.s64 = ctx.r11.s64 + 84;
loc_827D69D4:
	// addi r31,r31,-176
	ctx.r31.s64 = ctx.r31.s64 + -176;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x829ff648
	ctx.lr = 0x827D69E0;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829ff648
	ctx.lr = 0x827D69E8;
	sub_829FF648(ctx, base);
	// addi r3,r31,-80
	ctx.r3.s64 = ctx.r31.s64 + -80;
	// bl 0x829ff648
	ctx.lr = 0x827D69F0;
	sub_829FF648(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x827d69d4
	if (!ctx.cr0.lt) goto loc_827D69D4;
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

__attribute__((alias("__imp__sub_827D6A10"))) PPC_WEAK_FUNC(sub_827D6A10);
PPC_FUNC_IMPL(__imp__sub_827D6A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D6A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r31,2548
	ctx.r3.s64 = ctx.r31.s64 + 2548;
	// bl 0x82601418
	ctx.lr = 0x827D6A28;
	sub_82601418(ctx, base);
	// addi r3,r31,2536
	ctx.r3.s64 = ctx.r31.s64 + 2536;
	// bl 0x829ff648
	ctx.lr = 0x827D6A30;
	sub_829FF648(ctx, base);
	// lwz r3,2532(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2532);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6a7c
	if (ctx.cr6.eq) goto loc_827D6A7C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6A44:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6a44
	if (!ctx.cr0.eq) goto loc_827D6A44;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6a78
	if (!ctx.cr6.eq) goto loc_827D6A78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6A78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6A78:
	// stw r30,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
loc_827D6A7C:
	// addi r3,r31,2524
	ctx.r3.s64 = ctx.r31.s64 + 2524;
	// bl 0x829ff648
	ctx.lr = 0x827D6A84;
	sub_829FF648(ctx, base);
	// addi r3,r31,2516
	ctx.r3.s64 = ctx.r31.s64 + 2516;
	// bl 0x829ff648
	ctx.lr = 0x827D6A8C;
	sub_829FF648(ctx, base);
	// lwz r3,2512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6ad4
	if (ctx.cr6.eq) goto loc_827D6AD4;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6A9C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6a9c
	if (!ctx.cr0.eq) goto loc_827D6A9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6ad0
	if (!ctx.cr6.eq) goto loc_827D6AD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6AD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6AD0:
	// stw r30,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r30.u32);
loc_827D6AD4:
	// addi r3,r31,2504
	ctx.r3.s64 = ctx.r31.s64 + 2504;
	// bl 0x829ff648
	ctx.lr = 0x827D6ADC;
	sub_829FF648(ctx, base);
	// addi r3,r31,2496
	ctx.r3.s64 = ctx.r31.s64 + 2496;
	// bl 0x829ff648
	ctx.lr = 0x827D6AE4;
	sub_829FF648(ctx, base);
	// addi r3,r31,2488
	ctx.r3.s64 = ctx.r31.s64 + 2488;
	// bl 0x829ff648
	ctx.lr = 0x827D6AEC;
	sub_829FF648(ctx, base);
	// addi r3,r31,2480
	ctx.r3.s64 = ctx.r31.s64 + 2480;
	// bl 0x829ff648
	ctx.lr = 0x827D6AF4;
	sub_829FF648(ctx, base);
	// lwz r3,2376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2376);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6b3c
	if (ctx.cr6.eq) goto loc_827D6B3C;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6B04:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6b04
	if (!ctx.cr0.eq) goto loc_827D6B04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6b38
	if (!ctx.cr6.eq) goto loc_827D6B38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6B38:
	// stw r30,2376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2376, ctx.r30.u32);
loc_827D6B3C:
	// addi r3,r31,2368
	ctx.r3.s64 = ctx.r31.s64 + 2368;
	// bl 0x829ff648
	ctx.lr = 0x827D6B44;
	sub_829FF648(ctx, base);
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x829ff648
	ctx.lr = 0x827D6B4C;
	sub_829FF648(ctx, base);
	// lwz r3,2356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6b94
	if (ctx.cr6.eq) goto loc_827D6B94;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6B5C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6b5c
	if (!ctx.cr0.eq) goto loc_827D6B5C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6b90
	if (!ctx.cr6.eq) goto loc_827D6B90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6B90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6B90:
	// stw r30,2356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2356, ctx.r30.u32);
loc_827D6B94:
	// addi r3,r31,2348
	ctx.r3.s64 = ctx.r31.s64 + 2348;
	// bl 0x829ff648
	ctx.lr = 0x827D6B9C;
	sub_829FF648(ctx, base);
	// addi r3,r31,2340
	ctx.r3.s64 = ctx.r31.s64 + 2340;
	// bl 0x829ff648
	ctx.lr = 0x827D6BA4;
	sub_829FF648(ctx, base);
	// lwz r3,2336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6bec
	if (ctx.cr6.eq) goto loc_827D6BEC;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6BB4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6bb4
	if (!ctx.cr0.eq) goto loc_827D6BB4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6be8
	if (!ctx.cr6.eq) goto loc_827D6BE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6BE8:
	// stw r30,2336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2336, ctx.r30.u32);
loc_827D6BEC:
	// addi r3,r31,2328
	ctx.r3.s64 = ctx.r31.s64 + 2328;
	// bl 0x829ff648
	ctx.lr = 0x827D6BF4;
	sub_829FF648(ctx, base);
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x829ff648
	ctx.lr = 0x827D6BFC;
	sub_829FF648(ctx, base);
	// addi r3,r31,2004
	ctx.r3.s64 = ctx.r31.s64 + 2004;
	// bl 0x829ff648
	ctx.lr = 0x827D6C04;
	sub_829FF648(ctx, base);
	// addi r3,r31,1996
	ctx.r3.s64 = ctx.r31.s64 + 1996;
	// bl 0x829ff648
	ctx.lr = 0x827D6C0C;
	sub_829FF648(ctx, base);
	// lwz r3,1992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1992);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d6c54
	if (ctx.cr6.eq) goto loc_827D6C54;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
loc_827D6C1C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d6c1c
	if (!ctx.cr0.eq) goto loc_827D6C1C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d6c50
	if (!ctx.cr6.eq) goto loc_827D6C50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6C50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6C50:
	// stw r30,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r30.u32);
loc_827D6C54:
	// addi r3,r31,1984
	ctx.r3.s64 = ctx.r31.s64 + 1984;
	// bl 0x829ff648
	ctx.lr = 0x827D6C5C;
	sub_829FF648(ctx, base);
	// addi r30,r31,1984
	ctx.r30.s64 = ctx.r31.s64 + 1984;
	// li r29,1
	ctx.r29.s64 = 1;
loc_827D6C64:
	// addi r30,r30,-576
	ctx.r30.s64 = ctx.r30.s64 + -576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827d69a0
	ctx.lr = 0x827D6C70;
	sub_827D69A0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x827d6c64
	if (!ctx.cr0.lt) goto loc_827D6C64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,30104
	ctx.r10.s64 = ctx.r11.s64 + 30104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6C8C"))) PPC_WEAK_FUNC(sub_827D6C8C);
PPC_FUNC_IMPL(__imp__sub_827D6C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6C90"))) PPC_WEAK_FUNC(sub_827D6C90);
PPC_FUNC_IMPL(__imp__sub_827D6C90) {
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
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D6CB4;
	sub_829FF648(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x829ff648
	ctx.lr = 0x827D6CBC;
	sub_829FF648(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x829ff648
	ctx.lr = 0x827D6CC4;
	sub_829FF648(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,30104
	ctx.r9.s64 = ctx.r11.s64 + 30104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827d6ce8
	if (ctx.cr6.eq) goto loc_827D6CE8;
	// bl 0x8221be68
	ctx.lr = 0x827D6CE4;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6CE8:
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

__attribute__((alias("__imp__sub_827D6D00"))) PPC_WEAK_FUNC(sub_827D6D00);
PPC_FUNC_IMPL(__imp__sub_827D6D00) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,30104
	ctx.r9.s64 = ctx.r11.s64 + 30104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x827d6d34
	if (ctx.cr6.eq) goto loc_827D6D34;
	// bl 0x8221be68
	ctx.lr = 0x827D6D30;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6D34:
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

__attribute__((alias("__imp__sub_827D6D48"))) PPC_WEAK_FUNC(sub_827D6D48);
PPC_FUNC_IMPL(__imp__sub_827D6D48) {
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x829ff648
	ctx.lr = 0x827D6D6C;
	sub_829FF648(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// addi r9,r11,30104
	ctx.r9.s64 = ctx.r11.s64 + 30104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x827d6d90
	if (ctx.cr6.eq) goto loc_827D6D90;
	// bl 0x8221be68
	ctx.lr = 0x827D6D8C;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6D90:
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

__attribute__((alias("__imp__sub_827D6DA8"))) PPC_WEAK_FUNC(sub_827D6DA8);
PPC_FUNC_IMPL(__imp__sub_827D6DA8) {
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
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82214f08
	ctx.lr = 0x827D6DCC;
	sub_82214F08(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828581b0
	ctx.lr = 0x827D6DD4;
	sub_828581B0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8221be68
	ctx.lr = 0x827D6DDC;
	sub_8221BE68(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29424
	ctx.r9.s64 = ctx.r11.s64 + -29424;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d6e08
	if (ctx.cr6.eq) goto loc_827D6E08;
	// bl 0x8221be68
	ctx.lr = 0x827D6E04;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D6E08:
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

__attribute__((alias("__imp__sub_827D6E20"))) PPC_WEAK_FUNC(sub_827D6E20);
PPC_FUNC_IMPL(__imp__sub_827D6E20) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e7120
	ctx.lr = 0x827D6E3C;
	sub_821E7120(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d6e70
	if (ctx.cr6.eq) goto loc_827D6E70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D6E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6E70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D6E78;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_827D6E8C"))) PPC_WEAK_FUNC(sub_827D6E8C);
PPC_FUNC_IMPL(__imp__sub_827D6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D6E90"))) PPC_WEAK_FUNC(sub_827D6E90);
PPC_FUNC_IMPL(__imp__sub_827D6E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D6E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6EBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D6ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// blt cr6,0x827d6ee4
	if (ctx.cr6.lt) goto loc_827D6EE4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827D6EE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff648
	ctx.lr = 0x827D6EEC;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x827D6EF4;
	sub_829FF648(ctx, base);
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D6F00"))) PPC_WEAK_FUNC(sub_827D6F00);
PPC_FUNC_IMPL(__imp__sub_827D6F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D6F08;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d7010
	ctx.lr = 0x827D6F34;
	sub_827D7010(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e7120
	ctx.lr = 0x827D6F40;
	sub_821E7120(ctx, base);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827d6fc8
	if (ctx.cr6.eq) goto loc_827D6FC8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82461990
	ctx.lr = 0x827D6F6C;
	sub_82461990(ctx, base);
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,28304
	ctx.r4.s64 = ctx.r10.s64 + 28304;
	// bl 0x827d7f00
	ctx.lr = 0x827D6F7C;
	sub_827D7F00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e7120
	ctx.lr = 0x827D6F88;
	sub_821E7120(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827d6fbc
	if (ctx.cr6.eq) goto loc_827D6FBC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D6FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D6FBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D6FC4;
	sub_829FF648(ctx, base);
	// b 0x827d6ff8
	goto loc_827D6FF8;
loc_827D6FC8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D6FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82461990
	ctx.lr = 0x827D6FF8;
	sub_82461990(ctx, base);
loc_827D6FF8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D7000;
	sub_829FF648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff648
	ctx.lr = 0x827D7008;
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7010"))) PPC_WEAK_FUNC(sub_827D7010);
PPC_FUNC_IMPL(__imp__sub_827D7010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D7018;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x821e7120
	ctx.lr = 0x827D7034;
	sub_821E7120(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d7074
	if (ctx.cr6.eq) goto loc_827D7074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x827d7074
	if (!ctx.cr6.eq) goto loc_827D7074;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_827D7074:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D707C;
	sub_829FF648(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r28,12
	ctx.r29.s64 = ctx.r28.s64 + 12;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_827D7094:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827d70a8
	if (ctx.cr6.eq) goto loc_827D70A8;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827d70ac
	if (ctx.cr6.eq) goto loc_827D70AC;
loc_827D70A8:
	// twi 31,r0,22
loc_827D70AC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827d716c
	if (ctx.cr6.eq) goto loc_827D716C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827d70c0
	if (!ctx.cr6.eq) goto loc_827D70C0;
	// twi 31,r0,22
loc_827D70C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d70d0
	if (!ctx.cr6.eq) goto loc_827D70D0;
	// twi 31,r0,22
loc_827D70D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// beq cr6,0x827d7104
	if (ctx.cr6.eq) goto loc_827D7104;
loc_827D70E8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d70e8
	if (!ctx.cr0.eq) goto loc_827D70E8;
loc_827D7104:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x827d7148
	if (!ctx.cr6.eq) goto loc_827D7148;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828580f8
	ctx.lr = 0x827D712C;
	sub_828580F8(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x829ff648
	ctx.lr = 0x827D7144;
	sub_829FF648(ctx, base);
	// b 0x827d7094
	goto loc_827D7094;
loc_827D7148:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d7158
	if (!ctx.cr6.eq) goto loc_827D7158;
	// twi 31,r0,22
loc_827D7158:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x829ff648
	ctx.lr = 0x827D7168;
	sub_829FF648(ctx, base);
	// b 0x827d7094
	goto loc_827D7094;
loc_827D716C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d71a8
	if (ctx.cr6.eq) goto loc_827D71A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e7120
	ctx.lr = 0x827D7184;
	sub_821E7120(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d71a0
	if (ctx.cr6.eq) goto loc_827D71A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D71A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D71A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D71A8;
	sub_829FF648(ctx, base);
loc_827D71A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D71B0"))) PPC_WEAK_FUNC(sub_827D71B0);
PPC_FUNC_IMPL(__imp__sub_827D71B0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d71fc
	if (ctx.cr6.eq) goto loc_827D71FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r30,115
	ctx.r5.s64 = ctx.r30.s64 + 115;
	// addi r4,r11,29936
	ctx.r4.s64 = ctx.r11.s64 + 29936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239cc58
	ctx.lr = 0x827D71E8;
	sub_8239CC58(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r5,r30,116
	ctx.r5.s64 = ctx.r30.s64 + 116;
	// addi r4,r10,29964
	ctx.r4.s64 = ctx.r10.s64 + 29964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239cc58
	ctx.lr = 0x827D71FC;
	sub_8239CC58(ctx, base);
loc_827D71FC:
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

__attribute__((alias("__imp__sub_827D7214"))) PPC_WEAK_FUNC(sub_827D7214);
PPC_FUNC_IMPL(__imp__sub_827D7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D7218"))) PPC_WEAK_FUNC(sub_827D7218);
PPC_FUNC_IMPL(__imp__sub_827D7218) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82392c88
	ctx.lr = 0x827D723C;
	sub_82392C88(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827d7520
	if (ctx.cr6.eq) goto loc_827D7520;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827d72b4
	if (ctx.cr6.eq) goto loc_827D72B4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827d72b4
	if (!ctx.cr6.eq) goto loc_827D72B4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	ctx.lr = 0x827D7260;
	sub_8221F388(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7288
	if (ctx.cr6.eq) goto loc_827D7288;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,30176
	ctx.r8.s64 = ctx.r9.s64 + 30176;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x827d728c
	goto loc_827D728C;
loc_827D7288:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D728C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d72a8
	if (ctx.cr6.eq) goto loc_827D72A8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x827D72A0;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d7590
	goto loc_827D7590;
loc_827D72A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x827d7590
	goto loc_827D7590;
loc_827D72B4:
	// lis r11,-31924
	ctx.r11.s64 = -2092171264;
	// lbz r10,115(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 115);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lbz r9,-6018(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6018);
	// beq cr6,0x827d72dc
	if (ctx.cr6.eq) goto loc_827D72DC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x827d72e0
	if (ctx.cr6.eq) goto loc_827D72E0;
loc_827D72DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D72E0:
	// lbz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827d7300
	if (!ctx.cr6.eq) goto loc_827D7300;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x827d7304
	if (ctx.cr6.eq) goto loc_827D7304;
loc_827D7300:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D7304:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d735c
	if (ctx.cr6.eq) goto loc_827D735C;
	// li r3,2640
	ctx.r3.s64 = 2640;
	// bl 0x8221f388
	ctx.lr = 0x827D731C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7330
	if (ctx.cr6.eq) goto loc_827D7330;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x827d67e8
	ctx.lr = 0x827D732C;
	sub_827D67E8(ctx, base);
	// b 0x827d7334
	goto loc_827D7334;
loc_827D7330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827D7334:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7350
	if (ctx.cr6.eq) goto loc_827D7350;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x827D7348;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d7590
	goto loc_827D7590;
loc_827D7350:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// b 0x827d7590
	goto loc_827D7590;
loc_827D735C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d743c
	if (ctx.cr6.eq) goto loc_827D743C;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x8221f388
	ctx.lr = 0x827D7370;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7410
	if (ctx.cr6.eq) goto loc_827D7410;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r9,11528
	ctx.r7.s64 = ctx.r9.s64 + 11528;
	// li r6,112
	ctx.r6.s64 = 112;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r31.u32);
	// stw r31,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r31.u32);
	// stw r31,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stw r31,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r31.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stvx128 v0,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x827d7414
	goto loc_827D7414;
loc_827D7410:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D7414:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7430
	if (ctx.cr6.eq) goto loc_827D7430;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c780
	ctx.lr = 0x827D7428;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d7590
	goto loc_827D7590;
loc_827D7430:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// b 0x827d7590
	goto loc_827D7590;
loc_827D743C:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8221f388
	ctx.lr = 0x827D7444;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d74f4
	if (ctx.cr6.eq) goto loc_827D74F4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r8,30212
	ctx.r7.s64 = ctx.r8.s64 + 30212;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r31.u32);
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// stw r31,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r31.u32);
	// stw r31,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r31.u32);
	// stw r31,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r31.u32);
	// stw r31,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r31.u32);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// stw r31,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r31.u32);
	// stw r31,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r31.u32);
	// stw r31,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r31.u32);
	// stw r31,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r31.u32);
	// stw r31,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r31.u32);
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// stw r31,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r31.u32);
	// stw r31,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r31.u32);
	// stw r31,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r31.u32);
	// stw r31,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r31.u32);
	// stw r31,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r31.u32);
	// stw r31,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r31.u32);
	// b 0x827d74f8
	goto loc_827D74F8;
loc_827D74F4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D74F8:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7514
	if (ctx.cr6.eq) goto loc_827D7514;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8254c780
	ctx.lr = 0x827D750C;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d7590
	goto loc_827D7590;
loc_827D7514:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// b 0x827d7590
	goto loc_827D7590;
loc_827D7520:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x827D7528;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq cr6,0x827d7568
	if (ctx.cr6.eq) goto loc_827D7568;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,9244
	ctx.r8.s64 = ctx.r9.s64 + 9244;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// b 0x827d756c
	goto loc_827D756C;
loc_827D7568:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D756C:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7588
	if (ctx.cr6.eq) goto loc_827D7588;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254c780
	ctx.lr = 0x827D7580;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d7590
	goto loc_827D7590;
loc_827D7588:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
loc_827D7590:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7598;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_827D75B0"))) PPC_WEAK_FUNC(sub_827D75B0);
PPC_FUNC_IMPL(__imp__sub_827D75B0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e7120
	ctx.lr = 0x827D75D0;
	sub_821E7120(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d75ec
	if (ctx.cr6.eq) goto loc_827D75EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D75EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D75EC:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x828581b0
	ctx.lr = 0x827D75F4;
	sub_828581B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D75FC;
	sub_829FF648(ctx, base);
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

__attribute__((alias("__imp__sub_827D7610"))) PPC_WEAK_FUNC(sub_827D7610);
PPC_FUNC_IMPL(__imp__sub_827D7610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D7618;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d77c4
	if (ctx.cr6.eq) goto loc_827D77C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x821e7120
	ctx.lr = 0x827D7640;
	sub_821E7120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d767c
	if (ctx.cr6.eq) goto loc_827D767C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x821e7120
	ctx.lr = 0x827D765C;
	sub_821E7120(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x827d7680
	if (ctx.cr6.eq) goto loc_827D7680;
loc_827D767C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D7680:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d769c
	if (ctx.cr6.eq) goto loc_827D769C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x829ff648
	ctx.lr = 0x827D769C;
	sub_829FF648(ctx, base);
loc_827D769C:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d76b0
	if (ctx.cr6.eq) goto loc_827D76B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D76B0;
	sub_829FF648(ctx, base);
loc_827D76B0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d77d0
	if (ctx.cr6.eq) goto loc_827D77D0;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827d76d4
	if (ctx.cr6.lt) goto loc_827D76D4;
	// beq cr6,0x827d7708
	if (ctx.cr6.eq) goto loc_827D7708;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x827d77d0
	if (!ctx.cr6.lt) goto loc_827D77D0;
loc_827D76D4:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8221f388
	ctx.lr = 0x827D76DC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7780
	if (ctx.cr6.eq) goto loc_827D7780;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,30264
	ctx.r8.s64 = ctx.r9.s64 + 30264;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// b 0x827d7784
	goto loc_827D7784;
loc_827D7708:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D7710;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d773c
	if (ctx.cr6.eq) goto loc_827D773C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,30336
	ctx.r8.s64 = ctx.r9.s64 + 30336;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// b 0x827d7740
	goto loc_827D7740;
loc_827D773C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D7740:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7768
	if (ctx.cr6.eq) goto loc_827D7768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x827D7754;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7760;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7768:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7778;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7780:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827D7784:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d77ac
	if (ctx.cr6.eq) goto loc_827D77AC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c780
	ctx.lr = 0x827D7798;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D77A4;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D77AC:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D77BC;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D77C4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d7010
	ctx.lr = 0x827D77D0;
	sub_827D7010(ctx, base);
loc_827D77D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D77D8"))) PPC_WEAK_FUNC(sub_827D77D8);
PPC_FUNC_IMPL(__imp__sub_827D77D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D77E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827d792c
	if (!ctx.cr6.eq) goto loc_827D792C;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7920
	if (ctx.cr6.eq) goto loc_827D7920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x821e7120
	ctx.lr = 0x827D7814;
	sub_821E7120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7850
	if (ctx.cr6.eq) goto loc_827D7850;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,3
	ctx.r30.s64 = 3;
	// bl 0x821e7120
	ctx.lr = 0x827D7830;
	sub_821E7120(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// beq cr6,0x827d7854
	if (ctx.cr6.eq) goto loc_827D7854;
loc_827D7850:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D7854:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d7870
	if (ctx.cr6.eq) goto loc_827D7870;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x829ff648
	ctx.lr = 0x827D7870;
	sub_829FF648(ctx, base);
loc_827D7870:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d7884
	if (ctx.cr6.eq) goto loc_827D7884;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D7884;
	sub_829FF648(ctx, base);
loc_827D7884:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d792c
	if (ctx.cr6.eq) goto loc_827D792C;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8221f388
	ctx.lr = 0x827D7898;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d78dc
	if (ctx.cr6.eq) goto loc_827D78DC;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r31.u8);
	// addi r7,r9,30140
	ctx.r7.s64 = ctx.r9.s64 + 30140;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lfs f0,-27468(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stb r31,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r31.u8);
	// b 0x827d78e0
	goto loc_827D78E0;
loc_827D78DC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D78E0:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7908
	if (ctx.cr6.eq) goto loc_827D7908;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x827D78F4;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7900;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7908:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7918;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7920:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827d7010
	ctx.lr = 0x827D792C;
	sub_827D7010(ctx, base);
loc_827D792C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7934"))) PPC_WEAK_FUNC(sub_827D7934);
PPC_FUNC_IMPL(__imp__sub_827D7934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D7938"))) PPC_WEAK_FUNC(sub_827D7938);
PPC_FUNC_IMPL(__imp__sub_827D7938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D7940;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7a60
	if (ctx.cr6.eq) goto loc_827D7A60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x821e7120
	ctx.lr = 0x827D7968;
	sub_821E7120(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d79a4
	if (ctx.cr6.eq) goto loc_827D79A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x821e7120
	ctx.lr = 0x827D7984;
	sub_821E7120(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D7998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x827d79a8
	if (ctx.cr6.eq) goto loc_827D79A8;
loc_827D79A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D79A8:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827d79c4
	if (ctx.cr6.eq) goto loc_827D79C4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x829ff648
	ctx.lr = 0x827D79C4;
	sub_829FF648(ctx, base);
loc_827D79C4:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d79d8
	if (ctx.cr6.eq) goto loc_827D79D8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D79D8;
	sub_829FF648(ctx, base);
loc_827D79D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7a6c
	if (ctx.cr6.eq) goto loc_827D7A6C;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827d7a6c
	if (!ctx.cr6.eq) goto loc_827D7A6C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8221f388
	ctx.lr = 0x827D79F8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7a1c
	if (ctx.cr6.eq) goto loc_827D7A1C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r9,30300
	ctx.r8.s64 = ctx.r9.s64 + 30300;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x827d7a20
	goto loc_827D7A20;
loc_827D7A1C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827D7A20:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7a48
	if (ctx.cr6.eq) goto loc_827D7A48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c780
	ctx.lr = 0x827D7A34;
	sub_8254C780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7A40;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7A48:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827d6f00
	ctx.lr = 0x827D7A58;
	sub_827D6F00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827D7A60:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x827d7010
	ctx.lr = 0x827D7A6C;
	sub_827D7010(ctx, base);
loc_827D7A6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7A74"))) PPC_WEAK_FUNC(sub_827D7A74);
PPC_FUNC_IMPL(__imp__sub_827D7A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D7A78"))) PPC_WEAK_FUNC(sub_827D7A78);
PPC_FUNC_IMPL(__imp__sub_827D7A78) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29984
	ctx.r30.s64 = ctx.r11.s64 + 29984;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827D7AA8;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827d81c0
	ctx.lr = 0x827D7AB4;
	sub_827D81C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7ABC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,29996
	ctx.r4.s64 = ctx.r10.s64 + 29996;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D7AD0;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D7AE0;
	sub_8222CF18(ctx, base);
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r9,30224
	ctx.r6.s64 = ctx.r9.s64 + 30224;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x827d8408
	ctx.lr = 0x827D7AF8;
	sub_827D8408(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7B00;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D7B08;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r8,30008
	ctx.r4.s64 = ctx.r8.s64 + 30008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D7B1C;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D7B2C;
	sub_8222CF18(ctx, base);
	// lis r7,-32131
	ctx.r7.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r7,30680
	ctx.r6.s64 = ctx.r7.s64 + 30680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827d8408
	ctx.lr = 0x827D7B44;
	sub_827D8408(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D7B4C;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7B54;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r6,30020
	ctx.r4.s64 = ctx.r6.s64 + 30020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D7B68;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D7B78;
	sub_8222CF18(ctx, base);
	// lis r4,-32131
	ctx.r4.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r4,31824
	ctx.r6.s64 = ctx.r4.s64 + 31824;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827d8608
	ctx.lr = 0x827D7B90;
	sub_827D8608(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D7B98;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7BA0;
	sub_82214F08(ctx, base);
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r3,30048
	ctx.r4.s64 = ctx.r3.s64 + 30048;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D7BB4;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D7BC4;
	sub_8222CF18(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,32176
	ctx.r6.s64 = ctx.r11.s64 + 32176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x827d8810
	ctx.lr = 0x827D7BDC;
	sub_827D8810(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D7BE4;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7BEC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,30076
	ctx.r4.s64 = ctx.r10.s64 + 30076;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D7C00;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827D7C10;
	sub_8222CF18(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,28920
	ctx.r6.s64 = ctx.r9.s64 + 28920;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d8a18
	ctx.lr = 0x827D7C28;
	sub_827D8A18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827D7C30;
	sub_82214F08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D7C38;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827D7C50"))) PPC_WEAK_FUNC(sub_827D7C50);
PPC_FUNC_IMPL(__imp__sub_827D7C50) {
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
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x82265160
	ctx.lr = 0x827D7C6C;
	sub_82265160(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r10.u8);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r9,11,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d7d7c
	if (ctx.cr6.eq) goto loc_827D7D7C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d7cb8
	if (ctx.cr6.eq) goto loc_827D7CB8;
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7d80
	goto loc_827D7D80;
loc_827D7CB8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d7d24
	if (!ctx.cr0.gt) goto loc_827D7D24;
loc_827D7CD4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d7cf4
	if (ctx.cr6.lt) goto loc_827D7CF4;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_827D7CF4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d7d10
	if (ctx.cr6.eq) goto loc_827D7D10;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d7d18
	goto loc_827D7D18;
loc_827D7D10:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D7D18:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d7cd4
	if (ctx.cr6.gt) goto loc_827D7CD4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D7D24:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d7d68
	if (ctx.cr6.eq) goto loc_827D7D68;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d7d40
	if (ctx.cr6.gt) goto loc_827D7D40;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827D7D40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d7d68
	if (!ctx.cr6.eq) goto loc_827D7D68;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7d80
	goto loc_827D7D80;
loc_827D7D68:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7d80
	goto loc_827D7D80;
loc_827D7D7C:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827D7D80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7d98
	if (ctx.cr6.eq) goto loc_827D7D98;
	// bl 0x823f23b0
	ctx.lr = 0x827D7D90;
	sub_823F23B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d6e20
	ctx.lr = 0x827D7D98;
	sub_827D6E20(ctx, base);
loc_827D7D98:
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

__attribute__((alias("__imp__sub_827D7DAC"))) PPC_WEAK_FUNC(sub_827D7DAC);
PPC_FUNC_IMPL(__imp__sub_827D7DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D7DB0"))) PPC_WEAK_FUNC(sub_827D7DB0);
PPC_FUNC_IMPL(__imp__sub_827D7DB0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r3,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r3.u8);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d7ed0
	if (ctx.cr6.eq) goto loc_827D7ED0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d7e0c
	if (ctx.cr6.eq) goto loc_827D7E0C;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7ed4
	goto loc_827D7ED4;
loc_827D7E0C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d7e78
	if (!ctx.cr0.gt) goto loc_827D7E78;
loc_827D7E28:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d7e48
	if (ctx.cr6.lt) goto loc_827D7E48;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_827D7E48:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d7e64
	if (ctx.cr6.eq) goto loc_827D7E64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d7e6c
	goto loc_827D7E6C;
loc_827D7E64:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D7E6C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d7e28
	if (ctx.cr6.gt) goto loc_827D7E28;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D7E78:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d7ebc
	if (ctx.cr6.eq) goto loc_827D7EBC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d7e94
	if (ctx.cr6.gt) goto loc_827D7E94;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827D7E94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d7ebc
	if (!ctx.cr6.eq) goto loc_827D7EBC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7ed4
	goto loc_827D7ED4;
loc_827D7EBC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d7ed4
	goto loc_827D7ED4;
loc_827D7ED0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827D7ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7eec
	if (ctx.cr6.eq) goto loc_827D7EEC;
	// bl 0x823f23b0
	ctx.lr = 0x827D7EE4;
	sub_823F23B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d6e20
	ctx.lr = 0x827D7EEC;
	sub_827D6E20(ctx, base);
loc_827D7EEC:
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

__attribute__((alias("__imp__sub_827D7F00"))) PPC_WEAK_FUNC(sub_827D7F00);
PPC_FUNC_IMPL(__imp__sub_827D7F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D7F08;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// addi r27,r11,28304
	ctx.r27.s64 = ctx.r11.s64 + 28304;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x827d81b8
	if (ctx.cr6.lt) goto loc_827D81B8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D7F2C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d7f38
	if (ctx.cr6.eq) goto loc_827D7F38;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_827D7F38:
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d7f44
	if (ctx.cr0.eq) goto loc_827D7F44;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_827D7F44:
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r29,25
	ctx.r29.s64 = 25;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
	// lis r28,-31927
	ctx.r28.s64 = -2092367872;
loc_827D7F5C:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f3f0
	ctx.lr = 0x827D7F64;
	sub_8221F3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x827d7f94
	if (!ctx.cr6.eq) goto loc_827D7F94;
	// lwz r11,28060(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d7f8c
	if (ctx.cr6.eq) goto loc_827D7F8C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D7F8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D7F8C:
	// bl 0x82cbbb58
	ctx.lr = 0x827D7F90;
	sub_82CBBB58(ctx, base);
	// b 0x827d7f98
	goto loc_827D7F98;
loc_827D7F94:
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
loc_827D7F98:
	// addic. r11,r30,4
	ctx.xer.ca = ctx.r30.u32 > 4294967291;
	ctx.r11.s64 = ctx.r30.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827d7fa4
	if (ctx.cr0.eq) goto loc_827D7FA4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_827D7FA4:
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bge 0x827d7f5c
	if (!ctx.cr0.lt) goto loc_827D7F5C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d80e8
	if (ctx.cr6.eq) goto loc_827D80E8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_827D7FD8:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827d7fec
	if (!ctx.cr6.eq) goto loc_827D7FEC;
	// twi 31,r0,22
loc_827D7FEC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a0f290
	ctx.lr = 0x827D8024;
	sub_82A0F290(ctx, base);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d809c
	if (ctx.cr6.eq) goto loc_827D809C;
	// addi r31,r1,136
	ctx.r31.s64 = ctx.r1.s64 + 136;
loc_827D8034:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8080
	if (ctx.cr6.eq) goto loc_827D8080;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x827d90c0
	ctx.lr = 0x827D8050;
	sub_827D90C0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x827d8034
	if (ctx.cr6.lt) goto loc_827D8034;
loc_827D8080:
	// cmplwi cr6,r30,25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 25, ctx.xer);
	// bne cr6,0x827d809c
	if (!ctx.cr6.eq) goto loc_827D809C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x827d90c0
	ctx.lr = 0x827D8098;
	sub_827D90C0(ctx, base);
	// b 0x827d80dc
	goto loc_827D80DC;
loc_827D809C:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne cr6,0x827d80dc
	if (!ctx.cr6.eq) goto loc_827D80DC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_827D80DC:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d7fd8
	if (!ctx.cr6.eq) goto loc_827D7FD8;
loc_827D80E8:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x827d8114
	if (!ctx.cr6.gt) goto loc_827D8114;
	// addi r31,r1,140
	ctx.r31.s64 = ctx.r1.s64 + 140;
	// addi r30,r29,-1
	ctx.r30.s64 = ctx.r29.s64 + -1;
loc_827D80F8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827d90c0
	ctx.lr = 0x827D8108;
	sub_827D90C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x827d80f8
	if (!ctx.cr0.eq) goto loc_827D80F8;
loc_827D8114:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x827d8180
	if (ctx.cr6.eq) goto loc_827D8180;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d8180
	if (ctx.cr6.eq) goto loc_827D8180;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82a0f290
	ctx.lr = 0x827D8180;
	sub_82A0F290(ctx, base);
loc_827D8180:
	// li r30,25
	ctx.r30.s64 = 25;
	// addi r31,r1,444
	ctx.r31.s64 = ctx.r1.s64 + 444;
loc_827D8188:
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x828581b0
	ctx.lr = 0x827D8194;
	sub_828581B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8221be68
	ctx.lr = 0x827D819C;
	sub_8221BE68(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// bge 0x827d8188
	if (!ctx.cr0.lt) goto loc_827D8188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828581b0
	ctx.lr = 0x827D81B0;
	sub_828581B0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8221be68
	ctx.lr = 0x827D81B8;
	sub_8221BE68(ctx, base);
loc_827D81B8:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D81C0"))) PPC_WEAK_FUNC(sub_827D81C0);
PPC_FUNC_IMPL(__imp__sub_827D81C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827D81C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d81e8
	if (!ctx.cr6.eq) goto loc_827D81E8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x827d81ec
	goto loc_827D81EC;
loc_827D81E8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D81EC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D81FC;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x827D820C;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D8214;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x827D821C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d8264
	if (ctx.cr6.eq) goto loc_827D8264;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x827D823C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d8268
	if (ctx.cr6.eq) goto loc_827D8268;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d826c
	goto loc_827D826C;
loc_827D8264:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D8268:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D826C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d8370
	if (ctx.cr6.eq) goto loc_827D8370;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x827D828C;
	sub_82229208(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-29664
	ctx.r30.s64 = ctx.r11.s64 + -29664;
	// bl 0x822279a0
	ctx.lr = 0x827D82A0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D82C0;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x827D82D8;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D82E8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x827D8308;
	sub_82229208(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-26232
	ctx.r31.s64 = ctx.r11.s64 + -26232;
	// bl 0x822279a0
	ctx.lr = 0x827D831C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D833C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x827D8354;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D8364;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_827D8370:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x827d839c
	if (ctx.cr6.eq) goto loc_827D839C;
loc_827D8380:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d8380
	if (!ctx.cr0.eq) goto loc_827D8380;
loc_827D839C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D83AC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D83B4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827d83f8
	if (ctx.cr6.eq) goto loc_827D83F8;
loc_827D83BC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d83bc
	if (!ctx.cr0.eq) goto loc_827D83BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d83f8
	if (!ctx.cr6.eq) goto loc_827D83F8;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D83F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D83F8;
	sub_8221BE68(ctx, base);
loc_827D83F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D8400;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8408"))) PPC_WEAK_FUNC(sub_827D8408);
PPC_FUNC_IMPL(__imp__sub_827D8408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D8410;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r27,r10,63
	ctx.r27.s64 = ctx.r10.s64 + 63;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8440
	if (ctx.cr6.eq) goto loc_827D8440;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D8440:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D8450;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D8460;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D8468;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D8470;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d84d4
	if (ctx.cr6.eq) goto loc_827D84D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D84A0;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D84AC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d84d8
	if (ctx.cr6.eq) goto loc_827D84D8;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d84dc
	goto loc_827D84DC;
loc_827D84D4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D84D8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D84DC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d84f0
	if (ctx.cr6.eq) goto loc_827D84F0;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D84F0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8570
	if (ctx.cr6.eq) goto loc_827D8570;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D8510;
	sub_82229208(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-29600
	ctx.r30.s64 = ctx.r11.s64 + -29600;
	// bl 0x822279a0
	ctx.lr = 0x827D8524;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,15664
	ctx.r4.s64 = ctx.r10.s64 + 15664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D8544;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D8554;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D8564;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D8570:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d859c
	if (ctx.cr6.eq) goto loc_827D859C;
loc_827D8580:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d8580
	if (!ctx.cr0.eq) goto loc_827D8580;
loc_827D859C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D85AC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D85B4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d85f8
	if (ctx.cr6.eq) goto loc_827D85F8;
loc_827D85BC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d85bc
	if (!ctx.cr0.eq) goto loc_827D85BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d85f8
	if (!ctx.cr6.eq) goto loc_827D85F8;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D85F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D85F8;
	sub_8221BE68(ctx, base);
loc_827D85F8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D8600;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8608"))) PPC_WEAK_FUNC(sub_827D8608);
PPC_FUNC_IMPL(__imp__sub_827D8608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D8610;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,31824
	ctx.r29.s64 = ctx.r10.s64 + 31824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d8644
	if (ctx.cr6.eq) goto loc_827D8644;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D8644:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D8654;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D8664;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D866C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D8674;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d86d8
	if (ctx.cr6.eq) goto loc_827D86D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D86A4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D86B0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d86dc
	if (ctx.cr6.eq) goto loc_827D86DC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d86e0
	goto loc_827D86E0;
loc_827D86D8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D86DC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D86E0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d86f4
	if (ctx.cr6.eq) goto loc_827D86F4;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D86F4:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8774
	if (ctx.cr6.eq) goto loc_827D8774;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D8714;
	sub_82229208(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-29600
	ctx.r30.s64 = ctx.r11.s64 + -29600;
	// bl 0x822279a0
	ctx.lr = 0x827D8728;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32133
	ctx.r10.s64 = -2105868288;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-12384
	ctx.r4.s64 = ctx.r10.s64 + -12384;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D8748;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D8758;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D8768;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D8774:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d87a0
	if (ctx.cr6.eq) goto loc_827D87A0;
loc_827D8784:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d8784
	if (!ctx.cr0.eq) goto loc_827D8784;
loc_827D87A0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D87B0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D87B8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d87fc
	if (ctx.cr6.eq) goto loc_827D87FC;
loc_827D87C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d87c0
	if (!ctx.cr0.eq) goto loc_827D87C0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d87fc
	if (!ctx.cr6.eq) goto loc_827D87FC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D87F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D87FC;
	sub_8221BE68(ctx, base);
loc_827D87FC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D8804;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D880C"))) PPC_WEAK_FUNC(sub_827D880C);
PPC_FUNC_IMPL(__imp__sub_827D880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D8810"))) PPC_WEAK_FUNC(sub_827D8810);
PPC_FUNC_IMPL(__imp__sub_827D8810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D8818;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,32176
	ctx.r29.s64 = ctx.r10.s64 + 32176;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d884c
	if (ctx.cr6.eq) goto loc_827D884C;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D884C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D885C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D886C;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D8874;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D887C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d88e0
	if (ctx.cr6.eq) goto loc_827D88E0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D88AC;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D88B8;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d88e4
	if (ctx.cr6.eq) goto loc_827D88E4;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d88e8
	goto loc_827D88E8;
loc_827D88E0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D88E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D88E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d88fc
	if (ctx.cr6.eq) goto loc_827D88FC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D88FC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d897c
	if (ctx.cr6.eq) goto loc_827D897C;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D891C;
	sub_82229208(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-29224
	ctx.r30.s64 = ctx.r11.s64 + -29224;
	// bl 0x822279a0
	ctx.lr = 0x827D8930;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-2704
	ctx.r4.s64 = ctx.r10.s64 + -2704;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D8950;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D8960;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D8970;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D897C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d89a8
	if (ctx.cr6.eq) goto loc_827D89A8;
loc_827D898C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d898c
	if (!ctx.cr0.eq) goto loc_827D898C;
loc_827D89A8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D89B8;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D89C0;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d8a04
	if (ctx.cr6.eq) goto loc_827D8A04;
loc_827D89C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d89c8
	if (!ctx.cr0.eq) goto loc_827D89C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d8a04
	if (!ctx.cr6.eq) goto loc_827D8A04;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D89FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D8A04;
	sub_8221BE68(ctx, base);
loc_827D8A04:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D8A0C;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8A14"))) PPC_WEAK_FUNC(sub_827D8A14);
PPC_FUNC_IMPL(__imp__sub_827D8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D8A18"))) PPC_WEAK_FUNC(sub_827D8A18);
PPC_FUNC_IMPL(__imp__sub_827D8A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827D8A20;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,28920
	ctx.r29.s64 = ctx.r10.s64 + 28920;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827d8a54
	if (ctx.cr6.eq) goto loc_827D8A54;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D8A54:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827D8A64;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827D8A74;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D8A7C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827D8A84;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d8ae8
	if (ctx.cr6.eq) goto loc_827D8AE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827D8AB4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D8AC0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d8aec
	if (ctx.cr6.eq) goto loc_827D8AEC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827d8af0
	goto loc_827D8AF0;
loc_827D8AE8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827D8AEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827D8AF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8b04
	if (ctx.cr6.eq) goto loc_827D8B04;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827D8B04:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8b84
	if (ctx.cr6.eq) goto loc_827D8B84;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827D8B24;
	sub_82229208(ctx, base);
	// lis r11,-32130
	ctx.r11.s64 = -2105671680;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,-28872
	ctx.r30.s64 = ctx.r11.s64 + -28872;
	// bl 0x822279a0
	ctx.lr = 0x827D8B38;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-3736
	ctx.r4.s64 = ctx.r10.s64 + -3736;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827D8B58;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827D8B68;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827D8B78;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827D8B84:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827d8bb0
	if (ctx.cr6.eq) goto loc_827D8BB0;
loc_827D8B94:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d8b94
	if (!ctx.cr0.eq) goto loc_827D8B94;
loc_827D8BB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827D8BC0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827D8BC8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827d8c0c
	if (ctx.cr6.eq) goto loc_827D8C0C;
loc_827D8BD0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d8bd0
	if (!ctx.cr0.eq) goto loc_827D8BD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d8c0c
	if (!ctx.cr6.eq) goto loc_827D8C0C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D8C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827D8C0C;
	sub_8221BE68(ctx, base);
loc_827D8C0C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D8C14;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D8C1C"))) PPC_WEAK_FUNC(sub_827D8C1C);
PPC_FUNC_IMPL(__imp__sub_827D8C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D8C20"))) PPC_WEAK_FUNC(sub_827D8C20);
PPC_FUNC_IMPL(__imp__sub_827D8C20) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827d8c3c
	if (ctx.cr6.eq) goto loc_827D8C3C;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d8c40
	if (!ctx.cr6.eq) goto loc_827D8C40;
loc_827D8C3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8C40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8c58
	if (ctx.cr6.eq) goto loc_827D8C58;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// blr 
	return;
loc_827D8C58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8C60"))) PPC_WEAK_FUNC(sub_827D8C60);
PPC_FUNC_IMPL(__imp__sub_827D8C60) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8c8c
	if (ctx.cr6.eq) goto loc_827D8C8C;
	// lbz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827d8c90
	if (!ctx.cr6.eq) goto loc_827D8C90;
loc_827D8C8C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D8C90:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d8dc8
	if (ctx.cr6.eq) goto loc_827D8DC8;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r9,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827d8da4
	if (ctx.cr6.eq) goto loc_827D8DA4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d8cdc
	if (ctx.cr6.eq) goto loc_827D8CDC;
	// lbz r9,58(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 58);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d8da8
	goto loc_827D8DA8;
loc_827D8CDC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d8d4c
	if (!ctx.cr0.gt) goto loc_827D8D4C;
loc_827D8CFC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,58
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 58, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d8d1c
	if (ctx.cr6.lt) goto loc_827D8D1C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D8D1C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d8d38
	if (ctx.cr6.eq) goto loc_827D8D38;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d8d40
	goto loc_827D8D40;
loc_827D8D38:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D8D40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d8cfc
	if (ctx.cr6.gt) goto loc_827D8CFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D8D4C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d8d90
	if (ctx.cr6.eq) goto loc_827D8D90;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d8d68
	if (ctx.cr6.gt) goto loc_827D8D68;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8D68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d8d90
	if (!ctx.cr6.eq) goto loc_827D8D90;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d8da8
	goto loc_827D8DA8;
loc_827D8D90:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d8da8
	goto loc_827D8DA8;
loc_827D8DA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8DA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8dc8
	if (ctx.cr6.eq) goto loc_827D8DC8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827D8DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D8DC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8DD8"))) PPC_WEAK_FUNC(sub_827D8DD8);
PPC_FUNC_IMPL(__imp__sub_827D8DD8) {
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
	// beq cr6,0x827d8e00
	if (ctx.cr6.eq) goto loc_827D8E00;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d8e04
	if (!ctx.cr6.eq) goto loc_827D8E04;
loc_827D8E00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8E04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8f28
	if (ctx.cr6.eq) goto loc_827D8F28;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d8f08
	if (ctx.cr6.eq) goto loc_827D8F08;
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8e4c
	if (ctx.cr6.eq) goto loc_827D8E4C;
	// lbz r11,58(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827d8f0c
	goto loc_827D8F0C;
loc_827D8E4C:
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d8eb8
	if (!ctx.cr0.gt) goto loc_827D8EB8;
loc_827D8E68:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,58
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 58, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d8e88
	if (ctx.cr6.lt) goto loc_827D8E88;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D8E88:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d8ea4
	if (ctx.cr6.eq) goto loc_827D8EA4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d8eac
	goto loc_827D8EAC;
loc_827D8EA4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D8EAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d8e68
	if (ctx.cr6.gt) goto loc_827D8E68;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D8EB8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d8ef8
	if (ctx.cr6.eq) goto loc_827D8EF8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d8ed4
	if (ctx.cr6.gt) goto loc_827D8ED4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d8ef8
	if (!ctx.cr6.eq) goto loc_827D8EF8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d8f0c
	goto loc_827D8F0C;
loc_827D8EF8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d8f0c
	goto loc_827D8F0C;
loc_827D8F08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D8F0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d8f28
	if (ctx.cr6.eq) goto loc_827D8F28;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D8F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827D8F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D8F38"))) PPC_WEAK_FUNC(sub_827D8F38);
PPC_FUNC_IMPL(__imp__sub_827D8F38) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827d8f68
	if (ctx.cr6.eq) goto loc_827D8F68;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d8f6c
	if (!ctx.cr6.eq) goto loc_827D8F6C;
loc_827D8F68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D8F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d90a4
	if (ctx.cr6.eq) goto loc_827D90A4;
	// lwz r10,40(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d9074
	if (ctx.cr6.eq) goto loc_827D9074;
	// lwz r11,140(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d8fb4
	if (ctx.cr6.eq) goto loc_827D8FB4;
	// lbz r10,58(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827d9078
	goto loc_827D9078;
loc_827D8FB4:
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9024
	if (!ctx.cr0.gt) goto loc_827D9024;
loc_827D8FD4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,58
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 58, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d8ff4
	if (ctx.cr6.lt) goto loc_827D8FF4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D8FF4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9010
	if (ctx.cr6.eq) goto loc_827D9010;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d9018
	goto loc_827D9018;
loc_827D9010:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D9018:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d8fd4
	if (ctx.cr6.gt) goto loc_827D8FD4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D9024:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d9064
	if (ctx.cr6.eq) goto loc_827D9064;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d9040
	if (ctx.cr6.gt) goto loc_827D9040;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D9040:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d9064
	if (!ctx.cr6.eq) goto loc_827D9064;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d9078
	goto loc_827D9078;
loc_827D9064:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827d9078
	goto loc_827D9078;
loc_827D9074:
	// li r10,0
	ctx.r10.s64 = 0;
loc_827D9078:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d90a4
	if (ctx.cr6.eq) goto loc_827D90A4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D9098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_827D90A4:
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

__attribute__((alias("__imp__sub_827D90BC"))) PPC_WEAK_FUNC(sub_827D90BC);
PPC_FUNC_IMPL(__imp__sub_827D90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D90C0"))) PPC_WEAK_FUNC(sub_827D90C0);
PPC_FUNC_IMPL(__imp__sub_827D90C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd0
	ctx.lr = 0x827D90C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x827d92cc
	if (ctx.cr6.eq) goto loc_827D92CC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_827D9118:
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_827D911C:
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x827d9290
	if (ctx.cr6.eq) goto loc_827D9290;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827d9134
	if (ctx.cr6.eq) goto loc_827D9134;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827d9138
	if (ctx.cr6.eq) goto loc_827D9138;
loc_827D9134:
	// twi 31,r0,22
loc_827D9138:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x827d9290
	if (ctx.cr6.eq) goto loc_827D9290;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d9150
	if (!ctx.cr6.eq) goto loc_827D9150;
	// twi 31,r0,22
loc_827D9150:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// beq cr6,0x827d9184
	if (ctx.cr6.eq) goto loc_827D9184;
loc_827D9168:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d9168
	if (!ctx.cr0.eq) goto loc_827D9168;
loc_827D9184:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x827d9190
	if (!ctx.cr6.eq) goto loc_827D9190;
	// twi 31,r0,22
loc_827D9190:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d91a0
	if (!ctx.cr6.eq) goto loc_827D91A0;
	// twi 31,r0,22
loc_827D91A0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// beq cr6,0x827d91d4
	if (ctx.cr6.eq) goto loc_827D91D4;
loc_827D91B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827d91b8
	if (!ctx.cr0.eq) goto loc_827D91B8;
loc_827D91D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827D91E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x827D91FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r22.s32, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// blt cr6,0x827d920c
	if (ctx.cr6.lt) goto loc_827D920C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827D920C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827D9214;
	sub_829FF648(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x829ff648
	ctx.lr = 0x827D921C;
	sub_829FF648(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9278
	if (ctx.cr6.eq) goto loc_827D9278;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d923c
	if (!ctx.cr6.eq) goto loc_827D923C;
	// twi 31,r0,22
loc_827D923C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x82a0f290
	ctx.lr = 0x827D9268;
	sub_82A0F290(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827d911c
	goto loc_827D911C;
loc_827D9278:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827d9288
	if (!ctx.cr6.eq) goto loc_827D9288;
	// twi 31,r0,22
loc_827D9288:
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x827d9118
	goto loc_827D9118;
loc_827D9290:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827d92a0
	if (ctx.cr6.eq) goto loc_827D92A0;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x827d92a4
	if (ctx.cr6.eq) goto loc_827D92A4;
loc_827D92A0:
	// twi 31,r0,22
loc_827D92A4:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x827d92cc
	if (ctx.cr6.eq) goto loc_827D92CC;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0f290
	ctx.lr = 0x827D92CC;
	sub_82A0F290(ctx, base);
loc_827D92CC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82ca2c20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D92D4"))) PPC_WEAK_FUNC(sub_827D92D4);
PPC_FUNC_IMPL(__imp__sub_827D92D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D92D8"))) PPC_WEAK_FUNC(sub_827D92D8);
PPC_FUNC_IMPL(__imp__sub_827D92D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D92E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D92F4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d9328
	if (ctx.cr6.eq) goto loc_827D9328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823dbff8
	ctx.lr = 0x827D9308;
	sub_823DBFF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// addi r10,r11,30560
	ctx.r10.s64 = ctx.r11.s64 + 30560;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821cf7c8
	ctx.lr = 0x827D9320;
	sub_821CF7C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x827d932c
	goto loc_827D932C;
loc_827D9328:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D932C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827D9334;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d9344
	if (ctx.cr6.eq) goto loc_827D9344;
	// bl 0x82180b28
	ctx.lr = 0x827D9344;
	sub_82180B28(ctx, base);
loc_827D9344:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D9350"))) PPC_WEAK_FUNC(sub_827D9350);
PPC_FUNC_IMPL(__imp__sub_827D9350) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x821940c8
	ctx.lr = 0x827D9378;
	sub_821940C8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// bl 0x82214f08
	ctx.lr = 0x827D9388;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acc20
	ctx.lr = 0x827D9390;
	sub_821ACC20(ctx, base);
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

__attribute__((alias("__imp__sub_827D93A4"))) PPC_WEAK_FUNC(sub_827D93A4);
PPC_FUNC_IMPL(__imp__sub_827D93A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D93A8"))) PPC_WEAK_FUNC(sub_827D93A8);
PPC_FUNC_IMPL(__imp__sub_827D93A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D93B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D93C4;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d93fc
	if (ctx.cr6.eq) goto loc_827D93FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823dbff8
	ctx.lr = 0x827D93D8;
	sub_823DBFF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,30640
	ctx.r10.s64 = ctx.r11.s64 + 30640;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f13,124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// b 0x827d9400
	goto loc_827D9400;
loc_827D93FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D9400:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827D9408;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d9418
	if (ctx.cr6.eq) goto loc_827D9418;
	// bl 0x82180b28
	ctx.lr = 0x827D9418;
	sub_82180B28(ctx, base);
loc_827D9418:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D9424"))) PPC_WEAK_FUNC(sub_827D9424);
PPC_FUNC_IMPL(__imp__sub_827D9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D9428"))) PPC_WEAK_FUNC(sub_827D9428);
PPC_FUNC_IMPL(__imp__sub_827D9428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827D9430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827D9444;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827d9474
	if (ctx.cr6.eq) goto loc_827D9474;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823dbff8
	ctx.lr = 0x827D9458;
	sub_823DBFF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,30720
	ctx.r10.s64 = ctx.r11.s64 + 30720;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f0,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x827d9478
	goto loc_827D9478;
loc_827D9474:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D9478:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827D9480;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d9490
	if (ctx.cr6.eq) goto loc_827D9490;
	// bl 0x82180b28
	ctx.lr = 0x827D9490;
	sub_82180B28(ctx, base);
loc_827D9490:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D949C"))) PPC_WEAK_FUNC(sub_827D949C);
PPC_FUNC_IMPL(__imp__sub_827D949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D94A0"))) PPC_WEAK_FUNC(sub_827D94A0);
PPC_FUNC_IMPL(__imp__sub_827D94A0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30372
	ctx.r4.s64 = ctx.r11.s64 + 30372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D94D0;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x827f05d0
	ctx.lr = 0x827D94E4;
	sub_827F05D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D94EC;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r8,r10,30560
	ctx.r8.s64 = ctx.r10.s64 + 30560;
	// addi r7,r9,5732
	ctx.r7.s64 = ctx.r9.s64 + 5732;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822149c8
	ctx.lr = 0x827D9518;
	sub_822149C8(ctx, base);
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

__attribute__((alias("__imp__sub_827D9534"))) PPC_WEAK_FUNC(sub_827D9534);
PPC_FUNC_IMPL(__imp__sub_827D9534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D9538"))) PPC_WEAK_FUNC(sub_827D9538);
PPC_FUNC_IMPL(__imp__sub_827D9538) {
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
	// bl 0x821e32f8
	ctx.lr = 0x827D9550;
	sub_821E32F8(ctx, base);
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9594
	if (ctx.cr6.eq) goto loc_827D9594;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d95ec
	if (ctx.cr6.eq) goto loc_827D95EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9594
	if (ctx.cr6.eq) goto loc_827D9594;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D9580;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d9598
	if (!ctx.cr6.eq) goto loc_827D9598;
loc_827D9594:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D9598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d96ec
	if (ctx.cr6.eq) goto loc_827D96EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x825575c8
	ctx.lr = 0x827D95B0;
	sub_825575C8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d96c0
	if (ctx.cr6.eq) goto loc_827D96C0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d95f8
	if (ctx.cr6.eq) goto loc_827D95F8;
	// lbz r10,79(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 79);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d96c4
	goto loc_827D96C4;
loc_827D95EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D95F4;
	sub_821940C8(ctx, base);
	// b 0x827d9594
	goto loc_827D9594;
loc_827D95F8:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9668
	if (!ctx.cr0.gt) goto loc_827D9668;
loc_827D9618:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,79
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 79, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d9638
	if (ctx.cr6.lt) goto loc_827D9638;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827D9638:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9654
	if (ctx.cr6.eq) goto loc_827D9654;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d965c
	goto loc_827D965C;
loc_827D9654:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D965C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d9618
	if (ctx.cr6.gt) goto loc_827D9618;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D9668:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d96ac
	if (ctx.cr6.eq) goto loc_827D96AC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d9684
	if (ctx.cr6.gt) goto loc_827D9684;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D9684:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d96ac
	if (!ctx.cr6.eq) goto loc_827D96AC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d96c4
	goto loc_827D96C4;
loc_827D96AC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d96c4
	goto loc_827D96C4;
loc_827D96C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827D96C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d96ec
	if (ctx.cr6.eq) goto loc_827D96EC;
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r11,26788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26788);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// bl 0x823b7058
	ctx.lr = 0x827D96EC;
	sub_823B7058(ctx, base);
loc_827D96EC:
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

__attribute__((alias("__imp__sub_827D9700"))) PPC_WEAK_FUNC(sub_827D9700);
PPC_FUNC_IMPL(__imp__sub_827D9700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D9708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r28,120
	ctx.r29.s64 = ctx.r28.s64 + 120;
	// lwz r11,124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9758
	if (ctx.cr6.eq) goto loc_827D9758;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d97b0
	if (ctx.cr6.eq) goto loc_827D97B0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9758
	if (ctx.cr6.eq) goto loc_827D9758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D9744;
	sub_825575C8(ctx, base);
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d975c
	if (!ctx.cr6.eq) goto loc_827D975C;
loc_827D9758:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D975C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d99c0
	if (ctx.cr6.eq) goto loc_827D99C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D9774;
	sub_825575C8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d9880
	if (ctx.cr6.eq) goto loc_827D9880;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d97bc
	if (ctx.cr6.eq) goto loc_827D97BC;
	// lbz r10,79(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 79);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9884
	goto loc_827D9884;
loc_827D97B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821940c8
	ctx.lr = 0x827D97B8;
	sub_821940C8(ctx, base);
	// b 0x827d9758
	goto loc_827D9758;
loc_827D97BC:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9828
	if (!ctx.cr0.gt) goto loc_827D9828;
loc_827D97D8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,79
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 79, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d97f8
	if (ctx.cr6.lt) goto loc_827D97F8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827D97F8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9814
	if (ctx.cr6.eq) goto loc_827D9814;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d981c
	goto loc_827D981C;
loc_827D9814:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D981C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d97d8
	if (ctx.cr6.gt) goto loc_827D97D8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D9828:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d986c
	if (ctx.cr6.eq) goto loc_827D986C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,79
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 79, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d9844
	if (ctx.cr6.gt) goto loc_827D9844;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d986c
	if (!ctx.cr6.eq) goto loc_827D986C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9884
	goto loc_827D9884;
loc_827D986C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9884
	goto loc_827D9884;
loc_827D9880:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9884:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9898
	if (ctx.cr6.eq) goto loc_827D9898;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827eac70
	ctx.lr = 0x827D9898;
	sub_827EAC70(ctx, base);
loc_827D9898:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825575c8
	ctx.lr = 0x827D98A0;
	sub_825575C8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d999c
	if (ctx.cr6.eq) goto loc_827D999C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d98dc
	if (ctx.cr6.eq) goto loc_827D98DC;
	// lbz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d99a0
	goto loc_827D99A0;
loc_827D98DC:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9944
	if (!ctx.cr0.gt) goto loc_827D9944;
loc_827D98F4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,96
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 96, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d9914
	if (ctx.cr6.lt) goto loc_827D9914;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827D9914:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9930
	if (ctx.cr6.eq) goto loc_827D9930;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d9938
	goto loc_827D9938;
loc_827D9930:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D9938:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d98f4
	if (ctx.cr6.gt) goto loc_827D98F4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D9944:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d9988
	if (ctx.cr6.eq) goto loc_827D9988;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d9960
	if (ctx.cr6.gt) goto loc_827D9960;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9960:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d9988
	if (!ctx.cr6.eq) goto loc_827D9988;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d99a0
	goto loc_827D99A0;
loc_827D9988:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d99a0
	goto loc_827D99A0;
loc_827D999C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D99A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d99c0
	if (ctx.cr6.eq) goto loc_827D99C0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827D99B4;
	sub_824C7F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82992850
	ctx.lr = 0x827D99C0;
	sub_82992850(ctx, base);
loc_827D99C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D99C8"))) PPC_WEAK_FUNC(sub_827D99C8);
PPC_FUNC_IMPL(__imp__sub_827D99C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D99D0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31921
	ctx.r31.s64 = -2091974656;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r28,-31921
	ctx.r28.s64 = -2091974656;
	// lwz r11,29172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d9a14
	if (!ctx.cr6.eq) goto loc_827D9A14;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,29172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29172, ctx.r11.u32);
	// lfd f1,568(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 568);
	// bl 0x82239e88
	ctx.lr = 0x827D9A08;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,29172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29172);
	// stfs f0,29168(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 29168, temp.u32);
loc_827D9A14:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lis r29,-31921
	ctx.r29.s64 = -2091974656;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827d9a44
	if (!ctx.cr6.eq) goto loc_827D9A44;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// stw r11,29172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29172, ctx.r11.u32);
	// lfd f1,1472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 1472);
	// bl 0x82239e88
	ctx.lr = 0x827D9A38;
	sub_82239E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,29164(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 29164, temp.u32);
	// b 0x827d9a48
	goto loc_827D9A48;
loc_827D9A44:
	// lfs f0,29164(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 29164);
	ctx.f0.f64 = double(temp.f32);
loc_827D9A48:
	// lfs f13,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,29168(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 29168);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x827d9af0
	if (!ctx.cr6.lt) goto loc_827D9AF0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f0,120(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// lfs f31,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x827d9ab0
	if (!ctx.cr6.lt) goto loc_827D9AB0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827d9a84
	if (!ctx.cr6.lt) goto loc_827D9A84;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30436
	ctx.r4.s64 = ctx.r11.s64 + 30436;
	// b 0x827d9a8c
	goto loc_827D9A8C;
loc_827D9A84:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30460
	ctx.r4.s64 = ctx.r11.s64 + 30460;
loc_827D9A8C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D9A98;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x827D9AA4;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D9AAC;
	sub_82214F08(ctx, base);
	// b 0x827d9b30
	goto loc_827D9B30;
loc_827D9AB0:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x827d9ac4
	if (!ctx.cr6.lt) goto loc_827D9AC4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30484
	ctx.r4.s64 = ctx.r11.s64 + 30484;
	// b 0x827d9acc
	goto loc_827D9ACC;
loc_827D9AC4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30508
	ctx.r4.s64 = ctx.r11.s64 + 30508;
loc_827D9ACC:
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D9AD8;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x827D9AE4;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D9AEC;
	sub_82214F08(ctx, base);
	// b 0x827d9b30
	goto loc_827D9B30;
loc_827D9AF0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30400
	ctx.r4.s64 = ctx.r11.s64 + 30400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827D9B04;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x827D9B10;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827D9B18;
	sub_82214F08(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-27456
	ctx.r31.s64 = ctx.r11.s64 + -27456;
	// lfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827f0708
	ctx.lr = 0x827D9B30;
	sub_827F0708(ctx, base);
loc_827D9B30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e32f8
	ctx.lr = 0x827D9B38;
	sub_821E32F8(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x827D9B40;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827d9bb8
	if (ctx.cr6.eq) goto loc_827D9BB8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r8,r9,7660
	ctx.r8.s64 = ctx.r9.s64 + 7660;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stfs f31,48(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stfs f31,56(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
	// stfs f31,60(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r11,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r11.u8);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r11.u8);
	// stb r11,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r11.u8);
	// stb r11,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r11.u8);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// b 0x827d9bbc
	goto loc_827D9BBC;
loc_827D9BB8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D9BBC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821bbcb0
	ctx.lr = 0x827D9BC4;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226be28
	ctx.lr = 0x827D9BD0;
	sub_8226BE28(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D9BD8;
	sub_829FF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D9BE4"))) PPC_WEAK_FUNC(sub_827D9BE4);
PPC_FUNC_IMPL(__imp__sub_827D9BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D9BE8"))) PPC_WEAK_FUNC(sub_827D9BE8);
PPC_FUNC_IMPL(__imp__sub_827D9BE8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9c2c
	if (ctx.cr6.eq) goto loc_827D9C2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d9c28
	if (ctx.cr6.eq) goto loc_827D9C28;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827d9c30
	goto loc_827D9C30;
loc_827D9C28:
	// bl 0x821940c8
	ctx.lr = 0x827D9C2C;
	sub_821940C8(ctx, base);
loc_827D9C2C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9C30:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827d9d30
	if (ctx.cr6.eq) goto loc_827D9D30;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827d9c6c
	if (ctx.cr6.eq) goto loc_827D9C6C;
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9d34
	goto loc_827D9D34;
loc_827D9C6C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9cd8
	if (!ctx.cr0.gt) goto loc_827D9CD8;
loc_827D9C88:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,137
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 137, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827d9ca8
	if (ctx.cr6.lt) goto loc_827D9CA8;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827D9CA8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9cc4
	if (ctx.cr6.eq) goto loc_827D9CC4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d9ccc
	goto loc_827D9CCC;
loc_827D9CC4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827D9CCC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d9c88
	if (ctx.cr6.gt) goto loc_827D9C88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827D9CD8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827d9d1c
	if (ctx.cr6.eq) goto loc_827D9D1C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827d9cf4
	if (ctx.cr6.gt) goto loc_827D9CF4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9CF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d9d1c
	if (!ctx.cr6.eq) goto loc_827D9D1C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9d34
	goto loc_827D9D34;
loc_827D9D1C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827d9d34
	goto loc_827D9D34;
loc_827D9D30:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827D9D34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9d54
	if (ctx.cr6.eq) goto loc_827D9D54;
	// lbz r11,73(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 73);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d9d54
	if (!ctx.cr6.eq) goto loc_827D9D54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d9d5c
	goto loc_827D9D5C;
loc_827D9D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d25c0
	ctx.lr = 0x827D9D5C;
	sub_821D25C0(ctx, base);
loc_827D9D5C:
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

__attribute__((alias("__imp__sub_827D9D74"))) PPC_WEAK_FUNC(sub_827D9D74);
PPC_FUNC_IMPL(__imp__sub_827D9D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827D9D78"))) PPC_WEAK_FUNC(sub_827D9D78);
PPC_FUNC_IMPL(__imp__sub_827D9D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827D9D80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821e32f8
	ctx.lr = 0x827D9D90;
	sub_821E32F8(ctx, base);
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8221f388
	ctx.lr = 0x827D9D98;
	sub_8221F388(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r11,-8648
	ctx.r29.s64 = ctx.r11.s64 + -8648;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,-18808(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -18808);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x827d9e1c
	if (ctx.cr6.eq) goto loc_827D9E1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-18820(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -18820);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r10,r11,7660
	ctx.r10.s64 = ctx.r11.s64 + 7660;
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stb r28,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r28.u8);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r30,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r30.u8);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stb r30,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r30.u8);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stb r30,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r30.u8);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stb r30,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r30.u8);
	// stb r30,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r30.u8);
	// stb r30,67(r3)
	PPC_STORE_U8(ctx.r3.u32 + 67, ctx.r30.u8);
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stb r28,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r28.u8);
	// b 0x827d9e20
	goto loc_827D9E20;
loc_827D9E1C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827D9E20:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821bbcb0
	ctx.lr = 0x827D9E28;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226be28
	ctx.lr = 0x827D9E34;
	sub_8226BE28(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827D9E3C;
	sub_829FF648(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r11,r11,r3
	ctx.r11.s32 = ctx.r11.s32 / ctx.r3.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9ebc
	if (!ctx.cr0.gt) goto loc_827D9EBC;
loc_827D9E64:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x827d9e8c
	if (ctx.cr6.lt) goto loc_827D9E8C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_827D9E8C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9ea8
	if (ctx.cr6.eq) goto loc_827D9EA8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d9eb0
	goto loc_827D9EB0;
loc_827D9EA8:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827D9EB0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d9e64
	if (ctx.cr6.gt) goto loc_827D9E64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_827D9EBC:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x827d9ef4
	if (ctx.cr6.eq) goto loc_827D9EF4;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x827d9ed8
	if (ctx.cr6.gt) goto loc_827D9ED8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827D9ED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827d9ef4
	if (!ctx.cr6.eq) goto loc_827D9EF4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827d9ef8
	goto loc_827D9EF8;
loc_827D9EF4:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_827D9EF8:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827d9f10
	if (ctx.cr6.eq) goto loc_827D9F10;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827d9f14
	goto loc_827D9F14;
loc_827D9F10:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827D9F14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827d9f5c
	if (ctx.cr6.eq) goto loc_827D9F5C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lfs f13,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10216(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -10216);
	ctx.f0.f64 = double(temp.f32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r10,-28240
	ctx.r8.s64 = ctx.r10.s64 + -28240;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,36(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stb r28,32(r4)
	PPC_STORE_U8(ctx.r4.u32 + 32, ctx.r28.u8);
	// stvx128 v12,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_827D9F5C:
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r9,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// divw. r11,r11,r3
	ctx.r11.s32 = ctx.r11.s32 / ctx.r3.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827d9fd4
	if (!ctx.cr0.gt) goto loc_827D9FD4;
loc_827D9F7C:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x827d9fa4
	if (ctx.cr6.lt) goto loc_827D9FA4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_827D9FA4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827d9fc0
	if (ctx.cr6.eq) goto loc_827D9FC0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827d9fc8
	goto loc_827D9FC8;
loc_827D9FC0:
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827D9FC8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827d9f7c
	if (ctx.cr6.gt) goto loc_827D9F7C;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_827D9FD4:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da00c
	if (ctx.cr6.eq) goto loc_827DA00C;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x827d9ff0
	if (ctx.cr6.gt) goto loc_827D9FF0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827D9FF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da00c
	if (!ctx.cr6.eq) goto loc_827DA00C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827da010
	goto loc_827DA010;
loc_827DA00C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_827DA010:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827da028
	if (ctx.cr6.eq) goto loc_827DA028;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827da02c
	goto loc_827DA02C;
loc_827DA028:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DA02C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da048
	if (ctx.cr6.eq) goto loc_827DA048;
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,32(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
loc_827DA048:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da074
	if (ctx.cr6.eq) goto loc_827DA074;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da070
	if (ctx.cr6.eq) goto loc_827DA070;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827da078
	goto loc_827DA078;
loc_827DA070:
	// bl 0x821940c8
	ctx.lr = 0x827DA074;
	sub_821940C8(ctx, base);
loc_827DA074:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DA078:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827da178
	if (ctx.cr6.eq) goto loc_827DA178;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da0b4
	if (ctx.cr6.eq) goto loc_827DA0B4;
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827da17c
	goto loc_827DA17C;
loc_827DA0B4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da120
	if (!ctx.cr0.gt) goto loc_827DA120;
loc_827DA0D0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,14
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 14, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// blt cr6,0x827da0f0
	if (ctx.cr6.lt) goto loc_827DA0F0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_827DA0F0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da10c
	if (ctx.cr6.eq) goto loc_827DA10C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da114
	goto loc_827DA114;
loc_827DA10C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA114:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da0d0
	if (ctx.cr6.gt) goto loc_827DA0D0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA120:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da164
	if (ctx.cr6.eq) goto loc_827DA164;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bgt cr6,0x827da13c
	if (ctx.cr6.gt) goto loc_827DA13C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DA13C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da164
	if (!ctx.cr6.eq) goto loc_827DA164;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827da17c
	goto loc_827DA17C;
loc_827DA164:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x827da17c
	goto loc_827DA17C;
loc_827DA178:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DA17C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da18c
	if (ctx.cr6.eq) goto loc_827DA18C;
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
loc_827DA18C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DA198"))) PPC_WEAK_FUNC(sub_827DA198);
PPC_FUNC_IMPL(__imp__sub_827DA198) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da1d4
	if (ctx.cr6.eq) goto loc_827DA1D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da1d0
	if (ctx.cr6.eq) goto loc_827DA1D0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827da1d8
	goto loc_827DA1D8;
loc_827DA1D0:
	// bl 0x821940c8
	ctx.lr = 0x827DA1D4;
	sub_821940C8(ctx, base);
loc_827DA1D4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DA1D8:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827da2d8
	if (ctx.cr6.eq) goto loc_827DA2D8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da214
	if (ctx.cr6.eq) goto loc_827DA214;
	// lbz r9,14(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da2dc
	goto loc_827DA2DC;
loc_827DA214:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da280
	if (!ctx.cr0.gt) goto loc_827DA280;
loc_827DA230:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,14
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 14, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827da250
	if (ctx.cr6.lt) goto loc_827DA250;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827DA250:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da26c
	if (ctx.cr6.eq) goto loc_827DA26C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da274
	goto loc_827DA274;
loc_827DA26C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA274:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da230
	if (ctx.cr6.gt) goto loc_827DA230;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA280:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da2c4
	if (ctx.cr6.eq) goto loc_827DA2C4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827da29c
	if (ctx.cr6.gt) goto loc_827DA29C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DA29C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da2c4
	if (!ctx.cr6.eq) goto loc_827DA2C4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da2dc
	goto loc_827DA2DC;
loc_827DA2C4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da2dc
	goto loc_827DA2DC;
loc_827DA2D8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DA2DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da304
	if (ctx.cr6.eq) goto loc_827DA304;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da304
	if (ctx.cr6.eq) goto loc_827DA304;
	// bl 0x82627188
	ctx.lr = 0x827DA304;
	sub_82627188(ctx, base);
loc_827DA304:
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

__attribute__((alias("__imp__sub_827DA318"))) PPC_WEAK_FUNC(sub_827DA318);
PPC_FUNC_IMPL(__imp__sub_827DA318) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-29136
	ctx.r4.s64 = ctx.r11.s64 + -29136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DA33C;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_827DA354"))) PPC_WEAK_FUNC(sub_827DA354);
PPC_FUNC_IMPL(__imp__sub_827DA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DA358"))) PPC_WEAK_FUNC(sub_827DA358);
PPC_FUNC_IMPL(__imp__sub_827DA358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827DA360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827da468
	if (ctx.cr6.eq) goto loc_827DA468;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da3ac
	if (ctx.cr6.eq) goto loc_827DA3AC;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827da46c
	goto loc_827DA46C;
loc_827DA3AC:
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// lwz r5,76(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da418
	if (!ctx.cr0.gt) goto loc_827DA418;
loc_827DA3C8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827da3e8
	if (ctx.cr6.lt) goto loc_827DA3E8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DA3E8:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da404
	if (ctx.cr6.eq) goto loc_827DA404;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da40c
	goto loc_827DA40C;
loc_827DA404:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA40C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da3c8
	if (ctx.cr6.gt) goto loc_827DA3C8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA418:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x827da458
	if (ctx.cr6.eq) goto loc_827DA458;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827da434
	if (ctx.cr6.gt) goto loc_827DA434;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA434:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da458
	if (!ctx.cr6.eq) goto loc_827DA458;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827da46c
	goto loc_827DA46C;
loc_827DA458:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827da46c
	goto loc_827DA46C;
loc_827DA468:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_827DA46C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da494
	if (ctx.cr6.eq) goto loc_827DA494;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da494
	if (ctx.cr6.eq) goto loc_827DA494;
loc_827DA488:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
loc_827DA494:
	// lbz r11,36(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 36);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da594
	if (ctx.cr6.eq) goto loc_827DA594;
	// lwz r11,140(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 140);
	// lwz r10,72(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da4d4
	if (ctx.cr6.eq) goto loc_827DA4D4;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da598
	goto loc_827DA598;
loc_827DA4D4:
	// lwz r6,76(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da53c
	if (!ctx.cr0.gt) goto loc_827DA53C;
loc_827DA4EC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827da50c
	if (ctx.cr6.lt) goto loc_827DA50C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DA50C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da528
	if (ctx.cr6.eq) goto loc_827DA528;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da530
	goto loc_827DA530;
loc_827DA528:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA530:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da4ec
	if (ctx.cr6.gt) goto loc_827DA4EC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA53C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da580
	if (ctx.cr6.eq) goto loc_827DA580;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827da558
	if (ctx.cr6.gt) goto loc_827DA558;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA558:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da580
	if (!ctx.cr6.eq) goto loc_827DA580;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da598
	goto loc_827DA598;
loc_827DA580:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da598
	goto loc_827DA598;
loc_827DA594:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da734
	if (ctx.cr6.eq) goto loc_827DA734;
	// lis r11,-31926
	ctx.r11.s64 = -2092302336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-20096
	ctx.r30.s64 = ctx.r11.s64 + -20096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82271780
	ctx.lr = 0x827DA5B8;
	sub_82271780(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da734
	if (ctx.cr6.eq) goto loc_827DA734;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823db930
	ctx.lr = 0x827DA5CC;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DA5D8;
	sub_82500CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827da5f8
	if (ctx.cr6.eq) goto loc_827DA5F8;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827da5fc
	if (!ctx.cr6.eq) goto loc_827DA5FC;
loc_827DA5F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA5FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da734
	if (ctx.cr6.eq) goto loc_827DA734;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r8,r9,7,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827da710
	if (ctx.cr6.eq) goto loc_827DA710;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da64c
	if (ctx.cr6.eq) goto loc_827DA64C;
	// lbz r9,57(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 57);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da714
	goto loc_827DA714;
loc_827DA64C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da6b8
	if (!ctx.cr0.gt) goto loc_827DA6B8;
loc_827DA668:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827da688
	if (ctx.cr6.lt) goto loc_827DA688;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DA688:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da6a4
	if (ctx.cr6.eq) goto loc_827DA6A4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da6ac
	goto loc_827DA6AC;
loc_827DA6A4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA6AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da668
	if (ctx.cr6.gt) goto loc_827DA668;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA6B8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da6fc
	if (ctx.cr6.eq) goto loc_827DA6FC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827da6d4
	if (ctx.cr6.gt) goto loc_827DA6D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA6D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da6fc
	if (!ctx.cr6.eq) goto loc_827DA6FC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da714
	goto loc_827DA714;
loc_827DA6FC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da714
	goto loc_827DA714;
loc_827DA710:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DA714:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da734
	if (ctx.cr6.eq) goto loc_827DA734;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x824abc20
	ctx.lr = 0x827DA728;
	sub_824ABC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da488
	if (ctx.cr6.eq) goto loc_827DA488;
loc_827DA734:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DA74C"))) PPC_WEAK_FUNC(sub_827DA74C);
PPC_FUNC_IMPL(__imp__sub_827DA74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DA750"))) PPC_WEAK_FUNC(sub_827DA750);
PPC_FUNC_IMPL(__imp__sub_827DA750) {
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
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827da8b8
	if (ctx.cr6.eq) goto loc_827DA8B8;
	// stb r4,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r4.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da8b8
	if (!ctx.cr6.eq) goto loc_827DA8B8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827da884
	if (ctx.cr6.eq) goto loc_827DA884;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827da7c0
	if (ctx.cr6.eq) goto loc_827DA7C0;
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da888
	goto loc_827DA888;
loc_827DA7C0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827da82c
	if (!ctx.cr0.gt) goto loc_827DA82C;
loc_827DA7DC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827da7fc
	if (ctx.cr6.lt) goto loc_827DA7FC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827DA7FC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827da818
	if (ctx.cr6.eq) goto loc_827DA818;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827da820
	goto loc_827DA820;
loc_827DA818:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DA820:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827da7dc
	if (ctx.cr6.gt) goto loc_827DA7DC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DA82C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827da870
	if (ctx.cr6.eq) goto loc_827DA870;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827da848
	if (ctx.cr6.gt) goto loc_827DA848;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DA848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da870
	if (!ctx.cr6.eq) goto loc_827DA870;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da888
	goto loc_827DA888;
loc_827DA870:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827da888
	goto loc_827DA888;
loc_827DA884:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DA888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da8b8
	if (ctx.cr6.eq) goto loc_827DA8B8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff4e0
	ctx.lr = 0x827DA8A0;
	sub_821FF4E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827da8b8
	if (ctx.cr6.eq) goto loc_827DA8B8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f27a8
	ctx.lr = 0x827DA8B8;
	sub_823F27A8(ctx, base);
loc_827DA8B8:
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

__attribute__((alias("__imp__sub_827DA8CC"))) PPC_WEAK_FUNC(sub_827DA8CC);
PPC_FUNC_IMPL(__imp__sub_827DA8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DA8D0"))) PPC_WEAK_FUNC(sub_827DA8D0);
PPC_FUNC_IMPL(__imp__sub_827DA8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827DA8D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827da8f8
	if (!ctx.cr6.eq) goto loc_827DA8F8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r31,r11,63
	ctx.r31.s64 = ctx.r11.s64 + 63;
	// b 0x827da8fc
	goto loc_827DA8FC;
loc_827DA8F8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827DA8FC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827DA90C;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eef40
	ctx.lr = 0x827DA91C;
	sub_824EEF40(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827DA924;
	sub_829FF648(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8221f388
	ctx.lr = 0x827DA92C;
	sub_8221F388(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827da974
	if (ctx.cr6.eq) goto loc_827DA974;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r10,r11,-1124
	ctx.r10.s64 = ctx.r11.s64 + -1124;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// bl 0x8221f388
	ctx.lr = 0x827DA94C;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827da978
	if (ctx.cr6.eq) goto loc_827DA978;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827da97c
	goto loc_827DA97C;
loc_827DA974:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827DA978:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827DA97C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827daa80
	if (ctx.cr6.eq) goto loc_827DAA80;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82229208
	ctx.lr = 0x827DA99C;
	sub_82229208(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,15480
	ctx.r30.s64 = ctx.r11.s64 + 15480;
	// bl 0x822279a0
	ctx.lr = 0x827DA9B0;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827DA9D0;
	sub_8219AB28(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r30,r9,-29448
	ctx.r30.s64 = ctx.r9.s64 + -29448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x824ef160
	ctx.lr = 0x827DA9E8;
	sub_824EF160(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827DA9F8;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r8,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r8.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229208
	ctx.lr = 0x827DAA18;
	sub_82229208(ctx, base);
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-26048
	ctx.r31.s64 = ctx.r11.s64 + -26048;
	// bl 0x822279a0
	ctx.lr = 0x827DAA2C;
	sub_822279A0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r6,-32116
	ctx.r6.s64 = -2104754176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r6,-7184
	ctx.r4.s64 = ctx.r6.s64 + -7184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r31.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827DAA4C;
	sub_8219AB28(ctx, base);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r31,r5,-29436
	ctx.r31.s64 = ctx.r5.s64 + -29436;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824ef160
	ctx.lr = 0x827DAA64;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827DAA74;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
loc_827DAA80:
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// beq cr6,0x827daaac
	if (ctx.cr6.eq) goto loc_827DAAAC;
loc_827DAA90:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827daa90
	if (!ctx.cr0.eq) goto loc_827DAA90;
loc_827DAAAC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827DAABC;
	sub_827F18F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827DAAC4;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827dab08
	if (ctx.cr6.eq) goto loc_827DAB08;
loc_827DAACC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827daacc
	if (!ctx.cr0.eq) goto loc_827DAACC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827dab08
	if (!ctx.cr6.eq) goto loc_827DAB08;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827DAB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8221be68
	ctx.lr = 0x827DAB08;
	sub_8221BE68(ctx, base);
loc_827DAB08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827DAB10;
	sub_829FF648(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DAB18"))) PPC_WEAK_FUNC(sub_827DAB18);
PPC_FUNC_IMPL(__imp__sub_827DAB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827DAB20;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// addi r27,r9,63
	ctx.r27.s64 = ctx.r9.s64 + 63;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r10,-11088
	ctx.r29.s64 = ctx.r10.s64 + -11088;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x827dab54
	if (ctx.cr6.eq) goto loc_827DAB54;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827DAB54:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x824ef300
	ctx.lr = 0x827DAB64;
	sub_824EF300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x824eee50
	ctx.lr = 0x827DAB74;
	sub_824EEE50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827DAB7C;
	sub_829FF648(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8221f388
	ctx.lr = 0x827DAB84;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dabe8
	if (ctx.cr6.eq) goto loc_827DABE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3664
	ctx.r9.s64 = ctx.r11.s64 + 3664;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x821f0108
	ctx.lr = 0x827DABB4;
	sub_821F0108(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DABC0;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dabec
	if (ctx.cr6.eq) goto loc_827DABEC;
	// lis r11,-32105
	ctx.r11.s64 = -2104033280;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-32320
	ctx.r9.s64 = ctx.r11.s64 + -32320;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x827dabf0
	goto loc_827DABF0;
loc_827DABE8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827DABEC:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827DABF0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dac04
	if (ctx.cr6.eq) goto loc_827DAC04;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827DAC04:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dac84
	if (ctx.cr6.eq) goto loc_827DAC84;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,-10000
	ctx.r4.s64 = -10000;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82229208
	ctx.lr = 0x827DAC24;
	sub_82229208(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r11,10232
	ctx.r30.s64 = ctx.r11.s64 + 10232;
	// bl 0x822279a0
	ctx.lr = 0x827DAC38;
	sub_822279A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32108
	ctx.r10.s64 = -2104229888;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x8219ab28
	ctx.lr = 0x827DAC58;
	sub_8219AB28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ef160
	ctx.lr = 0x827DAC68;
	sub_824EF160(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a1ec08
	ctx.lr = 0x827DAC78;
	sub_82A1EC08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// stw r9,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r9.u32);
loc_827DAC84:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// beq cr6,0x827dacb0
	if (ctx.cr6.eq) goto loc_827DACB0;
loc_827DAC94:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827dac94
	if (!ctx.cr0.eq) goto loc_827DAC94;
loc_827DACB0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// bl 0x827f18f0
	ctx.lr = 0x827DACC0;
	sub_827F18F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827DACC8;
	sub_829FF648(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827dad0c
	if (ctx.cr6.eq) goto loc_827DAD0C;
loc_827DACD0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827dacd0
	if (!ctx.cr0.eq) goto loc_827DACD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827dad0c
	if (!ctx.cr6.eq) goto loc_827DAD0C;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827DAD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8221be68
	ctx.lr = 0x827DAD0C;
	sub_8221BE68(ctx, base);
loc_827DAD0C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827DAD14;
	sub_829FF648(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DAD1C"))) PPC_WEAK_FUNC(sub_827DAD1C);
PPC_FUNC_IMPL(__imp__sub_827DAD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAD20"))) PPC_WEAK_FUNC(sub_827DAD20);
PPC_FUNC_IMPL(__imp__sub_827DAD20) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DAD44;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dad5c
	if (ctx.cr6.eq) goto loc_827DAD5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827dad98
	ctx.lr = 0x827DAD54;
	sub_827DAD98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827dad60
	goto loc_827DAD60;
loc_827DAD5C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DAD60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827DAD68;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dad78
	if (ctx.cr6.eq) goto loc_827DAD78;
	// bl 0x82180b28
	ctx.lr = 0x827DAD78;
	sub_82180B28(ctx, base);
loc_827DAD78:
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

__attribute__((alias("__imp__sub_827DAD94"))) PPC_WEAK_FUNC(sub_827DAD94);
PPC_FUNC_IMPL(__imp__sub_827DAD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAD98"))) PPC_WEAK_FUNC(sub_827DAD98);
PPC_FUNC_IMPL(__imp__sub_827DAD98) {
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
	// bl 0x8218ddc0
	ctx.lr = 0x827DADB8;
	sub_8218DDC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r10,r11,31040
	ctx.r10.s64 = ctx.r11.s64 + 31040;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DADD0;
	sub_821F0108(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// bl 0x821f0108
	ctx.lr = 0x827DADDC;
	sub_821F0108(ctx, base);
	// lbz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_827DAE00"))) PPC_WEAK_FUNC(sub_827DAE00);
PPC_FUNC_IMPL(__imp__sub_827DAE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DAE08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DAE1C;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dae64
	if (ctx.cr6.eq) goto loc_827DAE64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823dbff8
	ctx.lr = 0x827DAE30;
	sub_823DBFF8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// addi r10,r11,31128
	ctx.r10.s64 = ctx.r11.s64 + 31128;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DAE48;
	sub_821F0108(ctx, base);
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// bl 0x821f0108
	ctx.lr = 0x827DAE54;
	sub_821F0108(ctx, base);
	// lbz r9,128(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r9,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r9.u8);
	// b 0x827dae68
	goto loc_827DAE68;
loc_827DAE64:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DAE68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827DAE70;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dae80
	if (ctx.cr6.eq) goto loc_827DAE80;
	// bl 0x82180b28
	ctx.lr = 0x827DAE80;
	sub_82180B28(ctx, base);
loc_827DAE80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DAE8C"))) PPC_WEAK_FUNC(sub_827DAE8C);
PPC_FUNC_IMPL(__imp__sub_827DAE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAE90"))) PPC_WEAK_FUNC(sub_827DAE90);
PPC_FUNC_IMPL(__imp__sub_827DAE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DAE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,124
	ctx.r3.s64 = 124;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DAEAC;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827daedc
	if (ctx.cr6.eq) goto loc_827DAEDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827dad98
	ctx.lr = 0x827DAEC0;
	sub_827DAD98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,31208
	ctx.r10.s64 = ctx.r11.s64 + 31208;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lbz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r9,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r9.u8);
	// b 0x827daee0
	goto loc_827DAEE0;
loc_827DAEDC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DAEE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827DAEE8;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827daef8
	if (ctx.cr6.eq) goto loc_827DAEF8;
	// bl 0x82180b28
	ctx.lr = 0x827DAEF8;
	sub_82180B28(ctx, base);
loc_827DAEF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DAF04"))) PPC_WEAK_FUNC(sub_827DAF04);
PPC_FUNC_IMPL(__imp__sub_827DAF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAF08"))) PPC_WEAK_FUNC(sub_827DAF08);
PPC_FUNC_IMPL(__imp__sub_827DAF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DAF10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DAF24;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827daf5c
	if (ctx.cr6.eq) goto loc_827DAF5C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x827dad98
	ctx.lr = 0x827DAF38;
	sub_827DAD98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,31296
	ctx.r10.s64 = ctx.r11.s64 + 31296;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r8,124(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r8,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r8.u32);
	// b 0x827daf60
	goto loc_827DAF60;
loc_827DAF5C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DAF60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827DAF68;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827daf78
	if (ctx.cr6.eq) goto loc_827DAF78;
	// bl 0x82180b28
	ctx.lr = 0x827DAF78;
	sub_82180B28(ctx, base);
loc_827DAF78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DAF84"))) PPC_WEAK_FUNC(sub_827DAF84);
PPC_FUNC_IMPL(__imp__sub_827DAF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAF88"))) PPC_WEAK_FUNC(sub_827DAF88);
PPC_FUNC_IMPL(__imp__sub_827DAF88) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82214f08
	ctx.lr = 0x827DAFAC;
	sub_82214F08(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82214f08
	ctx.lr = 0x827DAFB4;
	sub_82214F08(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827DAFBC;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acc20
	ctx.lr = 0x827DAFC4;
	sub_821ACC20(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dafdc
	if (ctx.cr6.eq) goto loc_827DAFDC;
	// bl 0x8221be68
	ctx.lr = 0x827DAFD8;
	sub_8221BE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827DAFDC:
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

__attribute__((alias("__imp__sub_827DAFF4"))) PPC_WEAK_FUNC(sub_827DAFF4);
PPC_FUNC_IMPL(__imp__sub_827DAFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DAFF8"))) PPC_WEAK_FUNC(sub_827DAFF8);
PPC_FUNC_IMPL(__imp__sub_827DAFF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DB000;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8221f388
	ctx.lr = 0x827DB014;
	sub_8221F388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827db054
	if (ctx.cr6.eq) goto loc_827DB054;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8218ddc0
	ctx.lr = 0x827DB028;
	sub_8218DDC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r10,r11,31384
	ctx.r10.s64 = ctx.r11.s64 + 31384;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DB040;
	sub_821F0108(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x821f0108
	ctx.lr = 0x827DB04C;
	sub_821F0108(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x827db058
	goto loc_827DB058;
loc_827DB054:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DB058:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822bffa0
	ctx.lr = 0x827DB060;
	sub_822BFFA0(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827db070
	if (ctx.cr6.eq) goto loc_827DB070;
	// bl 0x82180b28
	ctx.lr = 0x827DB070;
	sub_82180B28(ctx, base);
loc_827DB070:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DB07C"))) PPC_WEAK_FUNC(sub_827DB07C);
PPC_FUNC_IMPL(__imp__sub_827DB07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DB080"))) PPC_WEAK_FUNC(sub_827DB080);
PPC_FUNC_IMPL(__imp__sub_827DB080) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5732
	ctx.r9.s64 = ctx.r11.s64 + 5732;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821940c8
	ctx.lr = 0x827DB0B0;
	sub_821940C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82978470
	ctx.lr = 0x827DB0BC;
	sub_82978470(ctx, base);
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r8,5732
	ctx.r7.s64 = ctx.r8.s64 + 5732;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x821940c8
	ctx.lr = 0x827DB0D0;
	sub_821940C8(ctx, base);
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

__attribute__((alias("__imp__sub_827DB0E4"))) PPC_WEAK_FUNC(sub_827DB0E4);
PPC_FUNC_IMPL(__imp__sub_827DB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DB0E8"))) PPC_WEAK_FUNC(sub_827DB0E8);
PPC_FUNC_IMPL(__imp__sub_827DB0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827DB0F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821937b0
	ctx.lr = 0x827DB108;
	sub_821937B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,31040
	ctx.r9.s64 = ctx.r11.s64 + 31040;
	// addi r28,r10,3224
	ctx.r28.s64 = ctx.r10.s64 + 3224;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,30892
	ctx.r4.s64 = ctx.r8.s64 + 30892;
	// bl 0x8244bc10
	ctx.lr = 0x827DB130;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827DB140;
	sub_8222CF18(ctx, base);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r7,30904
	ctx.r4.s64 = ctx.r7.s64 + 30904;
	// bl 0x8244bc10
	ctx.lr = 0x827DB154;
	sub_8244BC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827DB164;
	sub_8222CF18(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r6,30916
	ctx.r4.s64 = ctx.r6.s64 + 30916;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3e78
	ctx.lr = 0x827DB178;
	sub_821E3E78(ctx, base);
	// stb r3,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DB188"))) PPC_WEAK_FUNC(sub_827DB188);
PPC_FUNC_IMPL(__imp__sub_827DB188) {
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
	// bl 0x829c33f8
	ctx.lr = 0x827DB1A0;
	sub_829C33F8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827DB1C0"))) PPC_WEAK_FUNC(sub_827DB1C0);
PPC_FUNC_IMPL(__imp__sub_827DB1C0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db204
	if (ctx.cr6.eq) goto loc_827DB204;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db200
	if (ctx.cr6.eq) goto loc_827DB200;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827db208
	goto loc_827DB208;
loc_827DB200:
	// bl 0x821940c8
	ctx.lr = 0x827DB204;
	sub_821940C8(ctx, base);
loc_827DB204:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DB208:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827db308
	if (ctx.cr6.eq) goto loc_827DB308;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db244
	if (ctx.cr6.eq) goto loc_827DB244;
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db30c
	goto loc_827DB30C;
loc_827DB244:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827db2b0
	if (!ctx.cr0.gt) goto loc_827DB2B0;
loc_827DB260:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827db280
	if (ctx.cr6.lt) goto loc_827DB280;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827DB280:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827db29c
	if (ctx.cr6.eq) goto loc_827DB29C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827db2a4
	goto loc_827DB2A4;
loc_827DB29C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DB2A4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827db260
	if (ctx.cr6.gt) goto loc_827DB260;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DB2B0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827db2f4
	if (ctx.cr6.eq) goto loc_827DB2F4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827db2cc
	if (ctx.cr6.gt) goto loc_827DB2CC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DB2CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827db2f4
	if (!ctx.cr6.eq) goto loc_827DB2F4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db30c
	goto loc_827DB30C;
loc_827DB2F4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db30c
	goto loc_827DB30C;
loc_827DB308:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DB30C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db330
	if (ctx.cr6.eq) goto loc_827DB330;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x823db930
	ctx.lr = 0x827DB320;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DB32C;
	sub_82500CB0(ctx, base);
	// b 0x827db334
	goto loc_827DB334;
loc_827DB330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827DB334:
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

__attribute__((alias("__imp__sub_827DB34C"))) PPC_WEAK_FUNC(sub_827DB34C);
PPC_FUNC_IMPL(__imp__sub_827DB34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DB350"))) PPC_WEAK_FUNC(sub_827DB350);
PPC_FUNC_IMPL(__imp__sub_827DB350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827DB358;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db390
	if (ctx.cr6.eq) goto loc_827DB390;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db38c
	if (ctx.cr6.eq) goto loc_827DB38C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827db394
	goto loc_827DB394;
loc_827DB38C:
	// bl 0x821940c8
	ctx.lr = 0x827DB390;
	sub_821940C8(ctx, base);
loc_827DB390:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB394:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827db494
	if (ctx.cr6.eq) goto loc_827DB494;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db3d0
	if (ctx.cr6.eq) goto loc_827DB3D0;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db498
	goto loc_827DB498;
loc_827DB3D0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827db43c
	if (!ctx.cr0.gt) goto loc_827DB43C;
loc_827DB3EC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827db40c
	if (ctx.cr6.lt) goto loc_827DB40C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DB40C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827db428
	if (ctx.cr6.eq) goto loc_827DB428;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827db430
	goto loc_827DB430;
loc_827DB428:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DB430:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827db3ec
	if (ctx.cr6.gt) goto loc_827DB3EC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DB43C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827db480
	if (ctx.cr6.eq) goto loc_827DB480;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827db458
	if (ctx.cr6.gt) goto loc_827DB458;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827db480
	if (!ctx.cr6.eq) goto loc_827DB480;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db498
	goto loc_827DB498;
loc_827DB480:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db498
	goto loc_827DB498;
loc_827DB494:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB498:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db6ac
	if (ctx.cr6.eq) goto loc_827DB6AC;
	// addi r4,r26,108
	ctx.r4.s64 = ctx.r26.s64 + 108;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825022e8
	ctx.lr = 0x827DB4B0;
	sub_825022E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x827db4d0
	if (ctx.cr6.eq) goto loc_827DB4D0;
	// lbz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827db4d4
	if (!ctx.cr6.eq) goto loc_827DB4D4;
loc_827DB4D0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB4D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db6ac
	if (ctx.cr6.eq) goto loc_827DB6AC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x824c7f08
	ctx.lr = 0x827DB4EC;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db5dc
	if (ctx.cr6.eq) goto loc_827DB5DC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db524
	if (ctx.cr6.eq) goto loc_827DB524;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x827db5e4
	goto loc_827DB5E4;
loc_827DB524:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827db58c
	if (!ctx.cr0.gt) goto loc_827DB58C;
loc_827DB53C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827db55c
	if (ctx.cr6.lt) goto loc_827DB55C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DB55C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827db578
	if (ctx.cr6.eq) goto loc_827DB578;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827db580
	goto loc_827DB580;
loc_827DB578:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DB580:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827db53c
	if (ctx.cr6.gt) goto loc_827DB53C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DB58C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827db5cc
	if (ctx.cr6.eq) goto loc_827DB5CC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827db5a8
	if (ctx.cr6.gt) goto loc_827DB5A8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB5A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827db5cc
	if (!ctx.cr6.eq) goto loc_827DB5CC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db5e4
	goto loc_827DB5E4;
loc_827DB5CC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db5e4
	goto loc_827DB5E4;
loc_827DB5DC:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB5E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db628
	if (ctx.cr6.eq) goto loc_827DB628;
	// lbz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db61c
	if (ctx.cr6.eq) goto loc_827DB61C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824936b8
	ctx.lr = 0x827DB608;
	sub_824936B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82493ac0
	ctx.lr = 0x827DB614;
	sub_82493AC0(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x827db628
	goto loc_827DB628;
loc_827DB61C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824926f8
	ctx.lr = 0x827DB628;
	sub_824926F8(ctx, base);
loc_827DB628:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db6ac
	if (ctx.cr6.eq) goto loc_827DB6AC;
	// addi r31,r26,112
	ctx.r31.s64 = ctx.r26.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82271780
	ctx.lr = 0x827DB644;
	sub_82271780(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db6ac
	if (ctx.cr6.eq) goto loc_827DB6AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823db930
	ctx.lr = 0x827DB658;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DB664;
	sub_82500CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827db684
	if (ctx.cr6.eq) goto loc_827DB684;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827db688
	if (!ctx.cr6.eq) goto loc_827DB688;
loc_827DB684:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DB688:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db69c
	if (ctx.cr6.eq) goto loc_827DB69C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500c18
	ctx.lr = 0x827DB69C;
	sub_82500C18(ctx, base);
loc_827DB69C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500da0
	ctx.lr = 0x827DB6AC;
	sub_82500DA0(ctx, base);
loc_827DB6AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DB6B4"))) PPC_WEAK_FUNC(sub_827DB6B4);
PPC_FUNC_IMPL(__imp__sub_827DB6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DB6B8"))) PPC_WEAK_FUNC(sub_827DB6B8);
PPC_FUNC_IMPL(__imp__sub_827DB6B8) {
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
	// bl 0x821e32f8
	ctx.lr = 0x827DB6D0;
	sub_821E32F8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_827DB6F0"))) PPC_WEAK_FUNC(sub_827DB6F0);
PPC_FUNC_IMPL(__imp__sub_827DB6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827DB6F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db730
	if (ctx.cr6.eq) goto loc_827DB730;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db72c
	if (ctx.cr6.eq) goto loc_827DB72C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827db734
	goto loc_827DB734;
loc_827DB72C:
	// bl 0x821940c8
	ctx.lr = 0x827DB730;
	sub_821940C8(ctx, base);
loc_827DB730:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DB734:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827db834
	if (ctx.cr6.eq) goto loc_827DB834;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db770
	if (ctx.cr6.eq) goto loc_827DB770;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db838
	goto loc_827DB838;
loc_827DB770:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827db7dc
	if (!ctx.cr0.gt) goto loc_827DB7DC;
loc_827DB78C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827db7ac
	if (ctx.cr6.lt) goto loc_827DB7AC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DB7AC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827db7c8
	if (ctx.cr6.eq) goto loc_827DB7C8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827db7d0
	goto loc_827DB7D0;
loc_827DB7C8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DB7D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827db78c
	if (ctx.cr6.gt) goto loc_827DB78C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DB7DC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827db820
	if (ctx.cr6.eq) goto loc_827DB820;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827db7f8
	if (ctx.cr6.gt) goto loc_827DB7F8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DB7F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827db820
	if (!ctx.cr6.eq) goto loc_827DB820;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db838
	goto loc_827DB838;
loc_827DB820:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827db838
	goto loc_827DB838;
loc_827DB834:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DB838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dba48
	if (ctx.cr6.eq) goto loc_827DBA48;
	// addi r4,r27,120
	ctx.r4.s64 = ctx.r27.s64 + 120;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825022e8
	ctx.lr = 0x827DB850;
	sub_825022E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827db870
	if (ctx.cr6.eq) goto loc_827DB870;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827db874
	if (!ctx.cr6.eq) goto loc_827DB874;
loc_827DB870:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DB874:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dba48
	if (ctx.cr6.eq) goto loc_827DBA48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x824c7f08
	ctx.lr = 0x827DB88C;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827db988
	if (ctx.cr6.eq) goto loc_827DB988;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db8c8
	if (ctx.cr6.eq) goto loc_827DB8C8;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827db990
	goto loc_827DB990;
loc_827DB8C8:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827db930
	if (!ctx.cr0.gt) goto loc_827DB930;
loc_827DB8E0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827db900
	if (ctx.cr6.lt) goto loc_827DB900;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DB900:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827db91c
	if (ctx.cr6.eq) goto loc_827DB91C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827db924
	goto loc_827DB924;
loc_827DB91C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DB924:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827db8e0
	if (ctx.cr6.gt) goto loc_827DB8E0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DB930:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827db974
	if (ctx.cr6.eq) goto loc_827DB974;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827db94c
	if (ctx.cr6.gt) goto loc_827DB94C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DB94C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827db974
	if (!ctx.cr6.eq) goto loc_827DB974;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827db990
	goto loc_827DB990;
loc_827DB974:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x827db990
	goto loc_827DB990;
loc_827DB988:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_827DB990:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db9c4
	if (ctx.cr6.eq) goto loc_827DB9C4;
	// lbz r11,128(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827db9b8
	if (ctx.cr6.eq) goto loc_827DB9B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824936b8
	ctx.lr = 0x827DB9B0;
	sub_824936B8(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x827db9c4
	goto loc_827DB9C4;
loc_827DB9B8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824926f8
	ctx.lr = 0x827DB9C4;
	sub_824926F8(ctx, base);
loc_827DB9C4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dba48
	if (ctx.cr6.eq) goto loc_827DBA48;
	// addi r31,r27,124
	ctx.r31.s64 = ctx.r27.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82271780
	ctx.lr = 0x827DB9E0;
	sub_82271780(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dba48
	if (ctx.cr6.eq) goto loc_827DBA48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823db930
	ctx.lr = 0x827DB9F4;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DBA00;
	sub_82500CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827dba20
	if (ctx.cr6.eq) goto loc_827DBA20;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dba24
	if (!ctx.cr6.eq) goto loc_827DBA24;
loc_827DBA20:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DBA24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dba38
	if (ctx.cr6.eq) goto loc_827DBA38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82500c18
	ctx.lr = 0x827DBA38;
	sub_82500C18(ctx, base);
loc_827DBA38:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82500da0
	ctx.lr = 0x827DBA48;
	sub_82500DA0(ctx, base);
loc_827DBA48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DBA50"))) PPC_WEAK_FUNC(sub_827DBA50);
PPC_FUNC_IMPL(__imp__sub_827DBA50) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8222cf18
	ctx.lr = 0x827DBA80;
	sub_8222CF18(ctx, base);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-16924
	ctx.r4.s64 = ctx.r10.s64 + -16924;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DBA94;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x827f0248
	ctx.lr = 0x827DBAA8;
	sub_827F0248(ctx, base);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r7,r9,31040
	ctx.r7.s64 = ctx.r9.s64 + 31040;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-20096
	ctx.r4.s64 = ctx.r8.s64 + -20096;
	// bl 0x821f0108
	ctx.lr = 0x827DBAC4;
	sub_821F0108(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821f0108
	ctx.lr = 0x827DBAD0;
	sub_821F0108(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r6,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r6.u8);
	// bl 0x82214f08
	ctx.lr = 0x827DBAE0;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827DBAE8;
	sub_82214F08(ctx, base);
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r5,31208
	ctx.r4.s64 = ctx.r5.s64 + 31208;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_827DBB14"))) PPC_WEAK_FUNC(sub_827DBB14);
PPC_FUNC_IMPL(__imp__sub_827DBB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DBB18"))) PPC_WEAK_FUNC(sub_827DBB18);
PPC_FUNC_IMPL(__imp__sub_827DBB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827DBB20;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbb58
	if (ctx.cr6.eq) goto loc_827DBB58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dbb50
	if (ctx.cr6.eq) goto loc_827DBB50;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dbb5c
	goto loc_827DBB5C;
loc_827DBB50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DBB58;
	sub_821940C8(ctx, base);
loc_827DBB58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827DBB5C:
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82232748
	ctx.lr = 0x827DBB78;
	sub_82232748(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dbc20
	if (ctx.cr6.eq) goto loc_827DBC20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DBB8C;
	sub_824C7F08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827DBBA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r8,-28336
	ctx.r6.s64 = ctx.r8.s64 + -28336;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v0,r0,r7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lfs f0,-25888(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x827dbbec
	if (ctx.cr6.gt) goto loc_827DBBEC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBBEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbc20
	if (ctx.cr6.eq) goto loc_827DBC20;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30964
	ctx.r4.s64 = ctx.r11.s64 + 30964;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DBC0C;
	sub_8222CF18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,84
	ctx.r3.s64 = ctx.r29.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x827DBC18;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DBC20;
	sub_82214F08(ctx, base);
loc_827DBC20:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x827DBC28;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dbc44
	if (ctx.cr6.eq) goto loc_827DBC44;
	// addi r5,r29,108
	ctx.r5.s64 = ctx.r29.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8269c8b0
	ctx.lr = 0x827DBC3C;
	sub_8269C8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827dbc48
	goto loc_827DBC48;
loc_827DBC44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827DBC48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821bbcb0
	ctx.lr = 0x827DBC50;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226be28
	ctx.lr = 0x827DBC5C;
	sub_8226BE28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829ff648
	ctx.lr = 0x827DBC64;
	sub_829FF648(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbc90
	if (ctx.cr6.eq) goto loc_827DBC90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dbc88
	if (ctx.cr6.eq) goto loc_827DBC88;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dbc94
	goto loc_827DBC94;
loc_827DBC88:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DBC90;
	sub_821940C8(ctx, base);
loc_827DBC90:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBC94:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dbd94
	if (ctx.cr6.eq) goto loc_827DBD94;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dbcd0
	if (ctx.cr6.eq) goto loc_827DBCD0;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbd98
	goto loc_827DBD98;
loc_827DBCD0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dbd3c
	if (!ctx.cr0.gt) goto loc_827DBD3C;
loc_827DBCEC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dbd0c
	if (ctx.cr6.lt) goto loc_827DBD0C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827DBD0C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dbd28
	if (ctx.cr6.eq) goto loc_827DBD28;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dbd30
	goto loc_827DBD30;
loc_827DBD28:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DBD30:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dbcec
	if (ctx.cr6.gt) goto loc_827DBCEC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DBD3C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dbd80
	if (ctx.cr6.eq) goto loc_827DBD80;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dbd58
	if (ctx.cr6.gt) goto loc_827DBD58;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBD58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dbd80
	if (!ctx.cr6.eq) goto loc_827DBD80;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbd98
	goto loc_827DBD98;
loc_827DBD80:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbd98
	goto loc_827DBD98;
loc_827DBD94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBD98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbe08
	if (ctx.cr6.eq) goto loc_827DBE08;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x823db930
	ctx.lr = 0x827DBDAC;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DBDB8;
	sub_82500CB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x827dbdd8
	if (ctx.cr6.eq) goto loc_827DBDD8;
	// lbz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dbddc
	if (!ctx.cr6.eq) goto loc_827DBDDC;
loc_827DBDD8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBDDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbe08
	if (ctx.cr6.eq) goto loc_827DBE08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82500968
	ctx.lr = 0x827DBDF4;
	sub_82500968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x82265160
	ctx.lr = 0x827DBE00;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DBE08;
	sub_82214F08(ctx, base);
loc_827DBE08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829c33f8
	ctx.lr = 0x827DBE10;
	sub_829C33F8(ctx, base);
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbe44
	if (ctx.cr6.eq) goto loc_827DBE44;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dbe3c
	if (ctx.cr6.eq) goto loc_827DBE3C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dbe48
	goto loc_827DBE48;
loc_827DBE3C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DBE44;
	sub_821940C8(ctx, base);
loc_827DBE44:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBE48:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dbf48
	if (ctx.cr6.eq) goto loc_827DBF48;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dbe84
	if (ctx.cr6.eq) goto loc_827DBE84;
	// lbz r10,99(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 99);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbf4c
	goto loc_827DBF4C;
loc_827DBE84:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dbef0
	if (!ctx.cr0.gt) goto loc_827DBEF0;
loc_827DBEA0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,99
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 99, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dbec0
	if (ctx.cr6.lt) goto loc_827DBEC0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_827DBEC0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dbedc
	if (ctx.cr6.eq) goto loc_827DBEDC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dbee4
	goto loc_827DBEE4;
loc_827DBEDC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DBEE4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dbea0
	if (ctx.cr6.gt) goto loc_827DBEA0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DBEF0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dbf34
	if (ctx.cr6.eq) goto loc_827DBF34;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dbf0c
	if (ctx.cr6.gt) goto loc_827DBF0C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBF0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dbf34
	if (!ctx.cr6.eq) goto loc_827DBF34;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbf4c
	goto loc_827DBF4C;
loc_827DBF34:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dbf4c
	goto loc_827DBF4C;
loc_827DBF48:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_827DBF4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbf6c
	if (ctx.cr6.eq) goto loc_827DBF6C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827dbf6c
	if (ctx.cr6.eq) goto loc_827DBF6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827DBF6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DBF74"))) PPC_WEAK_FUNC(sub_827DBF74);
PPC_FUNC_IMPL(__imp__sub_827DBF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DBF78"))) PPC_WEAK_FUNC(sub_827DBF78);
PPC_FUNC_IMPL(__imp__sub_827DBF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DBF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc0b8
	if (ctx.cr6.eq) goto loc_827DC0B8;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DBFA0;
	sub_824C7F08(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc0a0
	if (ctx.cr6.eq) goto loc_827DC0A0;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dbfdc
	if (ctx.cr6.eq) goto loc_827DBFDC;
	// lbz r10,99(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 99);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc0a4
	goto loc_827DC0A4;
loc_827DBFDC:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc048
	if (!ctx.cr0.gt) goto loc_827DC048;
loc_827DBFF8:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,99
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 99, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc018
	if (ctx.cr6.lt) goto loc_827DC018;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DC018:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc034
	if (ctx.cr6.eq) goto loc_827DC034;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc03c
	goto loc_827DC03C;
loc_827DC034:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC03C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dbff8
	if (ctx.cr6.gt) goto loc_827DBFF8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC048:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dc08c
	if (ctx.cr6.eq) goto loc_827DC08C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc064
	if (ctx.cr6.gt) goto loc_827DC064;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DC064:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc08c
	if (!ctx.cr6.eq) goto loc_827DC08C;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc0a4
	goto loc_827DC0A4;
loc_827DC08C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc0a4
	goto loc_827DC0A4;
loc_827DC0A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DC0A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc0b8
	if (ctx.cr6.eq) goto loc_827DC0B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d12e0
	ctx.lr = 0x827DC0B8;
	sub_822D12E0(ctx, base);
loc_827DC0B8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc0e4
	if (ctx.cr6.eq) goto loc_827DC0E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc0e0
	if (ctx.cr6.eq) goto loc_827DC0E0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dc0e8
	goto loc_827DC0E8;
loc_827DC0E0:
	// bl 0x821940c8
	ctx.lr = 0x827DC0E4;
	sub_821940C8(ctx, base);
loc_827DC0E4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DC0E8:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dc1e8
	if (ctx.cr6.eq) goto loc_827DC1E8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc124
	if (ctx.cr6.eq) goto loc_827DC124;
	// lbz r9,91(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc1ec
	goto loc_827DC1EC;
loc_827DC124:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc190
	if (!ctx.cr0.gt) goto loc_827DC190;
loc_827DC140:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc160
	if (ctx.cr6.lt) goto loc_827DC160;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DC160:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc17c
	if (ctx.cr6.eq) goto loc_827DC17C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc184
	goto loc_827DC184;
loc_827DC17C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC184:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dc140
	if (ctx.cr6.gt) goto loc_827DC140;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC190:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dc1d4
	if (ctx.cr6.eq) goto loc_827DC1D4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc1ac
	if (ctx.cr6.gt) goto loc_827DC1AC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DC1AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc1d4
	if (!ctx.cr6.eq) goto loc_827DC1D4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc1ec
	goto loc_827DC1EC;
loc_827DC1D4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc1ec
	goto loc_827DC1EC;
loc_827DC1E8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DC1EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc1fc
	if (ctx.cr6.eq) goto loc_827DC1FC;
	// stb r29,109(r31)
	PPC_STORE_U8(ctx.r31.u32 + 109, ctx.r29.u8);
loc_827DC1FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC204"))) PPC_WEAK_FUNC(sub_827DC204);
PPC_FUNC_IMPL(__imp__sub_827DC204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DC208"))) PPC_WEAK_FUNC(sub_827DC208);
PPC_FUNC_IMPL(__imp__sub_827DC208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DC210;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc244
	if (ctx.cr6.eq) goto loc_827DC244;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc240
	if (ctx.cr6.eq) goto loc_827DC240;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dc248
	goto loc_827DC248;
loc_827DC240:
	// bl 0x821940c8
	ctx.lr = 0x827DC244;
	sub_821940C8(ctx, base);
loc_827DC244:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827DC248:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dc39c
	if (ctx.cr6.eq) goto loc_827DC39C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc27c
	if (ctx.cr6.eq) goto loc_827DC27C;
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x827dc32c
	goto loc_827DC32C;
loc_827DC27C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc2ec
	if (!ctx.cr0.gt) goto loc_827DC2EC;
loc_827DC29C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc2bc
	if (ctx.cr6.lt) goto loc_827DC2BC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827DC2BC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc2d8
	if (ctx.cr6.eq) goto loc_827DC2D8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc2e0
	goto loc_827DC2E0;
loc_827DC2D8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC2E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dc29c
	if (ctx.cr6.gt) goto loc_827DC29C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC2EC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dc324
	if (ctx.cr6.eq) goto loc_827DC324;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc308
	if (ctx.cr6.gt) goto loc_827DC308;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827DC308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc324
	if (!ctx.cr6.eq) goto loc_827DC324;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827dc328
	goto loc_827DC328;
loc_827DC324:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_827DC328:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_827DC32C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dc39c
	if (ctx.cr6.eq) goto loc_827DC39C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dc34c
	if (ctx.cr6.eq) goto loc_827DC34C;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821e8870
	ctx.lr = 0x827DC348;
	sub_821E8870(ctx, base);
	// b 0x827dc350
	goto loc_827DC350;
loc_827DC34C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827DC350:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc368
	if (ctx.cr6.eq) goto loc_827DC368;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8238f4a0
	ctx.lr = 0x827DC368;
	sub_8238F4A0(ctx, base);
loc_827DC368:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dc380
	if (ctx.cr6.eq) goto loc_827DC380;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x821e8870
	ctx.lr = 0x827DC37C;
	sub_821E8870(ctx, base);
	// b 0x827dc384
	goto loc_827DC384;
loc_827DC380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827DC384:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc39c
	if (ctx.cr6.eq) goto loc_827DC39C;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8238f4a0
	ctx.lr = 0x827DC39C;
	sub_8238F4A0(ctx, base);
loc_827DC39C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827db350
	ctx.lr = 0x827DC3A8;
	sub_827DB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC3B0"))) PPC_WEAK_FUNC(sub_827DC3B0);
PPC_FUNC_IMPL(__imp__sub_827DC3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DC3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DC3DC;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DC3EC;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x827f0248
	ctx.lr = 0x827DC400;
	sub_827F0248(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r9,r10,31040
	ctx.r9.s64 = ctx.r10.s64 + 31040;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DC418;
	sub_821F0108(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r8,-20096
	ctx.r4.s64 = ctx.r8.s64 + -20096;
	// bl 0x821f0108
	ctx.lr = 0x827DC428;
	sub_821F0108(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// bl 0x82214f08
	ctx.lr = 0x827DC438;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827DC440;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r4,r6,31296
	ctx.r4.s64 = ctx.r6.s64 + 31296;
	// stw r5,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC464"))) PPC_WEAK_FUNC(sub_827DC464);
PPC_FUNC_IMPL(__imp__sub_827DC464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DC468"))) PPC_WEAK_FUNC(sub_827DC468);
PPC_FUNC_IMPL(__imp__sub_827DC468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DC470;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DC494;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DC4A4;
	sub_8222CF18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x827f0248
	ctx.lr = 0x827DC4B8;
	sub_827F0248(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r9,r10,31040
	ctx.r9.s64 = ctx.r10.s64 + 31040;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DC4D0;
	sub_821F0108(ctx, base);
	// lis r8,-31926
	ctx.r8.s64 = -2092302336;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r8,-20096
	ctx.r4.s64 = ctx.r8.s64 + -20096;
	// bl 0x821f0108
	ctx.lr = 0x827DC4E0;
	sub_821F0108(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r7,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r7.u8);
	// bl 0x82214f08
	ctx.lr = 0x827DC4F0;
	sub_82214F08(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827DC4F8;
	sub_82214F08(ctx, base);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r4,r6,31296
	ctx.r4.s64 = ctx.r6.s64 + 31296;
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC51C"))) PPC_WEAK_FUNC(sub_827DC51C);
PPC_FUNC_IMPL(__imp__sub_827DC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DC520"))) PPC_WEAK_FUNC(sub_827DC520);
PPC_FUNC_IMPL(__imp__sub_827DC520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x827DC528;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc564
	if (ctx.cr6.eq) goto loc_827DC564;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc560
	if (ctx.cr6.eq) goto loc_827DC560;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dc568
	goto loc_827DC568;
loc_827DC560:
	// bl 0x821940c8
	ctx.lr = 0x827DC564;
	sub_821940C8(ctx, base);
loc_827DC564:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC568:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dc668
	if (ctx.cr6.eq) goto loc_827DC668;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc5a4
	if (ctx.cr6.eq) goto loc_827DC5A4;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc66c
	goto loc_827DC66C;
loc_827DC5A4:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc610
	if (!ctx.cr0.gt) goto loc_827DC610;
loc_827DC5C0:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc5e0
	if (ctx.cr6.lt) goto loc_827DC5E0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DC5E0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc5fc
	if (ctx.cr6.eq) goto loc_827DC5FC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc604
	goto loc_827DC604;
loc_827DC5FC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC604:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dc5c0
	if (ctx.cr6.gt) goto loc_827DC5C0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC610:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dc654
	if (ctx.cr6.eq) goto loc_827DC654;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc62c
	if (ctx.cr6.gt) goto loc_827DC62C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC62C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc654
	if (!ctx.cr6.eq) goto loc_827DC654;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc66c
	goto loc_827DC66C;
loc_827DC654:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc66c
	goto loc_827DC66C;
loc_827DC668:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC66C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc7f8
	if (ctx.cr6.eq) goto loc_827DC7F8;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x823db930
	ctx.lr = 0x827DC680;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DC68C;
	sub_82500CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x827dc6b0
	if (ctx.cr6.eq) goto loc_827DC6B0;
	// lbz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dc6b4
	if (!ctx.cr6.eq) goto loc_827DC6B4;
loc_827DC6B0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC6B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc7f8
	if (ctx.cr6.eq) goto loc_827DC7F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DC6C8;
	sub_824C7F08(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc7c4
	if (ctx.cr6.eq) goto loc_827DC7C4;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc704
	if (ctx.cr6.eq) goto loc_827DC704;
	// lbz r11,57(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc7c8
	goto loc_827DC7C8;
loc_827DC704:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc76c
	if (!ctx.cr0.gt) goto loc_827DC76C;
loc_827DC71C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,57
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 57, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc73c
	if (ctx.cr6.lt) goto loc_827DC73C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DC73C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc758
	if (ctx.cr6.eq) goto loc_827DC758;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc760
	goto loc_827DC760;
loc_827DC758:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC760:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dc71c
	if (ctx.cr6.gt) goto loc_827DC71C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC76C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dc7b0
	if (ctx.cr6.eq) goto loc_827DC7B0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc788
	if (ctx.cr6.gt) goto loc_827DC788;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC788:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc7b0
	if (!ctx.cr6.eq) goto loc_827DC7B0;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc7c8
	goto loc_827DC7C8;
loc_827DC7B0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dc7c8
	goto loc_827DC7C8;
loc_827DC7C4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DC7C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc7f8
	if (ctx.cr6.eq) goto loc_827DC7F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824abc20
	ctx.lr = 0x827DC7E0;
	sub_824ABC20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dc7f8
	if (!ctx.cr6.eq) goto loc_827DC7F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// b 0x827dc800
	goto loc_827DC800;
loc_827DC7F8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
loc_827DC800:
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DC80C;
	sub_8222CF18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC818"))) PPC_WEAK_FUNC(sub_827DC818);
PPC_FUNC_IMPL(__imp__sub_827DC818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DC820;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DC840;
	sub_8222CF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db0e8
	ctx.lr = 0x827DC854;
	sub_827DB0E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DC85C;
	sub_82214F08(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,31296
	ctx.r8.s64 = ctx.r10.s64 + 31296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r4,r9,30980
	ctx.r4.s64 = ctx.r9.s64 + 30980;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8229db28
	ctx.lr = 0x827DC87C;
	sub_8229DB28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,-3228
	ctx.r4.s64 = ctx.r7.s64 + -3228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8229db28
	ctx.lr = 0x827DC89C;
	sub_8229DB28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x827dc8dc
	if (ctx.cr6.eq) goto loc_827DC8DC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x827dc8c8
	if (ctx.cr6.eq) goto loc_827DC8C8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x827dc8e4
	if (!ctx.cr6.eq) goto loc_827DC8E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_827DC8C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_827DC8DC:
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827DC8E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DC8EC"))) PPC_WEAK_FUNC(sub_827DC8EC);
PPC_FUNC_IMPL(__imp__sub_827DC8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DC8F0"))) PPC_WEAK_FUNC(sub_827DC8F0);
PPC_FUNC_IMPL(__imp__sub_827DC8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x827DC8F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dc934
	if (ctx.cr6.eq) goto loc_827DC934;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc92c
	if (ctx.cr6.eq) goto loc_827DC92C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dc938
	goto loc_827DC938;
loc_827DC92C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DC934;
	sub_821940C8(ctx, base);
loc_827DC934:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DC938:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dca38
	if (ctx.cr6.eq) goto loc_827DCA38;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dc974
	if (ctx.cr6.eq) goto loc_827DC974;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dca3c
	goto loc_827DCA3C;
loc_827DC974:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dc9e0
	if (!ctx.cr0.gt) goto loc_827DC9E0;
loc_827DC990:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dc9b0
	if (ctx.cr6.lt) goto loc_827DC9B0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DC9B0:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dc9cc
	if (ctx.cr6.eq) goto loc_827DC9CC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dc9d4
	goto loc_827DC9D4;
loc_827DC9CC:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DC9D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dc990
	if (ctx.cr6.gt) goto loc_827DC990;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DC9E0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dca24
	if (ctx.cr6.eq) goto loc_827DCA24;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dc9fc
	if (ctx.cr6.gt) goto loc_827DC9FC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DC9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dca24
	if (!ctx.cr6.eq) goto loc_827DCA24;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dca3c
	goto loc_827DCA3C;
loc_827DCA24:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dca3c
	goto loc_827DCA3C;
loc_827DCA38:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCA3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcff0
	if (ctx.cr6.eq) goto loc_827DCFF0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DCA54;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dcb54
	if (ctx.cr6.eq) goto loc_827DCB54;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dca90
	if (ctx.cr6.eq) goto loc_827DCA90;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcb58
	goto loc_827DCB58;
loc_827DCA90:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dcafc
	if (!ctx.cr0.gt) goto loc_827DCAFC;
loc_827DCAAC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dcacc
	if (ctx.cr6.lt) goto loc_827DCACC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DCACC:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dcae8
	if (ctx.cr6.eq) goto loc_827DCAE8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dcaf0
	goto loc_827DCAF0;
loc_827DCAE8:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DCAF0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dcaac
	if (ctx.cr6.gt) goto loc_827DCAAC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DCAFC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dcb40
	if (ctx.cr6.eq) goto loc_827DCB40;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dcb18
	if (ctx.cr6.gt) goto loc_827DCB18;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCB18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dcb40
	if (!ctx.cr6.eq) goto loc_827DCB40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcb58
	goto loc_827DCB58;
loc_827DCB40:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcb58
	goto loc_827DCB58;
loc_827DCB54:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCB58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcf20
	if (ctx.cr6.eq) goto loc_827DCF20;
	// lwz r11,120(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 120);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dcd08
	if (!ctx.cr6.eq) goto loc_827DCD08;
	// lwz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827dcc40
	if (!ctx.cr6.eq) goto loc_827DCC40;
	// lwz r29,84(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827dcd0c
	if (!ctx.cr6.eq) goto loc_827DCD0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82500180
	ctx.lr = 0x827DCB98;
	sub_82500180(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcbfc
	if (ctx.cr6.eq) goto loc_827DCBFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827dcbfc
	if (!ctx.cr6.gt) goto loc_827DCBFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823db930
	ctx.lr = 0x827DCBB8;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DCBC4;
	sub_82500CB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dcbe0
	if (ctx.cr6.eq) goto loc_827DCBE0;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dcbe4
	if (!ctx.cr6.eq) goto loc_827DCBE4;
loc_827DCBE0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCBE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcbfc
	if (ctx.cr6.eq) goto loc_827DCBFC;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827dcc34
	if (!ctx.cr6.eq) goto loc_827DCC34;
loc_827DCBFC:
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r31,r11,29344
	ctx.r31.s64 = ctx.r11.s64 + 29344;
	// lwz r11,29352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29352);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827dcc30
	if (!ctx.cr6.eq) goto loc_827DCC30;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r4,r9,29652
	ctx.r4.s64 = ctx.r9.s64 + 29652;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,29352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29352, ctx.r11.u32);
	// bl 0x8219c690
	ctx.lr = 0x827DCC30;
	sub_8219C690(ctx, base);
loc_827DCC30:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_827DCC34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DCC3C;
	sub_82214F08(ctx, base);
	// b 0x827dcd0c
	goto loc_827DCD0C;
loc_827DCC40:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827dcd0c
	if (!ctx.cr6.eq) goto loc_827DCD0C;
	// lwz r29,88(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827dcd0c
	if (!ctx.cr6.eq) goto loc_827DCD0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82500568
	ctx.lr = 0x827DCC60;
	sub_82500568(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dccc4
	if (ctx.cr6.eq) goto loc_827DCCC4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827dccc4
	if (!ctx.cr6.gt) goto loc_827DCCC4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823db930
	ctx.lr = 0x827DCC80;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DCC8C;
	sub_82500CB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dcca8
	if (ctx.cr6.eq) goto loc_827DCCA8;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dccac
	if (!ctx.cr6.eq) goto loc_827DCCAC;
loc_827DCCA8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCCAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dccc4
	if (ctx.cr6.eq) goto loc_827DCCC4;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x827dccfc
	if (!ctx.cr6.eq) goto loc_827DCCFC;
loc_827DCCC4:
	// lis r10,-31921
	ctx.r10.s64 = -2091974656;
	// lis r11,-31921
	ctx.r11.s64 = -2091974656;
	// addi r31,r11,29336
	ctx.r31.s64 = ctx.r11.s64 + 29336;
	// lwz r11,29352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29352);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827dccf8
	if (!ctx.cr6.eq) goto loc_827DCCF8;
	// lis r9,-31927
	ctx.r9.s64 = -2092367872;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r4,r9,29656
	ctx.r4.s64 = ctx.r9.s64 + 29656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,29352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29352, ctx.r11.u32);
	// bl 0x8219c690
	ctx.lr = 0x827DCCF8;
	sub_8219C690(ctx, base);
loc_827DCCF8:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_827DCCFC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DCD04;
	sub_82214F08(ctx, base);
	// b 0x827dcd0c
	goto loc_827DCD0C;
loc_827DCD08:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_827DCD0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r26,108
	ctx.r30.s64 = ctx.r26.s64 + 108;
	// bl 0x82495270
	ctx.lr = 0x827DCD1C;
	sub_82495270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265160
	ctx.lr = 0x827DCD28;
	sub_82265160(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x823db930
	ctx.lr = 0x827DCD34;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DCD40;
	sub_82500CB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dcd5c
	if (ctx.cr6.eq) goto loc_827DCD5C;
	// lbz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dcd60
	if (!ctx.cr6.eq) goto loc_827DCD60;
loc_827DCD5C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCD60:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcd8c
	if (ctx.cr6.eq) goto loc_827DCD8C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x827dcd88
	if (ctx.cr6.eq) goto loc_827DCD88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82503338
	ctx.lr = 0x827DCD84;
	sub_82503338(ctx, base);
	// b 0x827dcd8c
	goto loc_827DCD8C;
loc_827DCD88:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_827DCD8C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcf20
	if (ctx.cr6.eq) goto loc_827DCF20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DCDA4;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dcea4
	if (ctx.cr6.eq) goto loc_827DCEA4;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcde0
	if (ctx.cr6.eq) goto loc_827DCDE0;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcea8
	goto loc_827DCEA8;
loc_827DCDE0:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dce4c
	if (!ctx.cr0.gt) goto loc_827DCE4C;
loc_827DCDFC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dce1c
	if (ctx.cr6.lt) goto loc_827DCE1C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DCE1C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dce38
	if (ctx.cr6.eq) goto loc_827DCE38;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dce40
	goto loc_827DCE40;
loc_827DCE38:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DCE40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dcdfc
	if (ctx.cr6.gt) goto loc_827DCDFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DCE4C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dce90
	if (ctx.cr6.eq) goto loc_827DCE90;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dce68
	if (ctx.cr6.gt) goto loc_827DCE68;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCE68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dce90
	if (!ctx.cr6.eq) goto loc_827DCE90;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcea8
	goto loc_827DCEA8;
loc_827DCE90:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dcea8
	goto loc_827DCEA8;
loc_827DCEA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCEA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcf20
	if (ctx.cr6.eq) goto loc_827DCF20;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-16592
	ctx.r4.s64 = ctx.r11.s64 + -16592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DCEC8;
	sub_8222CF18(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8261c390
	ctx.lr = 0x827DCED8;
	sub_8261C390(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DCEE4;
	sub_82214F08(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dcf00
	if (ctx.cr6.eq) goto loc_827DCF00;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dcf04
	if (!ctx.cr6.eq) goto loc_827DCF04;
loc_827DCF00:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCF04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcf20
	if (ctx.cr6.eq) goto loc_827DCF20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82500da0
	ctx.lr = 0x827DCF20;
	sub_82500DA0(ctx, base);
loc_827DCF20:
	// addi r5,r26,108
	ctx.r5.s64 = ctx.r26.s64 + 108;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825035b0
	ctx.lr = 0x827DCF30;
	sub_825035B0(ctx, base);
	// lis r11,-31927
	ctx.r11.s64 = -2092367872;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,26912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x824c7f08
	ctx.lr = 0x827DCF50;
	sub_824C7F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232748
	ctx.lr = 0x827DCF5C;
	sub_82232748(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dcfdc
	if (ctx.cr6.eq) goto loc_827DCFDC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DCF70;
	sub_824C7F08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x82268be0
	ctx.lr = 0x827DCF80;
	sub_82268BE0(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lvx128 v13,r0,r3
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-28336
	ctx.r8.s64 = ctx.r10.s64 + -28336;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// lvx128 v0,r0,r8
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f0,-25888(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25888);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x827dcfc0
	if (ctx.cr6.gt) goto loc_827DCFC0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DCFC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dcfdc
	if (ctx.cr6.eq) goto loc_827DCFDC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,31000
	ctx.r4.s64 = ctx.r11.s64 + 31000;
	// bl 0x821da550
	ctx.lr = 0x827DCFDC;
	sub_821DA550(ctx, base);
loc_827DCFDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,84
	ctx.r3.s64 = ctx.r26.s64 + 84;
	// bl 0x82265160
	ctx.lr = 0x827DCFE8;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DCFF0;
	sub_82214F08(ctx, base);
loc_827DCFF0:
	// lwz r10,124(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r30,r11,-18864
	ctx.r30.s64 = ctx.r11.s64 + -18864;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bne cr6,0x827dd138
	if (!ctx.cr6.eq) goto loc_827DD138;
	// bl 0x824c7f08
	ctx.lr = 0x827DD010;
	sub_824C7F08(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd110
	if (ctx.cr6.eq) goto loc_827DD110;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd04c
	if (ctx.cr6.eq) goto loc_827DD04C;
	// lbz r10,99(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 99);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd114
	goto loc_827DD114;
loc_827DD04C:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd0b8
	if (!ctx.cr0.gt) goto loc_827DD0B8;
loc_827DD068:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,99
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 99, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd088
	if (ctx.cr6.lt) goto loc_827DD088;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DD088:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd0a4
	if (ctx.cr6.eq) goto loc_827DD0A4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd0ac
	goto loc_827DD0AC;
loc_827DD0A4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD0AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd068
	if (ctx.cr6.gt) goto loc_827DD068;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD0B8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd0fc
	if (ctx.cr6.eq) goto loc_827DD0FC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd0d4
	if (ctx.cr6.gt) goto loc_827DD0D4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD0D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd0fc
	if (!ctx.cr6.eq) goto loc_827DD0FC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd114
	goto loc_827DD114;
loc_827DD0FC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd114
	goto loc_827DD114;
loc_827DD110:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd268
	if (ctx.cr6.eq) goto loc_827DD268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,-376(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b3ae8
	ctx.lr = 0x827DD12C;
	sub_822B3AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284a5f8
	ctx.lr = 0x827DD134;
	sub_8284A5F8(ctx, base);
	// b 0x827dd268
	goto loc_827DD268;
loc_827DD138:
	// bl 0x824c7f08
	ctx.lr = 0x827DD13C;
	sub_824C7F08(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd23c
	if (ctx.cr6.eq) goto loc_827DD23C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd178
	if (ctx.cr6.eq) goto loc_827DD178;
	// lbz r10,99(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 99);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd240
	goto loc_827DD240;
loc_827DD178:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd1e4
	if (!ctx.cr0.gt) goto loc_827DD1E4;
loc_827DD194:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,99
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 99, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd1b4
	if (ctx.cr6.lt) goto loc_827DD1B4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DD1B4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd1d0
	if (ctx.cr6.eq) goto loc_827DD1D0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd1d8
	goto loc_827DD1D8;
loc_827DD1D0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD1D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd194
	if (ctx.cr6.gt) goto loc_827DD194;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD1E4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd228
	if (ctx.cr6.eq) goto loc_827DD228;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd200
	if (ctx.cr6.gt) goto loc_827DD200;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD200:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd228
	if (!ctx.cr6.eq) goto loc_827DD228;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd240
	goto loc_827DD240;
loc_827DD228:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd240
	goto loc_827DD240;
loc_827DD23C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD240:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd268
	if (ctx.cr6.eq) goto loc_827DD268;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827dd260
	if (ctx.cr6.eq) goto loc_827DD260;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827DD260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d12e0
	ctx.lr = 0x827DD268;
	sub_822D12E0(ctx, base);
loc_827DD268:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stfs f0,68(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 68, temp.u32);
	// bl 0x8221f388
	ctx.lr = 0x827DD278;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dd294
	if (ctx.cr6.eq) goto loc_827DD294;
	// addi r5,r26,108
	ctx.r5.s64 = ctx.r26.s64 + 108;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8269c8b0
	ctx.lr = 0x827DD28C;
	sub_8269C8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827dd298
	goto loc_827DD298;
loc_827DD294:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_827DD298:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821bbcb0
	ctx.lr = 0x827DD2A0;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226be28
	ctx.lr = 0x827DD2AC;
	sub_8226BE28(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x829ff648
	ctx.lr = 0x827DD2B4;
	sub_829FF648(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x829c33f8
	ctx.lr = 0x827DD2BC;
	sub_829C33F8(ctx, base);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,56(r26)
	PPC_STORE_U32(ctx.r26.u32 + 56, ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd2f4
	if (ctx.cr6.eq) goto loc_827DD2F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd2ec
	if (ctx.cr6.eq) goto loc_827DD2EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dd2f8
	goto loc_827DD2F8;
loc_827DD2EC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DD2F4;
	sub_821940C8(ctx, base);
loc_827DD2F4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD2F8:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dd3f8
	if (ctx.cr6.eq) goto loc_827DD3F8;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd334
	if (ctx.cr6.eq) goto loc_827DD334;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd3fc
	goto loc_827DD3FC;
loc_827DD334:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd3a0
	if (!ctx.cr0.gt) goto loc_827DD3A0;
loc_827DD350:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd370
	if (ctx.cr6.lt) goto loc_827DD370;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_827DD370:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd38c
	if (ctx.cr6.eq) goto loc_827DD38C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd394
	goto loc_827DD394;
loc_827DD38C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD394:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd350
	if (ctx.cr6.gt) goto loc_827DD350;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD3A0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd3e4
	if (ctx.cr6.eq) goto loc_827DD3E4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd3bc
	if (ctx.cr6.gt) goto loc_827DD3BC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD3BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd3e4
	if (!ctx.cr6.eq) goto loc_827DD3E4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd3fc
	goto loc_827DD3FC;
loc_827DD3E4:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd3fc
	goto loc_827DD3FC;
loc_827DD3F8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD3FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd480
	if (ctx.cr6.eq) goto loc_827DD480;
	// lwz r11,124(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 124);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x827db1c0
	ctx.lr = 0x827DD418;
	sub_827DB1C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827dd438
	if (ctx.cr6.eq) goto loc_827DD438;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dd43c
	if (!ctx.cr6.eq) goto loc_827DD43C;
loc_827DD438:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_827DD43C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd480
	if (ctx.cr6.eq) goto loc_827DD480;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5732
	ctx.r10.s64 = ctx.r11.s64 + 5732;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822149c8
	ctx.lr = 0x827DD460;
	sub_822149C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x82978470
	ctx.lr = 0x827DD46C;
	sub_82978470(ctx, base);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r8,r9,5732
	ctx.r8.s64 = ctx.r9.s64 + 5732;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x821940c8
	ctx.lr = 0x827DD480;
	sub_821940C8(ctx, base);
loc_827DD480:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DD488"))) PPC_WEAK_FUNC(sub_827DD488);
PPC_FUNC_IMPL(__imp__sub_827DD488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x827DD490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827dd600
	if (!ctx.cr6.eq) goto loc_827DD600;
	// bl 0x824c7f08
	ctx.lr = 0x827DD4B0;
	sub_824C7F08(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd600
	if (ctx.cr6.eq) goto loc_827DD600;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd4e4
	if (ctx.cr6.eq) goto loc_827DD4E4;
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827dd590
	goto loc_827DD590;
loc_827DD4E4:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd550
	if (!ctx.cr0.gt) goto loc_827DD550;
loc_827DD500:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,33
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 33, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd520
	if (ctx.cr6.lt) goto loc_827DD520;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DD520:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd53c
	if (ctx.cr6.eq) goto loc_827DD53C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd544
	goto loc_827DD544;
loc_827DD53C:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD544:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd500
	if (ctx.cr6.gt) goto loc_827DD500;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD550:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd588
	if (ctx.cr6.eq) goto loc_827DD588;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd56c
	if (ctx.cr6.gt) goto loc_827DD56C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DD56C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd588
	if (!ctx.cr6.eq) goto loc_827DD588;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x827dd58c
	goto loc_827DD58C;
loc_827DD588:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_827DD58C:
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_827DD590:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dd600
	if (ctx.cr6.eq) goto loc_827DD600;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dd5b0
	if (ctx.cr6.eq) goto loc_827DD5B0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821e8870
	ctx.lr = 0x827DD5AC;
	sub_821E8870(ctx, base);
	// b 0x827dd5b4
	goto loc_827DD5B4;
loc_827DD5B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827DD5B4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd5cc
	if (ctx.cr6.eq) goto loc_827DD5CC;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8238f4a0
	ctx.lr = 0x827DD5CC;
	sub_8238F4A0(ctx, base);
loc_827DD5CC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827dd5e4
	if (ctx.cr6.eq) goto loc_827DD5E4;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x821e8870
	ctx.lr = 0x827DD5E0;
	sub_821E8870(ctx, base);
	// b 0x827dd5e8
	goto loc_827DD5E8;
loc_827DD5E4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_827DD5E8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd600
	if (ctx.cr6.eq) goto loc_827DD600;
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8238f4a0
	ctx.lr = 0x827DD600;
	sub_8238F4A0(ctx, base);
loc_827DD600:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827db350
	ctx.lr = 0x827DD60C;
	sub_827DB350(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd638
	if (ctx.cr6.eq) goto loc_827DD638;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd634
	if (ctx.cr6.eq) goto loc_827DD634;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dd63c
	goto loc_827DD63C;
loc_827DD634:
	// bl 0x821940c8
	ctx.lr = 0x827DD638;
	sub_821940C8(ctx, base);
loc_827DD638:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DD63C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dd73c
	if (ctx.cr6.eq) goto loc_827DD73C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd678
	if (ctx.cr6.eq) goto loc_827DD678;
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd740
	goto loc_827DD740;
loc_827DD678:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd6e4
	if (!ctx.cr0.gt) goto loc_827DD6E4;
loc_827DD694:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd6b4
	if (ctx.cr6.lt) goto loc_827DD6B4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_827DD6B4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd6d0
	if (ctx.cr6.eq) goto loc_827DD6D0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd6d8
	goto loc_827DD6D8;
loc_827DD6D0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD6D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd694
	if (ctx.cr6.gt) goto loc_827DD694;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD6E4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd728
	if (ctx.cr6.eq) goto loc_827DD728;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd700
	if (ctx.cr6.gt) goto loc_827DD700;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DD700:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd728
	if (!ctx.cr6.eq) goto loc_827DD728;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd740
	goto loc_827DD740;
loc_827DD728:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd740
	goto loc_827DD740;
loc_827DD73C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_827DD740:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd758
	if (ctx.cr6.eq) goto loc_827DD758;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db080
	ctx.lr = 0x827DD758;
	sub_827DB080(ctx, base);
loc_827DD758:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DD760"))) PPC_WEAK_FUNC(sub_827DD760);
PPC_FUNC_IMPL(__imp__sub_827DD760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DD768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd7a0
	if (ctx.cr6.eq) goto loc_827DD7A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd798
	if (ctx.cr6.eq) goto loc_827DD798;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dd7a4
	goto loc_827DD7A4;
loc_827DD798:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DD7A0;
	sub_821940C8(ctx, base);
loc_827DD7A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD7A4:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,4,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dd8a4
	if (ctx.cr6.eq) goto loc_827DD8A4;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd7e0
	if (ctx.cr6.eq) goto loc_827DD7E0;
	// lbz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd8a8
	goto loc_827DD8A8;
loc_827DD7E0:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd84c
	if (!ctx.cr0.gt) goto loc_827DD84C;
loc_827DD7FC:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd81c
	if (ctx.cr6.lt) goto loc_827DD81C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DD81C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd838
	if (ctx.cr6.eq) goto loc_827DD838;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd840
	goto loc_827DD840;
loc_827DD838:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD840:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd7fc
	if (ctx.cr6.gt) goto loc_827DD7FC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD84C:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd890
	if (ctx.cr6.eq) goto loc_827DD890;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd868
	if (ctx.cr6.gt) goto loc_827DD868;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD868:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd890
	if (!ctx.cr6.eq) goto loc_827DD890;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd8a8
	goto loc_827DD8A8;
loc_827DD890:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd8a8
	goto loc_827DD8A8;
loc_827DD8A4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD8A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd8c0
	if (ctx.cr6.eq) goto loc_827DD8C0;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827db080
	ctx.lr = 0x827DD8C0;
	sub_827DB080(ctx, base);
loc_827DD8C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dd8ec
	if (ctx.cr6.eq) goto loc_827DD8EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd8e4
	if (ctx.cr6.eq) goto loc_827DD8E4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827dd8f0
	goto loc_827DD8F0;
loc_827DD8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821940c8
	ctx.lr = 0x827DD8EC;
	sub_821940C8(ctx, base);
loc_827DD8EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD8F0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,5,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827dd9f0
	if (ctx.cr6.eq) goto loc_827DD9F0;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827dd92c
	if (ctx.cr6.eq) goto loc_827DD92C;
	// lbz r9,91(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r11,r9,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd9f4
	goto loc_827DD9F4;
loc_827DD92C:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827dd998
	if (!ctx.cr0.gt) goto loc_827DD998;
loc_827DD948:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,91
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 91, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dd968
	if (ctx.cr6.lt) goto loc_827DD968;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DD968:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dd984
	if (ctx.cr6.eq) goto loc_827DD984;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827dd98c
	goto loc_827DD98C;
loc_827DD984:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DD98C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dd948
	if (ctx.cr6.gt) goto loc_827DD948;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DD998:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827dd9dc
	if (ctx.cr6.eq) goto loc_827DD9DC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827dd9b4
	if (ctx.cr6.gt) goto loc_827DD9B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD9B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827dd9dc
	if (!ctx.cr6.eq) goto loc_827DD9DC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd9f4
	goto loc_827DD9F4;
loc_827DD9DC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827dd9f4
	goto loc_827DD9F4;
loc_827DD9F0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DD9F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dda04
	if (ctx.cr6.eq) goto loc_827DDA04;
	// stb r29,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r29.u8);
loc_827DDA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DDA0C"))) PPC_WEAK_FUNC(sub_827DDA0C);
PPC_FUNC_IMPL(__imp__sub_827DDA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DDA10"))) PPC_WEAK_FUNC(sub_827DDA10);
PPC_FUNC_IMPL(__imp__sub_827DDA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x827DDA18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,3224
	ctx.r4.s64 = ctx.r11.s64 + 3224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222cf18
	ctx.lr = 0x827DDA38;
	sub_8222CF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x821937b0
	ctx.lr = 0x827DDA4C;
	sub_821937B0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-7776
	ctx.r9.s64 = ctx.r10.s64 + -7776;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82214f08
	ctx.lr = 0x827DDA60;
	sub_82214F08(ctx, base);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r5,-31927
	ctx.r5.s64 = -2092367872;
	// addi r4,r8,31384
	ctx.r4.s64 = ctx.r8.s64 + 31384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r5,28344
	ctx.r26.s64 = ctx.r5.s64 + 28344;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r29,r31,108
	ctx.r29.s64 = ctx.r31.s64 + 108;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_827DDA84:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827dda84
	if (!ctx.cr0.eq) goto loc_827DDA84;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r28,r31,112
	ctx.r28.s64 = ctx.r31.s64 + 112;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_827DDAAC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827ddaac
	if (!ctx.cr0.eq) goto loc_827DDAAC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_827DDAD0:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827ddad0
	if (!ctx.cr0.eq) goto loc_827DDAD0;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r5,31008
	ctx.r5.s64 = ctx.r5.s64 + 31008;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8229f118
	ctx.lr = 0x827DDB04;
	sub_8229F118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265160
	ctx.lr = 0x827DDB10;
	sub_82265160(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82214f08
	ctx.lr = 0x827DDB18;
	sub_82214F08(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_827DDB1C:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r4,0,r26
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r26.u32);
	ctx.r4.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwcx. r4,0,r26
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r26.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x827ddb1c
	if (!ctx.cr0.eq) goto loc_827DDB1C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,31020
	ctx.r5.s64 = ctx.r11.s64 + 31020;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f118
	ctx.lr = 0x827DDB50;
	sub_8229F118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82265160
	ctx.lr = 0x827DDB5C;
	sub_82265160(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82214f08
	ctx.lr = 0x827DDB64;
	sub_82214F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DDB70"))) PPC_WEAK_FUNC(sub_827DDB70);
PPC_FUNC_IMPL(__imp__sub_827DDB70) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,30944
	ctx.r4.s64 = ctx.r11.s64 + 30944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DDB94;
	sub_8222CF18(ctx, base);
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

__attribute__((alias("__imp__sub_827DDBAC"))) PPC_WEAK_FUNC(sub_827DDBAC);
PPC_FUNC_IMPL(__imp__sub_827DDBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DDBB0"))) PPC_WEAK_FUNC(sub_827DDBB0);
PPC_FUNC_IMPL(__imp__sub_827DDBB0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8221f388
	ctx.lr = 0x827DDBCC;
	sub_8221F388(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827ddbe8
	if (ctx.cr6.eq) goto loc_827DDBE8;
	// addi r5,r31,112
	ctx.r5.s64 = ctx.r31.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8269c8b0
	ctx.lr = 0x827DDBE0;
	sub_8269C8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ddbec
	goto loc_827DDBEC;
loc_827DDBE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827DDBEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821bbcb0
	ctx.lr = 0x827DDBF4;
	sub_821BBCB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226be28
	ctx.lr = 0x827DDC00;
	sub_8226BE28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829ff648
	ctx.lr = 0x827DDC08;
	sub_829FF648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c33f8
	ctx.lr = 0x827DDC10;
	sub_829C33F8(ctx, base);
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

__attribute__((alias("__imp__sub_827DDC24"))) PPC_WEAK_FUNC(sub_827DDC24);
PPC_FUNC_IMPL(__imp__sub_827DDC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DDC28"))) PPC_WEAK_FUNC(sub_827DDC28);
PPC_FUNC_IMPL(__imp__sub_827DDC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DDC30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ddc68
	if (ctx.cr6.eq) goto loc_827DDC68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ddc64
	if (ctx.cr6.eq) goto loc_827DDC64;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x827ddc6c
	goto loc_827DDC6C;
loc_827DDC64:
	// bl 0x821940c8
	ctx.lr = 0x827DDC68;
	sub_821940C8(ctx, base);
loc_827DDC68:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDC6C:
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827ddd6c
	if (ctx.cr6.eq) goto loc_827DDD6C;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ddca8
	if (ctx.cr6.eq) goto loc_827DDCA8;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827ddd70
	goto loc_827DDD70;
loc_827DDCA8:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r6,76(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827ddd14
	if (!ctx.cr0.gt) goto loc_827DDD14;
loc_827DDCC4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827ddce4
	if (ctx.cr6.lt) goto loc_827DDCE4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DDCE4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827ddd00
	if (ctx.cr6.eq) goto loc_827DDD00;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827ddd08
	goto loc_827DDD08;
loc_827DDD00:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DDD08:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827ddcc4
	if (ctx.cr6.gt) goto loc_827DDCC4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DDD14:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827ddd58
	if (ctx.cr6.eq) goto loc_827DDD58;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827ddd30
	if (ctx.cr6.gt) goto loc_827DDD30;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDD30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ddd58
	if (!ctx.cr6.eq) goto loc_827DDD58;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827ddd70
	goto loc_827DDD70;
loc_827DDD58:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827ddd70
	goto loc_827DDD70;
loc_827DDD6C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDD70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ddf1c
	if (ctx.cr6.eq) goto loc_827DDF1C;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x823db930
	ctx.lr = 0x827DDD84;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DDD90;
	sub_82500CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827dddb0
	if (ctx.cr6.eq) goto loc_827DDDB0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dddb4
	if (!ctx.cr6.eq) goto loc_827DDDB4;
loc_827DDDB0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDDB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dddc8
	if (ctx.cr6.eq) goto loc_827DDDC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500c18
	ctx.lr = 0x827DDDC8;
	sub_82500C18(ctx, base);
loc_827DDDC8:
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825022e8
	ctx.lr = 0x827DDDD4;
	sub_825022E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827dddf4
	if (ctx.cr6.eq) goto loc_827DDDF4;
	// lbz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827dddf8
	if (!ctx.cr6.eq) goto loc_827DDDF8;
loc_827DDDF4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDDF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ddf1c
	if (ctx.cr6.eq) goto loc_827DDF1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DDE0C;
	sub_824C7F08(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ddefc
	if (ctx.cr6.eq) goto loc_827DDEFC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827dde44
	if (ctx.cr6.eq) goto loc_827DDE44;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827ddf04
	goto loc_827DDF04;
loc_827DDE44:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827ddeac
	if (!ctx.cr0.gt) goto loc_827DDEAC;
loc_827DDE5C:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827dde7c
	if (ctx.cr6.lt) goto loc_827DDE7C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_827DDE7C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827dde98
	if (ctx.cr6.eq) goto loc_827DDE98;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827ddea0
	goto loc_827DDEA0;
loc_827DDE98:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DDEA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827dde5c
	if (ctx.cr6.gt) goto loc_827DDE5C;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DDEAC:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827ddeec
	if (ctx.cr6.eq) goto loc_827DDEEC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827ddec8
	if (ctx.cr6.gt) goto loc_827DDEC8;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_827DDEC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ddeec
	if (!ctx.cr6.eq) goto loc_827DDEEC;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827ddf04
	goto loc_827DDF04;
loc_827DDEEC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827ddf04
	goto loc_827DDF04;
loc_827DDEFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_827DDF04:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827ddf1c
	if (ctx.cr6.eq) goto loc_827DDF1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824936b8
	ctx.lr = 0x827DDF1C;
	sub_824936B8(ctx, base);
loc_827DDF1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DDF24"))) PPC_WEAK_FUNC(sub_827DDF24);
PPC_FUNC_IMPL(__imp__sub_827DDF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DDF28"))) PPC_WEAK_FUNC(sub_827DDF28);
PPC_FUNC_IMPL(__imp__sub_827DDF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DDF30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,3224
	ctx.r30.s64 = ctx.r11.s64 + 3224;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// bne cr6,0x827ddf88
	if (!ctx.cr6.eq) goto loc_827DDF88;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-9624
	ctx.r11.s64 = ctx.r11.s64 + -9624;
loc_827DDF58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827ddf7c
	if (ctx.cr6.eq) goto loc_827DDF7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ddf58
	if (ctx.cr6.eq) goto loc_827DDF58;
loc_827DDF7C:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827ddf9c
	goto loc_827DDF9C;
loc_827DDF88:
	// addi r4,r11,-9624
	ctx.r4.s64 = ctx.r11.s64 + -9624;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x827DDF94;
	sub_8226D7A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_827DDF9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827ddfd0
	if (ctx.cr6.eq) goto loc_827DDFD0;
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x827DDFB4;
	sub_821F0108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DDFC0;
	sub_824C7F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827de060
	ctx.lr = 0x827DDFC8;
	sub_827DE060(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
loc_827DDFD0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// bne cr6,0x827de014
	if (!ctx.cr6.eq) goto loc_827DE014;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,-15272
	ctx.r11.s64 = ctx.r11.s64 + -15272;
loc_827DDFE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x827de008
	if (ctx.cr6.eq) goto loc_827DE008;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827ddfe4
	if (ctx.cr6.eq) goto loc_827DDFE4;
loc_827DE008:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x827de028
	goto loc_827DE028;
loc_827DE014:
	// addi r4,r11,-15272
	ctx.r4.s64 = ctx.r11.s64 + -15272;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8226d7a8
	ctx.lr = 0x827DE020;
	sub_8226D7A8(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_827DE028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de054
	if (ctx.cr6.eq) goto loc_827DE054;
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f0108
	ctx.lr = 0x827DE040;
	sub_821F0108(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824c7f08
	ctx.lr = 0x827DE04C;
	sub_824C7F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827de1f8
	ctx.lr = 0x827DE054;
	sub_827DE1F8(ctx, base);
loc_827DE054:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DE05C"))) PPC_WEAK_FUNC(sub_827DE05C);
PPC_FUNC_IMPL(__imp__sub_827DE05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DE060"))) PPC_WEAK_FUNC(sub_827DE060);
PPC_FUNC_IMPL(__imp__sub_827DE060) {
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
	// lbz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827de17c
	if (ctx.cr6.eq) goto loc_827DE17C;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de0b8
	if (ctx.cr6.eq) goto loc_827DE0B8;
	// lbz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827de180
	goto loc_827DE180;
loc_827DE0B8:
	// lwz r6,76(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// srawi. r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827de124
	if (!ctx.cr0.gt) goto loc_827DE124;
loc_827DE0D4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827de0f4
	if (ctx.cr6.lt) goto loc_827DE0F4;
	// li r7,0
	ctx.r7.s64 = 0;
loc_827DE0F4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827de110
	if (ctx.cr6.eq) goto loc_827DE110;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827de118
	goto loc_827DE118;
loc_827DE110:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DE118:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827de0d4
	if (ctx.cr6.gt) goto loc_827DE0D4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DE124:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827de168
	if (ctx.cr6.eq) goto loc_827DE168;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827de140
	if (ctx.cr6.gt) goto loc_827DE140;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827DE140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827de168
	if (!ctx.cr6.eq) goto loc_827DE168;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827de180
	goto loc_827DE180;
loc_827DE168:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x827de180
	goto loc_827DE180;
loc_827DE17C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827DE180:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de1d8
	if (ctx.cr6.eq) goto loc_827DE1D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823db930
	ctx.lr = 0x827DE194;
	sub_823DB930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500cb0
	ctx.lr = 0x827DE1A0;
	sub_82500CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827de1c0
	if (ctx.cr6.eq) goto loc_827DE1C0;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827de1c4
	if (!ctx.cr6.eq) goto loc_827DE1C4;
loc_827DE1C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827DE1C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de1d8
	if (ctx.cr6.eq) goto loc_827DE1D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500c18
	ctx.lr = 0x827DE1D8;
	sub_82500C18(ctx, base);
loc_827DE1D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82214f08
	ctx.lr = 0x827DE1E0;
	sub_82214F08(ctx, base);
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

__attribute__((alias("__imp__sub_827DE1F8"))) PPC_WEAK_FUNC(sub_827DE1F8);
PPC_FUNC_IMPL(__imp__sub_827DE1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bec
	ctx.lr = 0x827DE200;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827de308
	if (ctx.cr6.eq) goto loc_827DE308;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de24c
	if (ctx.cr6.eq) goto loc_827DE24C;
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x827de30c
	goto loc_827DE30C;
loc_827DE24C:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827de2b8
	if (!ctx.cr0.gt) goto loc_827DE2B8;
loc_827DE268:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827de288
	if (ctx.cr6.lt) goto loc_827DE288;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_827DE288:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827de2a4
	if (ctx.cr6.eq) goto loc_827DE2A4;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827de2ac
	goto loc_827DE2AC;
loc_827DE2A4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DE2AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827de268
	if (ctx.cr6.gt) goto loc_827DE268;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DE2B8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827de2f8
	if (ctx.cr6.eq) goto loc_827DE2F8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827de2d4
	if (ctx.cr6.gt) goto loc_827DE2D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DE2D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827de2f8
	if (!ctx.cr6.eq) goto loc_827DE2F8;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827de30c
	goto loc_827DE30C;
loc_827DE2F8:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827de30c
	goto loc_827DE30C;
loc_827DE308:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_827DE30C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827de460
	if (ctx.cr6.eq) goto loc_827DE460;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825022e8
	ctx.lr = 0x827DE324;
	sub_825022E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827de344
	if (ctx.cr6.eq) goto loc_827DE344;
	// lbz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 144);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x827de348
	if (!ctx.cr6.eq) goto loc_827DE348;
loc_827DE344:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DE348:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de460
	if (ctx.cr6.eq) goto loc_827DE460;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827de444
	if (ctx.cr6.eq) goto loc_827DE444;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827de38c
	if (ctx.cr6.eq) goto loc_827DE38C;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x827de44c
	goto loc_827DE44C;
loc_827DE38C:
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x827de3f4
	if (!ctx.cr0.gt) goto loc_827DE3F4;
loc_827DE3A4:
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 28, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x827de3c4
	if (ctx.cr6.lt) goto loc_827DE3C4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_827DE3C4:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x827de3e0
	if (ctx.cr6.eq) goto loc_827DE3E0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x827de3e8
	goto loc_827DE3E8;
loc_827DE3E0:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_827DE3E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x827de3a4
	if (ctx.cr6.gt) goto loc_827DE3A4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_827DE3F4:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x827de434
	if (ctx.cr6.eq) goto loc_827DE434;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x827de410
	if (ctx.cr6.gt) goto loc_827DE410;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_827DE410:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827de434
	if (!ctx.cr6.eq) goto loc_827DE434;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827de44c
	goto loc_827DE44C;
loc_827DE434:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x827de44c
	goto loc_827DE44C;
loc_827DE444:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_827DE44C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827de460
	if (ctx.cr6.eq) goto loc_827DE460;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824936b8
	ctx.lr = 0x827DE460;
	sub_824936B8(ctx, base);
loc_827DE460:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82214f08
	ctx.lr = 0x827DE468;
	sub_82214F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827DE470"))) PPC_WEAK_FUNC(sub_827DE470);
PPC_FUNC_IMPL(__imp__sub_827DE470) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r30,r11,3224
	ctx.r30.s64 = ctx.r11.s64 + 3224;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222cf18
	ctx.lr = 0x827DE49C;
	sub_8222CF18(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r10,2804
	ctx.r4.s64 = ctx.r10.s64 + 2804;
	// bl 0x822d6b40
	ctx.lr = 0x827DE4AC;
	sub_822D6B40(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827DE4BC;
	sub_8222CF18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827DE4CC;
	sub_8222CF18(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8222cf18
	ctx.lr = 0x827DE4DC;
	sub_8222CF18(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r8.u8);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r11.u8);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_827DE520"))) PPC_WEAK_FUNC(sub_827DE520);
PPC_FUNC_IMPL(__imp__sub_827DE520) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-15872
	ctx.r10.s64 = ctx.r11.s64 + -15872;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DE550;
	sub_821F0108(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82287710
	ctx.lr = 0x827DE55C;
	sub_82287710(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// lfs f0,-27468(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
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

__attribute__((alias("__imp__sub_827DE590"))) PPC_WEAK_FUNC(sub_827DE590);
PPC_FUNC_IMPL(__imp__sub_827DE590) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r10,r11,-15872
	ctx.r10.s64 = ctx.r11.s64 + -15872;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x821f0108
	ctx.lr = 0x827DE5C8;
	sub_821F0108(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82287710
	ctx.lr = 0x827DE5D4;
	sub_82287710(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827DE604"))) PPC_WEAK_FUNC(sub_827DE604);
PPC_FUNC_IMPL(__imp__sub_827DE604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DE608"))) PPC_WEAK_FUNC(sub_827DE608);
PPC_FUNC_IMPL(__imp__sub_827DE608) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827DE61C"))) PPC_WEAK_FUNC(sub_827DE61C);
PPC_FUNC_IMPL(__imp__sub_827DE61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827DE620"))) PPC_WEAK_FUNC(sub_827DE620);
PPC_FUNC_IMPL(__imp__sub_827DE620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// lfs f0,-27444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27444);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

