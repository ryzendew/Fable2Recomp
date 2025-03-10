#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832B9DB8"))) PPC_WEAK_FUNC(sub_832B9DB8);
PPC_FUNC_IMPL(__imp__sub_832B9DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd4
	ctx.lr = 0x832B9DC0;
	sub_82CA2BD4(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832ba0a8
	if (!ctx.cr6.eq) goto loc_832BA0A8;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832b9e24
	if (!ctx.cr6.lt) goto loc_832B9E24;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// slw r5,r8,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// srw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r30,r8,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x832b9e34
	goto loc_832B9E34;
loc_832B9E24:
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r7,r6,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
loc_832B9E34:
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832ba08c
	if (ctx.cr6.eq) goto loc_832BA08C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x832ba08c
	if (ctx.cr6.gt) goto loc_832BA08C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x832b9e78
	if (!ctx.cr6.eq) goto loc_832B9E78;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832b9e84
	goto loc_832B9E84;
loc_832B9E78:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832B9E84:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ba020
	if (!ctx.cr6.eq) goto loc_832BA020;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r10,29280
	ctx.r25.s64 = ctx.r10.s64 + 29280;
loc_832B9EA8:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x832b9ed8
	if (ctx.cr6.lt) goto loc_832B9ED8;
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lbzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r9,r7,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// srw r30,r30,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// b 0x832b9f30
	goto loc_832B9F30;
loc_832B9ED8:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x832ba08c
	if (!ctx.cr6.lt) goto loc_832BA08C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// slw r8,r9,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// srw r7,r6,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// or r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 | ctx.r30.u64;
	// and r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 & ctx.r10.u64;
	// lbzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r10,r7,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lbzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// blt cr6,0x832b9f1c
	if (ctx.cr6.lt) goto loc_832B9F1C;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// b 0x832b9f30
	goto loc_832B9F30;
loc_832B9F1C:
	// subf r7,r31,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srw r30,r9,r7
	ctx.r30.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832B9F30:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// blt cr6,0x832b9ff4
	if (ctx.cr6.lt) goto loc_832B9FF4;
	// rlwinm r9,r26,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// or r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 | ctx.r26.u64;
	// rlwinm r9,r8,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// lbz r10,-12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -12);
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x832ba09c
	if (ctx.cr6.gt) goto loc_832BA09C;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832b9fd8
	if (ctx.cr6.eq) goto loc_832B9FD8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
loc_832B9F70:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832b9f70
	if (!ctx.cr6.eq) goto loc_832B9F70;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x832b9fb0
	if (ctx.cr6.lt) goto loc_832B9FB0;
loc_832B9F94:
	// addi r10,r9,252
	ctx.r10.s64 = ctx.r9.s64 + 252;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x832b9f94
	if (!ctx.cr6.lt) goto loc_832B9F94;
loc_832B9FB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ba004
	if (ctx.cr6.eq) goto loc_832BA004;
loc_832B9FBC:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832b9fbc
	if (!ctx.cr6.eq) goto loc_832B9FBC;
	// b 0x832ba004
	goto loc_832BA004;
loc_832B9FD8:
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832b9fd8
	if (!ctx.cr6.eq) goto loc_832B9FD8;
	// b 0x832ba004
	goto loc_832BA004;
loc_832B9FF4:
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_832BA004:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832b9ea8
	if (!ctx.cr6.eq) goto loc_832B9EA8;
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_832BA020:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x832ba064
	if (!ctx.cr6.lt) goto loc_832BA064;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// slw r8,r10,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// clrlwi r4,r7,28
	ctx.r4.u64 = ctx.r7.u32 & 0xF;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bl 0x82ca3190
	ctx.lr = 0x832BA050;
	sub_82CA3190(ctx, base);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_832BA064:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bl 0x82ca3190
	ctx.lr = 0x832BA078;
	sub_82CA3190(ctx, base);
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
loc_832BA08C:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_832BA09C:
	// stw r29,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
loc_832BA0A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82ca2c24
	// ERROR 82CA2C24
	return;
}

__attribute__((alias("__imp__sub_832BA0B0"))) PPC_WEAK_FUNC(sub_832BA0B0);
PPC_FUNC_IMPL(__imp__sub_832BA0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x832BA0B8;
	sub_82CA2BCC(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832ba35c
	if (!ctx.cr6.eq) goto loc_832BA35C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r28,4(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832ba11c
	if (!ctx.cr6.lt) goto loc_832BA11C;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// slw r4,r7,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r7,r31
	ctx.r30.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// srw r5,r8,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x832ba12c
	goto loc_832BA12C;
loc_832BA11C:
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
loc_832BA12C:
	// and r24,r5,r9
	ctx.r24.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x832ba340
	if (ctx.cr6.eq) goto loc_832BA340;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832ba340
	if (ctx.cr6.gt) goto loc_832BA340;
	// lwz r23,48(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r25,r3,16
	ctx.r25.s64 = ctx.r3.s64 + 16;
	// lwz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r23,r24
	ctx.r11.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lwz r26,36(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// lwz r29,384(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// bne cr6,0x832ba184
	if (!ctx.cr6.eq) goto loc_832BA184;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832ba190
	goto loc_832BA190;
loc_832BA184:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BA190:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ba1a0
	if (ctx.cr6.eq) goto loc_832BA1A0;
	// subfic r24,r24,-20
	ctx.xer.ca = ctx.r24.u32 <= 4294967276;
	ctx.r24.s64 = -20 - ctx.r24.s64;
loc_832BA1A0:
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ba1f4
	if (ctx.cr6.lt) goto loc_832BA1F4;
	// addi r10,r29,80
	ctx.r10.s64 = ctx.r29.s64 + 80;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// and r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 & ctx.r30.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r10,r30,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r5.u8 & 0x3F));
	// lbzx r29,r11,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// b 0x832ba260
	goto loc_832BA260;
loc_832BA1F4:
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x832ba340
	if (!ctx.cr6.lt) goto loc_832BA340;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r29,80
	ctx.r9.s64 = ctx.r29.s64 + 80;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r10,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r5,28
	ctx.r7.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lbzx r29,r9,r27
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r27.u32);
	// blt cr6,0x832ba24c
	if (ctx.cr6.lt) goto loc_832BA24C;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832ba260
	goto loc_832BA260;
loc_832BA24C:
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_832BA260:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// subfic r9,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r4.s64;
	// blt cr6,0x832ba290
	if (ctx.cr6.lt) goto loc_832BA290;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// lbzx r9,r5,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r26.u32);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r5,r7,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r25.u32);
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba2dc
	goto loc_832BA2DC;
loc_832BA290:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// srw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r5,r7,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 | ctx.r10.u64;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// lbzx r5,r9,r26
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// clrlwi r31,r5,28
	ctx.r31.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r9,r5,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r5,r31,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r25.u32);
	// blt cr6,0x832ba2c8
	if (ctx.cr6.lt) goto loc_832BA2C8;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r31,r9,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba2dc
	goto loc_832BA2DC;
loc_832BA2C8:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r30,r7,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_832BA2DC:
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832ba2fc
	if (ctx.cr6.eq) goto loc_832BA2FC;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_832BA2FC:
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stb r11,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r11.u8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// bgt cr6,0x832ba1a0
	if (ctx.cr6.gt) goto loc_832BA1A0;
	// cmpwi cr6,r24,-22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -22, ctx.xer);
	// bge cr6,0x832ba328
	if (!ctx.cr6.lt) goto loc_832BA328;
	// subfic r5,r24,-21
	ctx.xer.ca = ctx.r24.u32 <= 4294967275;
	ctx.r5.s64 = -21 - ctx.r24.s64;
	// lbz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ca3190
	ctx.lr = 0x832BA328;
	sub_82CA3190(ctx, base);
loc_832BA328:
	// stw r29,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r29.u32);
	// stw r28,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r28.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_832BA340:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r28,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r28.u32);
	// stw r30,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r30.u32);
	// stw r31,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r31.u32);
loc_832BA35C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_832BA364"))) PPC_WEAK_FUNC(sub_832BA364);
PPC_FUNC_IMPL(__imp__sub_832BA364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA368"))) PPC_WEAK_FUNC(sub_832BA368);
PPC_FUNC_IMPL(__imp__sub_832BA368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x832BA370;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832ba5fc
	if (!ctx.cr6.eq) goto loc_832BA5FC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r29,4(r20)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832ba3d4
	if (!ctx.cr6.lt) goto loc_832BA3D4;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// slw r4,r7,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r30,r7,r31
	ctx.r30.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r31.u8 & 0x3F));
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// srw r5,r9,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x832ba3e4
	goto loc_832BA3E4;
loc_832BA3D4:
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r30,r8,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
loc_832BA3E4:
	// and r23,r5,r8
	ctx.r23.u64 = ctx.r5.u64 & ctx.r8.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x832ba5e0
	if (ctx.cr6.eq) goto loc_832BA5E0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x832ba5e0
	if (ctx.cr6.gt) goto loc_832BA5E0;
	// lwz r22,48(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r24,r3,16
	ctx.r24.s64 = ctx.r3.s64 + 16;
	// lwz r26,32(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r22,r23
	ctx.r11.u64 = ctx.r22.u64 + ctx.r23.u64;
	// lwz r25,36(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r22.u32);
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// bne cr6,0x832ba43c
	if (!ctx.cr6.eq) goto loc_832BA43C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832ba448
	goto loc_832BA448;
loc_832BA43C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BA448:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832ba458
	if (ctx.cr6.eq) goto loc_832BA458;
	// subfic r23,r23,-20
	ctx.xer.ca = ctx.r23.u32 <= 4294967276;
	ctx.r23.s64 = -20 - ctx.r23.s64;
loc_832BA458:
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x832ba4ac
	if (ctx.cr6.lt) goto loc_832BA4AC;
	// addi r10,r5,80
	ctx.r10.s64 = ctx.r5.s64 + 80;
	// subfic r8,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r11.s64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// lwzx r10,r7,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// and r8,r4,r30
	ctx.r8.u64 = ctx.r4.u64 & ctx.r30.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r5,r7,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r10,r30,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r5.u8 & 0x3F));
	// lbzx r28,r4,r27
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// subf r11,r5,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r5.s64;
	// b 0x832ba518
	goto loc_832BA518;
loc_832BA4AC:
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x832ba5e0
	if (!ctx.cr6.lt) goto loc_832BA5E0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r5,80
	ctx.r8.s64 = ctx.r5.s64 + 80;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r4,r10,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// or r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 | ctx.r30.u64;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// lbzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// clrlwi r7,r5,28
	ctx.r7.u64 = ctx.r5.u32 & 0xF;
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lbzx r28,r4,r27
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r27.u32);
	// blt cr6,0x832ba504
	if (ctx.cr6.lt) goto loc_832BA504;
	// srw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832ba518
	goto loc_832BA518;
loc_832BA504:
	// subf r8,r31,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832BA518:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// subfic r8,r26,32
	ctx.xer.ca = ctx.r26.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r26.s64;
	// blt cr6,0x832ba54c
	if (ctx.cr6.lt) goto loc_832BA54C;
	// srw r7,r9,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// and r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ctx.r10.u64;
	// lbzx r8,r4,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// srw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// lbzx r4,r7,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r24.u32);
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x832ba598
	goto loc_832BA598;
loc_832BA54C:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r4,r7,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 | ctx.r10.u64;
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// lbzx r4,r8,r25
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r25.u32);
	// clrlwi r31,r4,28
	ctx.r31.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r8,r4,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lbzx r4,r31,r24
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r24.u32);
	// blt cr6,0x832ba584
	if (ctx.cr6.lt) goto loc_832BA584;
	// srw r30,r10,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// b 0x832ba598
	goto loc_832BA598;
loc_832BA584:
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r30,r7,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832BA598:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stb r10,0(r21)
	PPC_STORE_U8(ctx.r21.u32 + 0, ctx.r10.u8);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// bgt cr6,0x832ba458
	if (ctx.cr6.gt) goto loc_832BA458;
	// cmpwi cr6,r23,-22
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -22, ctx.xer);
	// bge cr6,0x832ba5c8
	if (!ctx.cr6.lt) goto loc_832BA5C8;
	// subfic r5,r23,-21
	ctx.xer.ca = ctx.r23.u32 <= 4294967275;
	ctx.r5.s64 = -21 - ctx.r23.s64;
	// lbz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ca3190
	ctx.lr = 0x832BA5C8;
	sub_82CA3190(ctx, base);
loc_832BA5C8:
	// stw r28,384(r27)
	PPC_STORE_U32(ctx.r27.u32 + 384, ctx.r28.u32);
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r31,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r31.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
loc_832BA5E0:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r29,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r29.u32);
	// stw r30,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r31,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r31.u32);
loc_832BA5FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_832BA604"))) PPC_WEAK_FUNC(sub_832BA604);
PPC_FUNC_IMPL(__imp__sub_832BA604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA608"))) PPC_WEAK_FUNC(sub_832BA608);
PPC_FUNC_IMPL(__imp__sub_832BA608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832BA610;
	sub_82CA2BE0(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832ba82c
	if (!ctx.cr6.eq) goto loc_832BA82C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832ba674
	if (!ctx.cr6.lt) goto loc_832BA674;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// slw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// srw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r30,r7,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x832ba684
	goto loc_832BA684;
loc_832BA674:
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
loc_832BA684:
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832ba810
	if (ctx.cr6.eq) goto loc_832BA810;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x832ba810
	if (ctx.cr6.gt) goto loc_832BA810;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x832ba6c8
	if (!ctx.cr6.eq) goto loc_832BA6C8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r10,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832ba6d4
	goto loc_832BA6D4;
loc_832BA6C8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BA6D4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832ba7a4
	if (!ctx.cr6.eq) goto loc_832BA7A4;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_832BA6EC:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832ba728
	if (ctx.cr6.lt) goto loc_832BA728;
	// subfic r10,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r7.s64;
	// srw r9,r8,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lbzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// clrlwi r10,r9,28
	ctx.r10.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// srw r30,r30,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// subf r31,r9,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r9.s64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x832ba788
	goto loc_832BA788;
loc_832BA728:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x832ba810
	if (!ctx.cr6.lt) goto loc_832BA810;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r7.s64;
	// slw r26,r9,r31
	ctx.r26.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// or r26,r26,r30
	ctx.r26.u64 = ctx.r26.u64 | ctx.r30.u64;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ctx.r26.u64;
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// clrlwi r26,r10,28
	ctx.r26.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lbzx r26,r26,r4
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r4.u32);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x832ba774
	if (ctx.cr6.lt) goto loc_832BA774;
	// srw r30,r30,r10
	ctx.r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
	// b 0x832ba788
	goto loc_832BA788;
loc_832BA774:
	// subf r30,r31,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srw r30,r9,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r30.u8 & 0x3F));
	// addi r31,r10,32
	ctx.r31.s64 = ctx.r10.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832BA788:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832ba6ec
	if (!ctx.cr6.eq) goto loc_832BA6EC;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BA7A4:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x832ba7e8
	if (!ctx.cr6.lt) goto loc_832BA7E8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// slw r8,r10,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// clrlwi r4,r7,28
	ctx.r4.u64 = ctx.r7.u32 & 0xF;
	// srw r30,r10,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bl 0x82ca3190
	ctx.lr = 0x832BA7D4;
	sub_82CA3190(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BA7E8:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// bl 0x82ca3190
	ctx.lr = 0x832BA7FC;
	sub_82CA3190(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BA810:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
loc_832BA82C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832BA834"))) PPC_WEAK_FUNC(sub_832BA834);
PPC_FUNC_IMPL(__imp__sub_832BA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA838"))) PPC_WEAK_FUNC(sub_832BA838);
PPC_FUNC_IMPL(__imp__sub_832BA838) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x832BA840;
	sub_82CA2BDC(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832baa24
	if (!ctx.cr6.eq) goto loc_832BAA24;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832ba89c
	if (!ctx.cr6.lt) goto loc_832BA89C;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r7,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r10.s64;
	// slw r31,r8,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// srw r9,r29,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r7.u8 & 0x3F));
	// and r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r30.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x832ba8b0
	goto loc_832BA8B0;
loc_832BA89C:
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srw r7,r29,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// and r26,r7,r9
	ctx.r26.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
loc_832BA8B0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x832baa08
	if (ctx.cr6.eq) goto loc_832BAA08;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x832baa08
	if (ctx.cr6.gt) goto loc_832BAA08;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_832BA8E4:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x832ba918
	if (ctx.cr6.lt) goto loc_832BA918;
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r28.s64;
	// srw r8,r29,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r9,r7,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r27,r7,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba970
	goto loc_832BA970;
loc_832BA918:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x832baa08
	if (!ctx.cr6.lt) goto loc_832BAA08;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfic r9,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r28.s64;
	// slw r27,r7,r11
	ctx.r27.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// srw r8,r29,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// or r9,r27,r10
	ctx.r9.u64 = ctx.r27.u64 | ctx.r10.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r27,r9,28
	ctx.r27.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r27,r27,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// blt cr6,0x832ba95c
	if (ctx.cr6.lt) goto loc_832BA95C;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba970
	goto loc_832BA970;
loc_832BA95C:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_832BA970:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x832ba998
	if (ctx.cr6.lt) goto loc_832BA998;
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r30.u32);
	// clrlwi r7,r8,28
	ctx.r7.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r9,r8,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// lbzx r8,r7,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba9e0
	goto loc_832BA9E0;
loc_832BA998:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// and r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r30.u32);
	// clrlwi r8,r9,28
	ctx.r8.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// blt cr6,0x832ba9cc
	if (ctx.cr6.lt) goto loc_832BA9CC;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x832ba9e0
	goto loc_832BA9E0;
loc_832BA9CC:
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_832BA9E0:
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// or r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 | ctx.r27.u64;
	// stb r8,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r8.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bne cr6,0x832ba8e4
	if (!ctx.cr6.eq) goto loc_832BA8E4;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832BAA08:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_832BAA24:
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_832BAA28"))) PPC_WEAK_FUNC(sub_832BAA28);
PPC_FUNC_IMPL(__imp__sub_832BAA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x832BAA30;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832bacb0
	if (!ctx.cr6.eq) goto loc_832BACB0;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x832baa94
	if (!ctx.cr6.lt) goto loc_832BAA94;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r11.s64;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// slw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// srw r6,r8,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r30,r7,r4
	ctx.r30.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x832baaa4
	goto loc_832BAAA4;
loc_832BAA94:
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r11.s64;
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srw r6,r8,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srw r30,r9,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
loc_832BAAA4:
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x832bac94
	if (ctx.cr6.eq) goto loc_832BAC94;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x832bac94
	if (ctx.cr6.gt) goto loc_832BAC94;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne cr6,0x832baae8
	if (!ctx.cr6.eq) goto loc_832BAAE8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832baaf4
	goto loc_832BAAF4;
loc_832BAAE8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BAAF4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bac00
	if (!ctx.cr6.eq) goto loc_832BAC00;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
loc_832BAB10:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r31,r7
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832bab44
	if (ctx.cr6.lt) goto loc_832BAB44;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// srw r10,r8,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// lbzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832bab9c
	goto loc_832BAB9C;
loc_832BAB44:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832bac94
	if (!ctx.cr6.lt) goto loc_832BAC94;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r7.s64;
	// slw r9,r10,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 | ctx.r30.u64;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// lbzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// clrlwi r25,r9,28
	ctx.r25.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r11,r9,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lbzx r9,r25,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r4.u32);
	// blt cr6,0x832bab88
	if (ctx.cr6.lt) goto loc_832BAB88;
	// srw r30,r30,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x832bab9c
	goto loc_832BAB9C;
loc_832BAB88:
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// srw r30,r10,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_832BAB9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x832babdc
	if (ctx.cr6.eq) goto loc_832BABDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832babc0
	if (!ctx.cr6.eq) goto loc_832BABC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832babcc
	goto loc_832BABCC;
loc_832BABC0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BABCC:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832babdc
	if (ctx.cr6.eq) goto loc_832BABDC;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832BABDC:
	// stb r9,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne cr6,0x832bab10
	if (!ctx.cr6.eq) goto loc_832BAB10;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832BAC00:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bge cr6,0x832bac2c
	if (!ctx.cr6.lt) goto loc_832BAC2C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r9,r31,4
	ctx.xer.ca = ctx.r31.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r31.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r8,r11,r31
	ctx.r8.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r7,r8,r30
	ctx.r7.u64 = ctx.r8.u64 | ctx.r30.u64;
	// srw r30,r11,r9
	ctx.r30.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r4,r7,28
	ctx.r4.u64 = ctx.r7.u32 & 0xF;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x832bac38
	goto loc_832BAC38;
loc_832BAC2C:
	// clrlwi r4,r30,28
	ctx.r4.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r30,r30,28,4,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_832BAC38:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x832bac78
	if (ctx.cr6.eq) goto loc_832BAC78;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x832bac5c
	if (!ctx.cr6.eq) goto loc_832BAC5C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r31,31
	ctx.r31.s64 = 31;
	// rlwinm r30,r11,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832bac68
	goto loc_832BAC68;
loc_832BAC5C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832BAC68:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bac78
	if (ctx.cr6.eq) goto loc_832BAC78;
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
loc_832BAC78:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82ca3190
	ctx.lr = 0x832BAC80;
	sub_82CA3190(ctx, base);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
loc_832BAC94:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
loc_832BACB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_832BACB8"))) PPC_WEAK_FUNC(sub_832BACB8);
PPC_FUNC_IMPL(__imp__sub_832BACB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x832BACC0;
	sub_82CA2BD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x832bb010
	if (!ctx.cr6.eq) goto loc_832BB010;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832bad1c
	if (!ctx.cr6.lt) goto loc_832BAD1C;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r6,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r10.s64;
	// slw r31,r8,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// srw r9,r25,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r6.u8 & 0x3F));
	// and r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r8,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r29.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832bad30
	goto loc_832BAD30;
loc_832BAD1C:
	// subfic r8,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r10.s64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srw r6,r25,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
	// and r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 & ctx.r9.u64;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
loc_832BAD30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x832baff4
	if (ctx.cr6.eq) goto loc_832BAFF4;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x832baff4
	if (ctx.cr6.gt) goto loc_832BAFF4;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x832badf8
	if (ctx.cr6.eq) goto loc_832BADF8;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x832bad9c
	if (!ctx.cr6.lt) goto loc_832BAD9C;
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r29,r9,33
	ctx.xer.ca = ctx.r9.u32 <= 33;
	ctx.r29.s64 = 33 - ctx.r9.s64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// slw r28,r31,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// srw r29,r25,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r29.u8 & 0x3F));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// and r27,r29,r10
	ctx.r27.u64 = ctx.r29.u64 & ctx.r10.u64;
	// srw r10,r31,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r11,r11,33
	ctx.r11.s64 = ctx.r11.s64 + 33;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832badb4
	goto loc_832BADB4;
loc_832BAD9C:
	// subfic r31,r9,33
	ctx.xer.ca = ctx.r9.u32 <= 33;
	ctx.r31.s64 = 33 - ctx.r9.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r9,r25,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r31.u8 & 0x3F));
	// and r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832BADB4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x832bae44
	if (ctx.cr6.eq) goto loc_832BAE44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832badd8
	if (!ctx.cr6.eq) goto loc_832BADD8;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832bade4
	goto loc_832BADE4;
loc_832BADD8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832BADE4:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832bae44
	if (ctx.cr6.eq) goto loc_832BAE44;
	// neg r27,r27
	ctx.r27.s64 = -ctx.r27.s64;
	// b 0x832bae44
	goto loc_832BAE44;
loc_832BADF8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832bae30
	if (!ctx.cr6.lt) goto loc_832BAE30;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r31,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r9.s64;
	// subf r29,r11,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r11.s64;
	// slw r28,r8,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 | ctx.r10.u64;
	// srw r31,r25,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r31.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// and r27,r31,r10
	ctx.r27.u64 = ctx.r31.u64 & ctx.r10.u64;
	// srw r10,r8,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r29.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832bae44
	goto loc_832BAE44;
loc_832BAE30:
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r9.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
	// and r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 & ctx.r10.u64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
loc_832BAE44:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addic. r24,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r24.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// sth r31,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r31.u16);
	// addi r28,r6,2
	ctx.r28.s64 = ctx.r6.s64 + 2;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x832bb004
	if (ctx.cr0.eq) goto loc_832BB004;
loc_832BAE68:
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 8, ctx.xer);
	// li r26,8
	ctx.r26.s64 = 8;
	// bgt cr6,0x832bae78
	if (ctx.cr6.gt) goto loc_832BAE78;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_832BAE78:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832baeac
	if (!ctx.cr6.lt) goto loc_832BAEAC;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x832baff4
	if (!ctx.cr6.lt) goto loc_832BAFF4;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r8,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r11.s64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832baeb8
	goto loc_832BAEB8;
loc_832BAEAC:
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_832BAEB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832baf70
	if (ctx.cr6.eq) goto loc_832BAF70;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x832bafdc
	if (ctx.cr6.eq) goto loc_832BAFDC;
	// subfic r8,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r9.s64;
	// srw r30,r25,r8
	ctx.r30.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
loc_832BAED4:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x832baf08
	if (!ctx.cr6.lt) goto loc_832BAF08;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srw r10,r6,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r31.u8 & 0x3F));
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// b 0x832baf14
	goto loc_832BAF14;
loc_832BAF08:
	// and r6,r30,r10
	ctx.r6.u64 = ctx.r30.u64 & ctx.r10.u64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_832BAF14:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x832baf54
	if (ctx.cr6.eq) goto loc_832BAF54;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832baf38
	if (!ctx.cr6.eq) goto loc_832BAF38;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832baf44
	goto loc_832BAF44;
loc_832BAF38:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832BAF44:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832baf54
	if (ctx.cr6.eq) goto loc_832BAF54;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
loc_832BAF54:
	// add r27,r6,r27
	ctx.r27.u64 = ctx.r6.u64 + ctx.r27.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// sth r31,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r31.u16);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne cr6,0x832baed4
	if (!ctx.cr6.eq) goto loc_832BAED4;
	// b 0x832bafdc
	goto loc_832BAFDC;
loc_832BAF70:
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r8,r31,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r28,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// or r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x832baf9c
	if (ctx.cr6.eq) goto loc_832BAF9C;
	// sth r31,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r31.u16);
	// addi r9,r28,2
	ctx.r9.s64 = ctx.r28.s64 + 2;
	// addi r30,r26,-1
	ctx.r30.s64 = ctx.r26.s64 + -1;
loc_832BAF9C:
	// rlwinm r6,r30,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x832bafc4
	if (ctx.cr6.eq) goto loc_832BAFC4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_832BAFB0:
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x832bafb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_832BAFB0;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_832BAFC4:
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bafd4
	if (ctx.cr6.eq) goto loc_832BAFD4;
	// sth r29,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r29.u16);
loc_832BAFD4:
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
loc_832BAFDC:
	// subf. r24,r26,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r26.s64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x832bae68
	if (!ctx.cr0.eq) goto loc_832BAE68;
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
loc_832BAFF4:
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_832BB004:
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
loc_832BB010:
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_832BB014"))) PPC_WEAK_FUNC(sub_832BB014);
PPC_FUNC_IMPL(__imp__sub_832BB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB018"))) PPC_WEAK_FUNC(sub_832BB018);
PPC_FUNC_IMPL(__imp__sub_832BB018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x832BB020;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r10,1620(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1620);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r19,1588(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// addi r11,r25,-8
	ctx.r11.s64 = ctx.r25.s64 + -8;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// stw r4,1532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1532, ctx.r4.u32);
	// stw r26,1540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1540, ctx.r26.u32);
	// stw r25,1548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1548, ctx.r25.u32);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r15,1572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1572, ctx.r15.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// rlwinm r8,r10,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// stw r29,1524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1524, ctx.r29.u32);
	// subf r7,r26,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r26.s64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r6,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// beq cr6,0x832bb0c4
	if (ctx.cr6.eq) goto loc_832BB0C4;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,-24400
	ctx.r11.s64 = ctx.r11.s64 + -24400;
	// b 0x832bb0cc
	goto loc_832BB0CC;
loc_832BB0C4:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r11,r11,-23704
	ctx.r11.s64 = ctx.r11.s64 + -23704;
loc_832BB0CC:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// rlwinm r8,r26,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,1612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// rlwinm r9,r26,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r5,r8,511
	ctx.r5.s64 = ctx.r8.s64 + 511;
	// stw r21,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r21.u32);
	// addi r6,r9,511
	ctx.r6.s64 = ctx.r9.s64 + 511;
	// stw r21,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r21.u32);
	// addi r30,r8,527
	ctx.r30.s64 = ctx.r8.s64 + 527;
	// stw r21,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r21.u32);
	// clrlwi r14,r5,16
	ctx.r14.u64 = ctx.r5.u32 & 0xFFFF;
	// stw r21,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r21.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r26,3,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFC0;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r26,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r8,r26,0,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x1FFFFFF8;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r20,r6,16
	ctx.r20.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r8,527
	ctx.r8.s64 = ctx.r8.s64 + 527;
	// addi r10,r10,511
	ctx.r10.s64 = ctx.r10.s64 + 511;
	// stw r3,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r3.u32);
	// addi r17,r7,511
	ctx.r17.s64 = ctx.r7.s64 + 511;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r4,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r4.u32);
	// clrlwi r3,r17,16
	ctx.r3.u64 = ctx.r17.u32 & 0xFFFF;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// cntlzw r4,r20
	ctx.r4.u64 = ctx.r20.u32 == 0 ? 32 : __builtin_clz(ctx.r20.u32);
	// stw r28,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r28.u32);
	// rlwinm r8,r26,30,2,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFE;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// cntlzw r28,r14
	ctx.r28.u64 = ctx.r14.u32 == 0 ? 32 : __builtin_clz(ctx.r14.u32);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r5,r26,3,3,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0x1FFFFFC0;
	// lwz r18,16(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cntlzw r17,r3
	ctx.r17.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r16,20(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cntlzw r20,r10
	ctx.r20.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r6,r26,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r21,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r21.u32);
	// subfic r10,r4,32
	ctx.xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// stw r21,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r21.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r21,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r21.u32);
	// subfic r8,r28,32
	ctx.xer.ca = ctx.r28.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r28.s64;
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// addi r5,r5,527
	ctx.r5.s64 = ctx.r5.s64 + 527;
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// addi r6,r6,527
	ctx.r6.s64 = ctx.r6.s64 + 527;
	// stw r3,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r3.u32);
	// subfic r28,r20,32
	ctx.xer.ca = ctx.r20.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r20.s64;
	// stw r8,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r8.u32);
	// rlwinm r3,r30,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r21,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r21.u32);
	// rlwinm r5,r5,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r3,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r3.u32);
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// subfic r30,r17,32
	ctx.xer.ca = ctx.r17.u32 <= 32;
	ctx.r30.s64 = 32 - ctx.r17.s64;
	// stw r10,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r10.u32);
	// stw r21,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r21.u32);
	// rlwinm r6,r26,1,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFF0;
	// stw r21,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r21.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r27,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r27.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// li r28,16
	ctx.r28.s64 = 16;
	// stw r8,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r8.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r4,584(r1)
	PPC_STORE_U32(ctx.r1.u32 + 584, ctx.r4.u32);
	// stw r4,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r4.u32);
	// stw r30,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r30.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// rlwinm r11,r26,30,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x1FFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r6,r9,511
	ctx.r6.s64 = ctx.r9.s64 + 511;
	// stw r5,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r5.u32);
	// addi r9,r11,1039
	ctx.r9.s64 = ctx.r11.s64 + 1039;
	// stw r5,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r5.u32);
	// rlwinm r11,r7,1,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFFFFE;
	// lwz r20,136(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// addi r6,r11,527
	ctx.r6.s64 = ctx.r11.s64 + 527;
	// stw r3,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r3.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// stw r4,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// rlwinm r7,r30,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// li r30,1024
	ctx.r30.s64 = 1024;
	// stw r28,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r28,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r28.u32);
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r30.u32);
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r27,r6,0,0,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// stw r18,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r18.u32);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// stw r10,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r10.u32);
	// addi r4,r1,612
	ctx.r4.s64 = ctx.r1.s64 + 612;
	// stw r8,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r16,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r16.u32);
	// stw r30,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r30.u32);
	// stw r10,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r10.u32);
	// stw r20,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r20.u32);
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r10.u32);
	// stw r11,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r11.u32);
	// stw r7,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r7.u32);
	// stw r21,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r21.u32);
	// stw r21,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r21.u32);
	// stw r21,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r21.u32);
	// stw r21,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r21.u32);
	// stw r21,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r21.u32);
	// stw r21,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r21.u32);
	// stw r21,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r21.u32);
	// stw r11,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r11.u32);
	// stw r21,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r21.u32);
	// stw r21,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r21.u32);
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// stw r21,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r21.u32);
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// stw r21,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r21.u32);
	// stw r27,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r27.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// bl 0x832b95b0
	ctx.lr = 0x832BB2F8;
	sub_832B95B0(ctx, base);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// addi r4,r1,676
	ctx.r4.s64 = ctx.r1.s64 + 676;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB30C;
	sub_832B95B0(ctx, base);
	// addi r30,r1,1280
	ctx.r30.s64 = ctx.r1.s64 + 1280;
	// addi r27,r1,960
	ctx.r27.s64 = ctx.r1.s64 + 960;
loc_832BB314:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r30,-64
	ctx.r5.s64 = ctx.r30.s64 + -64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB328;
	sub_832B95B0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x832bb314
	if (!ctx.cr0.eq) goto loc_832BB314;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB34C;
	sub_832B95B0(ctx, base);
	// stw r21,1344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1344, ctx.r21.u32);
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,548
	ctx.r4.s64 = ctx.r1.s64 + 548;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB364;
	sub_832B95B0(ctx, base);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,356
	ctx.r4.s64 = ctx.r1.s64 + 356;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB378;
	sub_832B95B0(ctx, base);
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,420
	ctx.r4.s64 = ctx.r1.s64 + 420;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB38C;
	sub_832B95B0(ctx, base);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832b95b0
	ctx.lr = 0x832BB3A0;
	sub_832B95B0(ctx, base);
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x832bd3a8
	if (ctx.cr6.eq) goto loc_832BD3A8;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r28,1596(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r30,r11,20032
	ctx.r30.s64 = ctx.r11.s64 + 20032;
	// addi r11,r10,19008
	ctx.r11.s64 = ctx.r10.s64 + 19008;
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x832bb3dc
	goto loc_832BB3DC;
loc_832BB3D4:
	// lwz r26,1540(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1540);
	// lwz r15,1572(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
loc_832BB3DC:
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x832b9db8
	ctx.lr = 0x832BB3EC;
	sub_832B9DB8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x832b9db8
	ctx.lr = 0x832BB3FC;
	sub_832B9DB8(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r1,960
	ctx.r5.s64 = ctx.r1.s64 + 960;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BB418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x832ba838
	ctx.lr = 0x832BB428;
	sub_832BA838(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x832baa28
	ctx.lr = 0x832BB434;
	sub_832BAA28(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x832baa28
	ctx.lr = 0x832BB444;
	sub_832BAA28(ctx, base);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r14,432(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// subf r11,r14,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r14.s64;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// bl 0x832bacb8
	ctx.lr = 0x832BB46C;
	sub_832BACB8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x832bacb8
	ctx.lr = 0x832BB478;
	sub_832BACB8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x832ba608
	ctx.lr = 0x832BB484;
	sub_832BA608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r27,512(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r18,448(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r16,256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x832bb4b4
	goto loc_832BB4B4;
loc_832BB4AC:
	// lwz r14,432(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r15,1572(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1572);
loc_832BB4B4:
	// lwz r6,452(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplw cr6,r3,r15
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r15.u32, ctx.xer);
	// lwz r7,516(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// bge cr6,0x832bd310
	if (!ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,580(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r8,576(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832bd310
	if (!ctx.cr6.lt) goto loc_832BD310;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r8.u32);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x832bd310
	if (ctx.cr6.gt) goto loc_832BD310;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-19196
	ctx.r12.s64 = ctx.r12.s64 + -19196;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_832BB52C;
	case 1:
		goto loc_832BB5C4;
	case 2:
		goto loc_832BC218;
	case 3:
		goto loc_832BC718;
	case 4:
		goto loc_832BC8DC;
	case 5:
		goto loc_832BC9B0;
	case 6:
		goto loc_832BCA6C;
	case 7:
		goto loc_832BCAE8;
	case 8:
		goto loc_832BCC04;
	case 9:
		goto loc_832BCF38;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-19156(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19156);
	// lwz r25,-19004(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19004);
	// lwz r25,-15848(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15848);
	// lwz r25,-14568(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14568);
	// lwz r25,-14116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14116);
	// lwz r25,-13904(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13904);
	// lwz r25,-13716(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13716);
	// lwz r25,-13592(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13592);
	// lwz r25,-13308(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13308);
	// lwz r25,-12488(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12488);
loc_832BB52C:
	// add r10,r24,r31
	ctx.r10.u64 = ctx.r24.u64 + ctx.r31.u64;
	// lfdx f0,r24,r31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r24.u32 + ctx.r31.u32);
	// add r9,r29,r31
	ctx.r9.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stfdx f0,r29,r31
	PPC_STORE_U64(ctx.r29.u32 + ctx.r31.u32, ctx.f0.u64);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f13,0(r24)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stfd f13,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f13.u64);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfd f12,0(r10)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stfd f12,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f12.u64);
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lfd f11,0(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfd f11,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f11.u64);
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfd f10,0(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stfd f10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f10.u64);
	// add r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lfd f9,0(r8)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lfdx f8,r8,r31
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r31.u32);
	// stfd f9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f9.u64);
	// lfdx f7,r10,r31
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// stfdx f8,r7,r31
	PPC_STORE_U64(ctx.r7.u32 + ctx.r31.u32, ctx.f8.u64);
	// stfdx f7,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.f7.u64);
	// beq cr6,0x832bb5b4
	if (ctx.cr6.eq) goto loc_832BB5B4;
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// lbzx r9,r10,r19
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832bd310
	if (!ctx.cr6.eq) goto loc_832BD310;
loc_832BB5B4:
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BB5C4:
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// rlwinm r10,r17,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832bc1e8
	if (!ctx.cr6.eq) goto loc_832BC1E8;
	// lwz r10,644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r9,640(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832bc1e8
	if (!ctx.cr6.lt) goto loc_832BC1E8;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// stw r9,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r9.u32);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x832bc1e8
	if (ctx.cr6.gt) goto loc_832BC1E8;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,-18920
	ctx.r12.s64 = ctx.r12.s64 + -18920;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_832BB634;
	case 1:
		goto loc_832BC1E8;
	case 2:
		goto loc_832BB9B8;
	case 3:
		goto loc_832BBA7C;
	case 4:
		goto loc_832BC1E8;
	case 5:
		goto loc_832BBB34;
	case 6:
		goto loc_832BBE98;
	default:
		__builtin_unreachable();
	}
	// lwz r25,-18892(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18892);
	// lwz r25,-15896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	// lwz r25,-17992(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17992);
	// lwz r25,-17796(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17796);
	// lwz r25,-15896(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15896);
	// lwz r25,-17612(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17612);
	// lwz r25,-16744(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16744);
loc_832BB634:
	// lwz r10,1548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// bge cr6,0x832bb670
	if (!ctx.cr6.lt) goto loc_832BB670;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r26,4
	ctx.xer.ca = ctx.r26.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r26.s64;
	// addi r5,r26,28
	ctx.r5.s64 = ctx.r26.s64 + 28;
	// slw r8,r10,r26
	ctx.r8.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// srw r4,r10,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x832bb67c
	goto loc_832BB67C;
loc_832BB670:
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r4,r4,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r5,r26,-4
	ctx.r5.s64 = ctx.r26.s64 + -4;
loc_832BB67C:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x832bb6a0
	if (ctx.cr6.lt) goto loc_832BB6A0;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BB6A0:
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bb6b4
	if (ctx.cr6.lt) goto loc_832BB6B4;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r16,r10,4
	ctx.r16.s64 = ctx.r10.s64 + 4;
loc_832BB6B4:
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_832BB6BC:
	// lbz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x832bb76c
	if (ctx.cr6.gt) goto loc_832BB76C;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x832bb6f0
	if (!ctx.cr6.eq) goto loc_832BB6F0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,31
	ctx.r5.s64 = 31;
	// rlwinm r4,r8,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832bb6fc
	goto loc_832BB6FC;
loc_832BB6F0:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_832BB6FC:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bb738
	if (ctx.cr6.eq) goto loc_832BB738;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq cr6,0x832bb764
	if (ctx.cr6.eq) goto loc_832BB764;
loc_832BB71C:
	// lbzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r26,r1,704
	ctx.r26.s64 = ctx.r1.s64 + 704;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r8,r28,r26
	PPC_STORE_U8(ctx.r28.u32 + ctx.r26.u32, ctx.r8.u8);
	// bne 0x832bb71c
	if (!ctx.cr0.eq) goto loc_832BB71C;
	// b 0x832bb764
	goto loc_832BB764;
loc_832BB738:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832bb764
	if (ctx.cr6.eq) goto loc_832BB764;
loc_832BB740:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r1,704
	ctx.r28.s64 = ctx.r1.s64 + 704;
	// lbzx r26,r9,r7
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stbx r8,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r8.u8);
	// bne 0x832bb740
	if (!ctx.cr0.eq) goto loc_832BB740;
loc_832BB764:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bgt cr6,0x832bb6bc
	if (ctx.cr6.gt) goto loc_832BB6BC;
loc_832BB76C:
	// stw r16,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r16.u32);
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// bne cr6,0x832bb790
	if (!ctx.cr6.eq) goto loc_832BB790;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// lbz r8,63(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 63);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
loc_832BB790:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// add r8,r29,r31
	ctx.r8.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r10,r1,708
	ctx.r10.s64 = ctx.r1.s64 + 708;
	// li r7,2
	ctx.r7.s64 = 2;
loc_832BB7A0:
	// lhz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lhz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r25,r6,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lhz r28,-2(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r24,2(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r22,r26,8,0,15
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lhz r21,4(r10)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// or r6,r25,r6
	ctx.r6.u64 = ctx.r25.u64 | ctx.r6.u64;
	// lhz r25,10(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r23,r28,8,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// lhz r19,6(r10)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
	// lhz r17,8(r10)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// rlwinm r20,r24,8,0,15
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// lhz r15,12(r10)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// or r26,r22,r26
	ctx.r26.u64 = ctx.r22.u64 | ctx.r26.u64;
	// mr r16,r28
	ctx.r16.u64 = ctx.r28.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// rlwimi r18,r6,8,0,23
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r18.u64 & 0xFFFFFFFF000000FF);
	// or r28,r23,r28
	ctx.r28.u64 = ctx.r23.u64 | ctx.r28.u64;
	// lhz r23,14(r10)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// or r24,r20,r24
	ctx.r24.u64 = ctx.r20.u64 | ctx.r24.u64;
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// stw r18,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r18.u32);
	// rlwimi r22,r24,8,0,23
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r24.u32, 8) & 0xFFFFFF00) | (ctx.r22.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r16,r28,8,0,23
	ctx.r16.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r16.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r14,r26,8,0,23
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r14.u64 & 0xFFFFFFFF000000FF);
	// stw r22,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r22.u32);
	// or r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 | ctx.r21.u64;
	// stw r16,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r16.u32);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// stw r14,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r14.u32);
	// rlwinm r21,r25,8,0,15
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// stw r22,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r22.u32);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r16,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r16.u32);
	// rlwimi r24,r6,8,0,23
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r24.u64 & 0xFFFFFFFF000000FF);
	// stw r14,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r14.u32);
	// rlwinm r28,r19,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r21,r25
	ctx.r6.u64 = ctx.r21.u64 | ctx.r25.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// or r28,r28,r19
	ctx.r28.u64 = ctx.r28.u64 | ctx.r19.u64;
	// stw r24,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// rlwinm r26,r17,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFF0000;
	// stwx r24,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r24.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// lhz r24,20(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// rlwimi r8,r6,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r20,r28,8,0,23
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r20.u64 & 0xFFFFFFFF000000FF);
	// or r26,r26,r17
	ctx.r26.u64 = ctx.r26.u64 | ctx.r17.u64;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
	// stw r20,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r20.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwimi r22,r26,8,0,23
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r22.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r6,r15,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 8) & 0xFFFF0000;
	// stw r22,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r22.u32);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r28.u32);
	// or r6,r6,r15
	ctx.r6.u64 = ctx.r6.u64 | ctx.r15.u64;
	// stw r20,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r20.u32);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwinm r25,r23,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 8) & 0xFFFF0000;
	// stw r22,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r22.u32);
	// rlwimi r26,r6,8,0,23
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r26.u64 & 0xFFFFFFFF000000FF);
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// or r28,r25,r23
	ctx.r28.u64 = ctx.r25.u64 | ctx.r23.u64;
	// lhz r22,22(r10)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r10.u32 + 22);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r26,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r26.u32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stwx r26,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r26.u32);
	// rlwimi r6,r28,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// lhz r28,16(r10)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r26,18(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 18);
	// rlwinm r25,r28,8,0,15
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r23,r26,8,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFF0000;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// or r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 | ctx.r28.u64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// or r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 | ctx.r26.u64;
	// lhz r25,26(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 26);
	// rlwinm r6,r24,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 8) & 0xFFFF0000;
	// lhz r20,24(r10)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// rlwimi r21,r28,8,0,23
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r21.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r19,r26,8,0,23
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r19.u64 & 0xFFFFFFFF000000FF);
	// or r6,r6,r24
	ctx.r6.u64 = ctx.r6.u64 | ctx.r24.u64;
	// stw r21,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r21.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stw r21,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r21.u32);
	// rlwinm r24,r25,8,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFF0000;
	// stw r19,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r19.u32);
	// rlwinm r28,r22,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xFFFF0000;
	// stw r19,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r19.u32);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rlwimi r23,r6,8,0,23
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r23.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r26,r20,8,0,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r24,r25
	ctx.r8.u64 = ctx.r24.u64 | ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r23.u32);
	// or r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 | ctx.r22.u64;
	// stwx r23,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r23.u32);
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// or r26,r26,r20
	ctx.r26.u64 = ctx.r26.u64 | ctx.r20.u64;
	// rlwimi r6,r8,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwimi r21,r28,8,0,23
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r21.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r22,r26,8,0,23
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r26.u32, 8) & 0xFFFFFF00) | (ctx.r22.u64 & 0xFFFFFFFF000000FF);
	// stw r21,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r21.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r22,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r22.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r21,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r21.u32);
	// stw r22,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r22.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bne 0x832bb7a0
	if (!ctx.cr0.eq) goto loc_832BB7A0;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// b 0x832bc1d4
	goto loc_832BC1D4;
loc_832BB9B8:
	// lwz r10,1548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x832bb9d8
	if (ctx.cr6.lt) goto loc_832BB9D8;
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
loc_832BB9D8:
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r18,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r18.u32);
	// sth r11,832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 832, ctx.r11.u16);
	// bl 0x832c13a8
	ctx.lr = 0x832BB9F4;
	sub_832C13A8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832bba38
	if (!ctx.cr6.lt) goto loc_832BBA38;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r9,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r11.s64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// srw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// b 0x832bba50
	goto loc_832BBA50;
loc_832BBA38:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_832BBA50:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c0cb8
	ctx.lr = 0x832BBA68;
	sub_832C0CB8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x832bc1e8
	goto loc_832BC1E8;
loc_832BBA7C:
	// lwz r10,1548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bbaa4
	if (ctx.cr6.lt) goto loc_832BBAA4;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BBAA4:
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// vspltb v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0xF))));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x832bc1e8
	goto loc_832BC1E8;
loc_832BBB34:
	// lwz r10,1548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bbb5c
	if (ctx.cr6.lt) goto loc_832BBB5C;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BBB5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r4,r8,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r5,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// blt cr6,0x832bbba4
	if (ctx.cr6.lt) goto loc_832BBBA4;
	// lwz r8,560(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// addi r27,r8,4
	ctx.r27.s64 = ctx.r8.s64 + 4;
loc_832BBBA4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// add r7,r29,r31
	ctx.r7.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
loc_832BBBB0:
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r4,r30,9384
	ctx.r4.s64 = ctx.r30.s64 + 9384;
	// addi r28,r30,9400
	ctx.r28.s64 = ctx.r30.s64 + 9400;
	// lbz r25,1(r27)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// rlwinm r24,r5,2,28,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r22,r5,30,28,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0xC;
	// rlwinm r23,r5,0,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// addi r19,r30,9384
	ctx.r19.s64 = ctx.r30.s64 + 9384;
	// rlwinm r5,r5,28,4,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFC;
	// lwzx r4,r24,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r4.u32);
	// addi r18,r30,9384
	ctx.r18.s64 = ctx.r30.s64 + 9384;
	// lwzx r28,r24,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r28.u32);
	// addi r24,r30,9400
	ctx.r24.s64 = ctx.r30.s64 + 9400;
	// addi r21,r30,9384
	ctx.r21.s64 = ctx.r30.s64 + 9384;
	// addi r20,r30,9400
	ctx.r20.s64 = ctx.r30.s64 + 9400;
	// lwzx r19,r22,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r19.u32);
	// addi r17,r30,9400
	ctx.r17.s64 = ctx.r30.s64 + 9400;
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lwzx r24,r22,r24
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// lwzx r21,r23,r21
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r21.u32);
	// and r19,r19,r9
	ctx.r19.u64 = ctx.r19.u64 & ctx.r9.u64;
	// lwzx r22,r5,r18
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r18.u32);
	// addi r18,r30,9384
	ctx.r18.s64 = ctx.r30.s64 + 9384;
	// lwzx r23,r23,r20
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r20.u32);
	// rlwinm r20,r25,2,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lwzx r5,r5,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r17.u32);
	// addi r17,r30,9400
	ctx.r17.s64 = ctx.r30.s64 + 9400;
	// and r21,r21,r9
	ctx.r21.u64 = ctx.r21.u64 & ctx.r9.u64;
	// and r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 & ctx.r10.u64;
	// and r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 & ctx.r10.u64;
	// and r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 & ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// lwzx r28,r20,r18
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r18.u32);
	// or r23,r21,r23
	ctx.r23.u64 = ctx.r21.u64 | ctx.r23.u64;
	// lwzx r21,r20,r17
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r17.u32);
	// rlwinm r16,r25,0,28,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xC;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r15,r30,9384
	ctx.r15.s64 = ctx.r30.s64 + 9384;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// addi r14,r30,9400
	ctx.r14.s64 = ctx.r30.s64 + 9400;
	// stw r23,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r23.u32);
	// or r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 | ctx.r24.u64;
	// stw r23,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r23.u32);
	// or r22,r22,r5
	ctx.r22.u64 = ctx.r22.u64 | ctx.r5.u64;
	// rlwinm r20,r25,30,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0xC;
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// addi r18,r30,9384
	ctx.r18.s64 = ctx.r30.s64 + 9384;
	// stw r22,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r22.u32);
	// addi r17,r30,9400
	ctx.r17.s64 = ctx.r30.s64 + 9400;
	// lwzx r19,r16,r15
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r15.u32);
	// addi r5,r27,1
	ctx.r5.s64 = ctx.r27.s64 + 1;
	// lwzx r27,r16,r14
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r14.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r24,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r24.u32);
	// and r4,r28,r9
	ctx.r4.u64 = ctx.r28.u64 & ctx.r9.u64;
	// stw r22,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r22.u32);
	// and r28,r21,r10
	ctx.r28.u64 = ctx.r21.u64 & ctx.r10.u64;
	// lwzx r24,r20,r18
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r18.u32);
	// lwzx r23,r20,r17
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r17.u32);
	// rlwinm r25,r25,28,4,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFC;
	// addi r21,r30,9384
	ctx.r21.s64 = ctx.r30.s64 + 9384;
	// and r22,r19,r9
	ctx.r22.u64 = ctx.r19.u64 & ctx.r9.u64;
	// and r27,r27,r10
	ctx.r27.u64 = ctx.r27.u64 & ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r20,r30,9400
	ctx.r20.s64 = ctx.r30.s64 + 9400;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// or r28,r22,r27
	ctx.r28.u64 = ctx.r22.u64 | ctx.r27.u64;
	// and r27,r24,r9
	ctx.r27.u64 = ctx.r24.u64 & ctx.r9.u64;
	// lwzx r24,r25,r21
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r21.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// and r23,r23,r10
	ctx.r23.u64 = ctx.r23.u64 & ctx.r10.u64;
	// stwx r4,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r4,r30,9384
	ctx.r4.s64 = ctx.r30.s64 + 9384;
	// lbz r19,0(r5)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r22,r30,9400
	ctx.r22.s64 = ctx.r30.s64 + 9400;
	// lwzx r25,r25,r20
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r20.u32);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// rlwinm r28,r19,2,28,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xC;
	// rlwinm r21,r19,0,28,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xC;
	// addi r20,r30,9384
	ctx.r20.s64 = ctx.r30.s64 + 9384;
	// addi r18,r30,9400
	ctx.r18.s64 = ctx.r30.s64 + 9400;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// and r24,r24,r9
	ctx.r24.u64 = ctx.r24.u64 & ctx.r9.u64;
	// lwzx r4,r28,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// and r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 & ctx.r10.u64;
	// lwzx r28,r28,r22
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// rlwinm r17,r19,30,28,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0xC;
	// lwzx r20,r21,r20
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// addi r16,r30,9384
	ctx.r16.s64 = ctx.r30.s64 + 9384;
	// lwzx r21,r21,r18
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r18.u32);
	// addi r15,r30,9400
	ctx.r15.s64 = ctx.r30.s64 + 9400;
	// lbz r22,0(r5)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// or r27,r27,r23
	ctx.r27.u64 = ctx.r27.u64 | ctx.r23.u64;
	// or r25,r24,r25
	ctx.r25.u64 = ctx.r24.u64 | ctx.r25.u64;
	// stw r27,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r27.u32);
	// rlwinm r19,r19,28,4,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 28) & 0xFFFFFFC;
	// addi r18,r30,9384
	ctx.r18.s64 = ctx.r30.s64 + 9384;
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// stw r25,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r25.u32);
	// addi r14,r30,9400
	ctx.r14.s64 = ctx.r30.s64 + 9400;
	// stw r25,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r25.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwzx r23,r17,r16
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r16.u32);
	// addi r7,r30,9384
	ctx.r7.s64 = ctx.r30.s64 + 9384;
	// lwzx r24,r17,r15
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r15.u32);
	// rlwinm r17,r22,2,28,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xC;
	// lwzx r18,r19,r18
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r18.u32);
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// lwzx r19,r19,r14
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r14.u32);
	// and r27,r21,r10
	ctx.r27.u64 = ctx.r21.u64 & ctx.r10.u64;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// lwzx r21,r17,r7
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r7.u32);
	// and r7,r19,r10
	ctx.r7.u64 = ctx.r19.u64 & ctx.r10.u64;
	// and r28,r18,r9
	ctx.r28.u64 = ctx.r18.u64 & ctx.r9.u64;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// and r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 & ctx.r9.u64;
	// stwx r4,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r4.u32);
	// addi r25,r30,9400
	ctx.r25.s64 = ctx.r30.s64 + 9400;
	// or r28,r28,r7
	ctx.r28.u64 = ctx.r28.u64 | ctx.r7.u64;
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// and r24,r24,r10
	ctx.r24.u64 = ctx.r24.u64 & ctx.r10.u64;
	// or r27,r20,r27
	ctx.r27.u64 = ctx.r20.u64 | ctx.r27.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r25,r17,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r25.u32);
	// rlwinm r20,r22,0,28,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xC;
	// stw r27,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r27.u32);
	// addi r4,r30,9384
	ctx.r4.s64 = ctx.r30.s64 + 9384;
	// or r24,r23,r24
	ctx.r24.u64 = ctx.r23.u64 | ctx.r24.u64;
	// addi r19,r30,9400
	ctx.r19.s64 = ctx.r30.s64 + 9400;
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// rlwinm r23,r22,30,28,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0xC;
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
	// addi r18,r30,9384
	ctx.r18.s64 = ctx.r30.s64 + 9384;
	// stw r28,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r28.u32);
	// and r27,r25,r10
	ctx.r27.u64 = ctx.r25.u64 & ctx.r10.u64;
	// lwzx r4,r20,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r4.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// and r21,r21,r9
	ctx.r21.u64 = ctx.r21.u64 & ctx.r9.u64;
	// lwzx r20,r20,r19
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// stw r24,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r24.u32);
	// addi r25,r30,9384
	ctx.r25.s64 = ctx.r30.s64 + 9384;
	// rlwinm r22,r22,28,4,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 28) & 0xFFFFFFC;
	// stw r28,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r28.u32);
	// addi r19,r30,9400
	ctx.r19.s64 = ctx.r30.s64 + 9400;
	// lwzx r24,r23,r18
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r18.u32);
	// or r28,r21,r27
	ctx.r28.u64 = ctx.r21.u64 | ctx.r27.u64;
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// and r21,r20,r10
	ctx.r21.u64 = ctx.r20.u64 & ctx.r10.u64;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stwx r28,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u32);
	// addi r27,r5,1
	ctx.r27.s64 = ctx.r5.s64 + 1;
	// lwzx r28,r22,r25
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r23,r23,r19
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r19.u32);
	// addi r5,r30,9400
	ctx.r5.s64 = ctx.r30.s64 + 9400;
	// and r25,r24,r9
	ctx.r25.u64 = ctx.r24.u64 & ctx.r9.u64;
	// or r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 | ctx.r21.u64;
	// lwzx r5,r22,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r5.u32);
	// and r24,r23,r10
	ctx.r24.u64 = ctx.r23.u64 & ctx.r10.u64;
	// and r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 & ctx.r9.u64;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// or r4,r25,r24
	ctx.r4.u64 = ctx.r25.u64 | ctx.r24.u64;
	// or r5,r28,r5
	ctx.r5.u64 = ctx.r28.u64 | ctx.r5.u64;
	// stw r4,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r5,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r5.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r5,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r5.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// bne 0x832bbbb0
	if (!ctx.cr0.eq) goto loc_832BBBB0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// b 0x832bc1d4
	goto loc_832BC1D4;
loc_832BBE98:
	// lwz r10,1548(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r7,180(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r8,r29,r31
	ctx.r8.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832bbecc
	if (ctx.cr6.lt) goto loc_832BBECC;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BBECC:
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x832bbfa0
	if (ctx.cr6.eq) goto loc_832BBFA0;
	// subf r6,r29,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r29.s64;
	// li r7,8
	ctx.r7.s64 = 8;
loc_832BBEE0:
	// lbz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r17,r21,8
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r21.u32, 8);
	// lbz r19,6(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r20,r5,8
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// rotlwi r18,r28,8
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r28.u32, 8);
	// lbz r16,1(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r15,r19,8
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r19.u32, 8);
	// lbz r14,3(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// or r21,r17,r21
	ctx.r21.u64 = ctx.r17.u64 | ctx.r21.u64;
	// or r5,r20,r5
	ctx.r5.u64 = ctx.r20.u64 | ctx.r5.u64;
	// lbz r20,5(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// or r28,r18,r28
	ctx.r28.u64 = ctx.r18.u64 | ctx.r28.u64;
	// lbz r18,7(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// or r19,r15,r19
	ctx.r19.u64 = ctx.r15.u64 | ctx.r19.u64;
	// rlwinm r21,r21,8,0,23
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r19,r19,8,0,23
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFFFF00;
	// or r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 | ctx.r20.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// or r28,r28,r14
	ctx.r28.u64 = ctx.r28.u64 | ctx.r14.u64;
	// or r19,r19,r18
	ctx.r19.u64 = ctx.r19.u64 | ctx.r18.u64;
	// rlwinm r21,r21,8,0,23
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r28,r28,8,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r19,r19,8,0,23
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFFFF00;
	// or r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 | ctx.r20.u64;
	// or r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 | ctx.r16.u64;
	// or r28,r28,r14
	ctx.r28.u64 = ctx.r28.u64 | ctx.r14.u64;
	// stw r21,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r21.u32);
	// or r20,r19,r18
	ctx.r20.u64 = ctx.r19.u64 | ctx.r18.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwx r5,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r5.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r20,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r20.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// stw r21,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r21.u32);
	// stw r20,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r20.u32);
	// bne 0x832bbee0
	if (!ctx.cr0.eq) goto loc_832BBEE0;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x832bc1d4
	goto loc_832BC1D4;
loc_832BBFA0:
	// li r5,2
	ctx.r5.s64 = 2;
loc_832BBFA4:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r20,4(r11)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r19,r6,8,0,15
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lhz r18,6(r11)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r17,r28,8,0,15
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// std r3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// or r6,r19,r6
	ctx.r6.u64 = ctx.r19.u64 | ctx.r6.u64;
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// rlwinm r16,r20,8,0,15
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// or r28,r17,r28
	ctx.r28.u64 = ctx.r17.u64 | ctx.r28.u64;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// or r20,r16,r20
	ctx.r20.u64 = ctx.r16.u64 | ctx.r20.u64;
	// rlwinm r15,r18,8,0,15
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 8) & 0xFFFF0000;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// rlwimi r19,r28,8,0,23
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r19.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r17,r20,8,0,23
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0xFFFFFF00) | (ctx.r17.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r14,r6,8,0,23
	ctx.r14.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r14.u64 & 0xFFFFFFFF000000FF);
	// stw r19,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r19.u32);
	// or r18,r15,r18
	ctx.r18.u64 = ctx.r15.u64 | ctx.r18.u64;
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// stw r17,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r17.u32);
	// rlwimi r16,r18,8,0,23
	ctx.r16.u64 = (__builtin_rotateleft32(ctx.r18.u32, 8) & 0xFFFFFF00) | (ctx.r16.u64 & 0xFFFFFFFF000000FF);
	// stw r14,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// stw r17,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r17.u32);
	// stw r16,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r16.u32);
	// stw r14,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r14.u32);
	// stw r16,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r16.u32);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r20,4(r11)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r15,6(r11)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r18,r6,8,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// or r6,r18,r6
	ctx.r6.u64 = ctx.r18.u64 | ctx.r6.u64;
	// rlwinm r11,r28,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// rlwimi r3,r6,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r19,r28,8,0,23
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r19.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r4,r20,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 8) & 0xFFFF0000;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r18,r15,8,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 8) & 0xFFFF0000;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r28,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r28.u32);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// or r20,r4,r20
	ctx.r20.u64 = ctx.r4.u64 | ctx.r20.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// stw r19,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// or r18,r18,r15
	ctx.r18.u64 = ctx.r18.u64 | ctx.r15.u64;
	// rlwimi r17,r20,8,0,23
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0xFFFFFF00) | (ctx.r17.u64 & 0xFFFFFFFF000000FF);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// rlwimi r6,r18,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r18.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// stw r17,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
	// stw r17,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r17.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r28,r8,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// or r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 | ctx.r8.u64;
	// lhz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// rlwimi r20,r8,8,0,23
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFFFFFF00) | (ctx.r20.u64 & 0xFFFFFFFF000000FF);
	// addi r8,r7,8
	ctx.r8.s64 = ctx.r7.s64 + 8;
	// lhz r7,6(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// rlwinm r19,r28,8,0,15
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFF0000;
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// rlwinm r20,r6,8,0,15
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// rlwinm r18,r7,8,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// lhz r17,2(r8)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// std r31,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r31.u64);
	// or r7,r18,r7
	ctx.r7.u64 = ctx.r18.u64 | ctx.r7.u64;
	// lhz r16,4(r8)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// lhz r14,6(r8)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r8.u32 + 6);
	// rlwimi r3,r7,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// or r28,r19,r28
	ctx.r28.u64 = ctx.r19.u64 | ctx.r28.u64;
	// lhz r19,0(r8)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// or r20,r20,r6
	ctx.r20.u64 = ctx.r20.u64 | ctx.r6.u64;
	// rlwinm r4,r19,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 8) & 0xFFFF0000;
	// rlwimi r6,r20,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r15,r28,8,0,23
	ctx.r15.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r15.u64 & 0xFFFFFFFF000000FF);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// rlwinm r18,r17,8,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0xFFFF0000;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// or r19,r4,r19
	ctx.r19.u64 = ctx.r4.u64 | ctx.r19.u64;
	// stw r15,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r15.u32);
	// stw r15,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r15.u32);
	// rlwinm r20,r16,8,0,15
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 8) & 0xFFFF0000;
	// or r18,r18,r17
	ctx.r18.u64 = ctx.r18.u64 | ctx.r17.u64;
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwimi r31,r19,8,0,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0xFFFFFF00) | (ctx.r31.u64 & 0xFFFFFFFF000000FF);
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// or r20,r20,r16
	ctx.r20.u64 = ctx.r20.u64 | ctx.r16.u64;
	// rlwinm r28,r14,8,0,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 8) & 0xFFFF0000;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ld r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// or r28,r28,r14
	ctx.r28.u64 = ctx.r28.u64 | ctx.r14.u64;
	// stw r16,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r16.u32);
	// stw r16,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r16.u32);
	// rlwimi r17,r20,8,0,23
	ctx.r17.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0xFFFFFF00) | (ctx.r17.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r19,r28,8,0,23
	ctx.r19.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0xFFFFFF00) | (ctx.r19.u64 & 0xFFFFFFFF000000FF);
	// lwz r15,136(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwimi r15,r18,8,0,23
	ctx.r15.u64 = (__builtin_rotateleft32(ctx.r18.u32, 8) & 0xFFFFFF00) | (ctx.r15.u64 & 0xFFFFFFFF000000FF);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// ld r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stwx r18,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r18.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// stwx r18,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r18.u32);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r15,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r15.u32);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r15,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r15.u32);
	// stw r17,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r17.u32);
	// stw r17,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r17.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r19,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r19.u32);
	// stw r19,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r19.u32);
	// bne 0x832bbfa4
	if (!ctx.cr0.eq) goto loc_832BBFA4;
loc_832BC1D4:
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r17,124(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r16,256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,448(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
loc_832BC1E8:
	// lwz r9,1604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// rlwinm r8,r23,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// add r10,r23,r9
	ctx.r10.u64 = ctx.r23.u64 + ctx.r9.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stbx r20,r8,r19
	PPC_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r20.u8);
	// addi r5,r7,-16
	ctx.r5.s64 = ctx.r7.s64 + -16;
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stbx r20,r6,r19
	PPC_STORE_U8(ctx.r6.u32 + ctx.r19.u32, ctx.r20.u8);
	// b 0x832bd328
	goto loc_832BD328;
loc_832BC218:
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// stbx r20,r10,r19
	PPC_STORE_U8(ctx.r10.u32 + ctx.r19.u32, ctx.r20.u8);
	// blt cr6,0x832bc234
	if (ctx.cr6.lt) goto loc_832BC234;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r25,r14,4
	ctx.r25.s64 = ctx.r14.s64 + 4;
	// addi r22,r10,4
	ctx.r22.s64 = ctx.r10.s64 + 4;
loc_832BC234:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lwz r7,1532(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r25.u32);
	// mullw r9,r8,r31
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x832bd310
	if (ctx.cr6.gt) goto loc_832BD310;
	// or r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 | ctx.r29.u64;
	// add r8,r29,r31
	ctx.r8.u64 = ctx.r29.u64 + ctx.r31.u64;
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x832bc300
	if (!ctx.cr6.eq) goto loc_832BC300;
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lfd f13,0(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stfd f13,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f13.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stfd f0,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfd f12,0(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfd f12,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f12.u64);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lfd f11,0(r10)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stfd f11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f11.u64);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lfd f10,0(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stfd f10,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f10.u64);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lfd f9,0(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfdx f8,r10,r31
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// stfd f9,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f9.u64);
	// lfdx f7,r9,r31
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r31.u32);
	// stfdx f8,r8,r31
	PPC_STORE_U64(ctx.r8.u32 + ctx.r31.u32, ctx.f8.u64);
	// stfdx f7,r7,r31
	PPC_STORE_U64(ctx.r7.u32 + ctx.r31.u32, ctx.f7.u64);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BC300:
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x832bc3d8
	if (!ctx.cr6.eq) goto loc_832BC3D8;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r15,4(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r14,4(r9)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r15,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r15.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r15,4(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r14,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r14.u32);
	// lwz r14,0(r9)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r15,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r15.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r15,0(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r14,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r14.u32);
	// stw r5,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r5.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r28,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r28.u32);
	// stwx r15,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r15.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BC3D8:
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lbz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r24,5(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r23,6(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r21,7(r9)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lbz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r4,1(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r3,2(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r28,3(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r30,3(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r27,5(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r25,6(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r22,7(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// std r11,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r11.u64);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// add r19,r10,r31
	ctx.r19.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r18,1(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r17,2(r9)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r16,3(r9)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r15,4(r9)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r14,5(r9)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,7(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// stb r24,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r24.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// rotlwi r9,r19,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// lwz r19,136(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// add r19,r19,r31
	ctx.r19.u64 = ctx.r19.u64 + ctx.r31.u64;
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r30,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r30.u8);
	// stb r29,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r29.u8);
	// stb r27,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r27.u8);
	// stb r25,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r25.u8);
	// stb r22,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r22.u8);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r19.u32);
	// stb r21,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// stb r26,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r26.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r22,1(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r19,2(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r23,5(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r24,6(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lwz r21,144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lbz r30,1(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r21,r21,r31
	ctx.r21.u64 = ctx.r21.u64 + ctx.r31.u64;
	// lbz r29,2(r9)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r27,3(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r21,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r21,82(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lbz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stb r20,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r20.u8);
	// stb r18,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r18.u8);
	// stb r17,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r17.u8);
	// stb r16,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r16.u8);
	// stb r15,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r15.u8);
	// stb r14,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r14.u8);
	// stb r11,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r11.u8);
	// stb r21,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r21.u8);
	// lwz r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r25.u8);
	// li r20,1
	ctx.r20.s64 = 1;
	// lbz r25,82(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stb r22,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r22.u8);
	// stb r23,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r23.u8);
	// stb r24,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r24.u8);
	// stb r25,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r25.u8);
	// lbz r25,114(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r25,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r25.u8);
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r19,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r19.u8);
	// stbx r6,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u8);
	// stb r30,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r30.u8);
	// lbz r24,6(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// stb r25,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r25.u8);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lbz r25,5(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r23,7(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r27,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r27.u8);
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stb r29,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r29.u8);
	// lbz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r22,1(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r18,4(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r17,5(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r16,6(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r21,2(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r19,3(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r15,7(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stb r25,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r25.u8);
	// stbx r30,r8,r31
	PPC_STORE_U8(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u8);
	// stb r26,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r26.u8);
	// stb r24,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r24.u8);
	// stb r23,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r23.u8);
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r30,5(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lbz r8,2(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// lbz r27,6(r9)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r25,7(r9)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r20,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r20.u64);
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// lbz r8,3(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 3);
	// lbz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r24,1(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r23,2(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r14,3(r9)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// lbz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 4);
	// lbz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r20,1(r6)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// stb r22,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r22.u8);
	// stb r18,4(r7)
	PPC_STORE_U8(ctx.r7.u32 + 4, ctx.r18.u8);
	// stb r8,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r8.u8);
	// lbz r8,5(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 5);
	// stb r17,5(r7)
	PPC_STORE_U8(ctx.r7.u32 + 5, ctx.r17.u8);
	// stb r16,6(r7)
	PPC_STORE_U8(ctx.r7.u32 + 6, ctx.r16.u8);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// stb r27,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r27.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// lbz r8,6(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 6);
	// stb r25,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r25.u8);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// lbz r6,7(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7);
	// lwz r30,312(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r27,512(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r18,448(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r16,256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r17,124(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r21,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r21.u8);
	// stb r19,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r19.u8);
	// stb r15,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r15.u8);
	// stb r5,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r5.u8);
	// stb r4,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r4.u8);
	// lbz r5,118(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r4,119(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stb r3,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r3.u8);
	// lbz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stbx r9,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u8);
	// stb r5,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r5.u8);
	// lbz r5,81(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stb r4,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r4.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r3.u8);
	// ld r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lbz r3,114(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// stb r5,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r5.u8);
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lbz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r3,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r3.u8);
	// lbz r3,113(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r9,115(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// stb r4,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r4.u8);
	// stb r5,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r5.u8);
	// lbz r5,117(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// stbx r26,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r26.u8);
	// stb r24,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r24.u8);
	// stb r23,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r23.u8);
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r11.u8);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r20,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r20.u8);
	// stb r3,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r3.u8);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r4,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r4.u8);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r11,696(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 696);
	// ld r20,144(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stb r28,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r28.u8);
	// stb r14,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r14.u8);
	// stb r9,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r9.u8);
	// stb r5,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r5.u8);
	// stb r6,7(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7, ctx.r6.u8);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BC718:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// bge cr6,0x832bc744
	if (!ctx.cr6.lt) goto loc_832BC744;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r9,r26,4
	ctx.xer.ca = ctx.r26.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r26.s64;
	// addi r6,r26,28
	ctx.r6.s64 = ctx.r26.s64 + 28;
	// slw r8,r10,r26
	ctx.r8.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r26.u8 & 0x3F));
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// srw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x832bc750
	goto loc_832BC750;
loc_832BC744:
	// clrlwi r10,r4,28
	ctx.r10.u64 = ctx.r4.u32 & 0xF;
	// rlwinm r5,r4,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// addi r6,r26,-4
	ctx.r6.s64 = ctx.r26.s64 + -4;
loc_832BC750:
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt cr6,0x832bc774
	if (ctx.cr6.lt) goto loc_832BC774;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BC774:
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bc788
	if (ctx.cr6.lt) goto loc_832BC788;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r16,r10,4
	ctx.r16.s64 = ctx.r10.s64 + 4;
loc_832BC788:
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// stbx r20,r10,r19
	PPC_STORE_U8(ctx.r10.u32 + ctx.r19.u32, ctx.r20.u8);
loc_832BC798:
	// lbz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x832bc848
	if (ctx.cr6.gt) goto loc_832BC848;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x832bc7cc
	if (!ctx.cr6.eq) goto loc_832BC7CC;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,31
	ctx.r6.s64 = 31;
	// rlwinm r5,r8,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832bc7d8
	goto loc_832BC7D8;
loc_832BC7CC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_832BC7D8:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bc814
	if (ctx.cr6.eq) goto loc_832BC814;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq cr6,0x832bc840
	if (ctx.cr6.eq) goto loc_832BC840;
loc_832BC7F8:
	// lbzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r26,r1,704
	ctx.r26.s64 = ctx.r1.s64 + 704;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r8,r28,r26
	PPC_STORE_U8(ctx.r28.u32 + ctx.r26.u32, ctx.r8.u8);
	// bne 0x832bc7f8
	if (!ctx.cr0.eq) goto loc_832BC7F8;
	// b 0x832bc840
	goto loc_832BC840;
loc_832BC814:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x832bc840
	if (ctx.cr6.eq) goto loc_832BC840;
loc_832BC81C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r28,r1,704
	ctx.r28.s64 = ctx.r1.s64 + 704;
	// lbzx r26,r9,r7
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stbx r8,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r8.u8);
	// bne 0x832bc81c
	if (!ctx.cr0.eq) goto loc_832BC81C;
loc_832BC840:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bgt cr6,0x832bc798
	if (ctx.cr6.gt) goto loc_832BC798;
loc_832BC848:
	// stw r16,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r16.u32);
	// cmpwi cr6,r9,63
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 63, ctx.xer);
	// bne cr6,0x832bc86c
	if (!ctx.cr6.eq) goto loc_832BC86C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// lbz r8,63(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 63);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stbx r10,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
loc_832BC86C:
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lfd f0,720(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 720);
	// lfd f13,712(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f12,728(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// stfdx f13,r29,r31
	PPC_STORE_U64(ctx.r29.u32 + ctx.r31.u32, ctx.f13.u64);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f11,736(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 736);
	// lfd f10,744(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lfd f9,704(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 704);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfd f8,752(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 752);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stfd f12,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f12.u64);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f7,760(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// stfd f9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f9.u64);
	// stfd f11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f11.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stfd f10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f10.u64);
	// stfdx f8,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.f8.u64);
	// stfdx f7,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.f7.u64);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BC8DC:
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// stbx r20,r10,r19
	PPC_STORE_U8(ctx.r10.u32 + ctx.r19.u32, ctx.r20.u8);
	// blt cr6,0x832bc8f8
	if (ctx.cr6.lt) goto loc_832BC8F8;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r25,r14,4
	ctx.r25.s64 = ctx.r14.s64 + 4;
	// addi r22,r10,4
	ctx.r22.s64 = ctx.r10.s64 + 4;
loc_832BC8F8:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lwz r6,1532(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r25.u32);
	// mullw r9,r8,r31
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r10,r24
	ctx.r7.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x832bd310
	if (ctx.cr6.gt) goto loc_832BD310;
	// cmplwi cr6,r26,7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 7, ctx.xer);
	// bge cr6,0x832bc974
	if (!ctx.cr6.lt) goto loc_832BC974;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r26,7
	ctx.xer.ca = ctx.r26.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r26.s64;
	// addi r9,r26,25
	ctx.r9.s64 = ctx.r26.s64 + 25;
	// slw r8,r11,r26
	ctx.r8.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r26.u8 & 0x3F));
	// or r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// srw r5,r11,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// clrlwi r6,r6,25
	ctx.r6.u64 = ctx.r6.u32 & 0x7F;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// b 0x832bc988
	goto loc_832BC988;
loc_832BC974:
	// rlwinm r11,r4,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r26,-7
	ctx.r10.s64 = ctx.r26.s64 + -7;
	// clrlwi r6,r4,25
	ctx.r6.u64 = ctx.r4.u32 & 0x7F;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_832BC988:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c23a8
	ctx.lr = 0x832BC99C;
	sub_832C23A8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BC9B0:
	// rlwinm r11,r23,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// stbx r20,r11,r19
	PPC_STORE_U8(ctx.r11.u32 + ctx.r19.u32, ctx.r20.u8);
	// blt cr6,0x832bc9c8
	if (ctx.cr6.lt) goto loc_832BC9C8;
	// lwz r11,496(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
loc_832BC9C8:
	// lhz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 0);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r18,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r18.u32);
	// sth r11,832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 832, ctx.r11.u16);
	// bl 0x832c13a8
	ctx.lr = 0x832BC9E4;
	sub_832C13A8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832bca28
	if (!ctx.cr6.lt) goto loc_832BCA28;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r9,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r11.s64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// srw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// clrlwi r11,r3,28
	ctx.r11.u64 = ctx.r3.u32 & 0xF;
	// b 0x832bca40
	goto loc_832BCA40;
loc_832BCA28:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_832BCA40:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c0998
	ctx.lr = 0x832BCA58;
	sub_832C0998(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BCA6C:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bca84
	if (ctx.cr6.lt) goto loc_832BCA84;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BCA84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r23,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rldicr r7,r9,8,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stbx r20,r8,r19
	PPC_STORE_U8(ctx.r8.u32 + ctx.r19.u32, ctx.r20.u8);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rldicr r5,r6,16,47
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rldicr r7,r8,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stdx r6,r29,r31
	PPC_STORE_U64(ctx.r29.u32 + ctx.r31.u32, ctx.r6.u64);
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// std r6,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r6.u64);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// std r6,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r6.u64);
	// stdx r6,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u64);
	// stdx r6,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u64);
	// b 0x832bd30c
	goto loc_832BD30C;
loc_832BCAE8:
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// stbx r20,r10,r19
	PPC_STORE_U8(ctx.r10.u32 + ctx.r19.u32, ctx.r20.u8);
	// blt cr6,0x832bcb04
	if (ctx.cr6.lt) goto loc_832BCB04;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r25,r14,4
	ctx.r25.s64 = ctx.r14.s64 + 4;
	// addi r22,r10,4
	ctx.r22.s64 = ctx.r10.s64 + 4;
loc_832BCB04:
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lbz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lwz r7,1532(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1532);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r25.u32);
	// mullw r9,r8,r31
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r31.s32);
	// stw r22,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r22.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r10,r24
	ctx.r28.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x832bd310
	if (ctx.cr6.lt) goto loc_832BD310;
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x832bd310
	if (ctx.cr6.gt) goto loc_832BD310;
	// lwz r10,772(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r11,768(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bcb60
	if (ctx.cr6.lt) goto loc_832BCB60;
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832BCB60:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r9,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r9.u32);
	// sth r10,832(r1)
	PPC_STORE_U16(ctx.r1.u32 + 832, ctx.r10.u16);
	// bl 0x832c13a8
	ctx.lr = 0x832BCB7C;
	sub_832C13A8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x832bcbc0
	if (!ctx.cr6.lt) goto loc_832BCBC0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r9,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r9.s64 = 4 - ctx.r11.s64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// srw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// clrlwi r6,r3,28
	ctx.r6.u64 = ctx.r3.u32 & 0xF;
	// b 0x832bcbd8
	goto loc_832BCBD8;
loc_832BCBC0:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_832BCBD8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832c1030
	ctx.lr = 0x832BCBF0;
	sub_832C1030(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BCC04:
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bcc1c
	if (ctx.cr6.lt) goto loc_832BCC1C;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BCC1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r23,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rotlwi r6,r10,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r8,r29,r31
	ctx.r8.u64 = ctx.r29.u64 + ctx.r31.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r3,r4,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stbx r20,r9,r19
	PPC_STORE_U8(ctx.r9.u32 + ctx.r19.u32, ctx.r20.u8);
	// rlwinm r4,r5,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r6,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// blt cr6,0x832bcc74
	if (ctx.cr6.lt) goto loc_832BCC74;
	// lwz r7,560(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
loc_832BCC74:
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// addi r6,r30,9256
	ctx.r6.s64 = ctx.r30.s64 + 9256;
	// addi r4,r30,9320
	ctx.r4.s64 = ctx.r30.s64 + 9320;
	// lbz r5,2(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// rlwinm r3,r7,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3C;
	// lbz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r25,r5,2,26,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3C;
	// lbz r26,3(r27)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// rlwinm r7,r7,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r24,4(r27)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r27.u32 + 4);
	// addi r23,r30,9256
	ctx.r23.s64 = ctx.r30.s64 + 9256;
	// lbz r22,5(r27)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r27.u32 + 5);
	// addi r20,r30,9256
	ctx.r20.s64 = ctx.r30.s64 + 9256;
	// lwzx r6,r3,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// addi r21,r30,9320
	ctx.r21.s64 = ctx.r30.s64 + 9320;
	// lwzx r4,r3,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// rlwinm r3,r5,30,2,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r19,r30,9320
	ctx.r19.s64 = ctx.r30.s64 + 9320;
	// addi r5,r30,9256
	ctx.r5.s64 = ctx.r30.s64 + 9256;
	// lwzx r23,r7,r23
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// addi r18,r30,9320
	ctx.r18.s64 = ctx.r30.s64 + 9320;
	// lwzx r20,r25,r20
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r20.u32);
	// lwzx r7,r7,r21
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r21.u32);
	// rlwinm r21,r28,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3C;
	// rlwinm r28,r28,30,2,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r25,r25,r19
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r19.u32);
	// addi r19,r30,9256
	ctx.r19.s64 = ctx.r30.s64 + 9256;
	// lwzx r5,r3,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// lwzx r3,r3,r18
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r18.u32);
	// and r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 & ctx.r10.u64;
	// addi r17,r30,9320
	ctx.r17.s64 = ctx.r30.s64 + 9320;
	// addi r16,r30,9256
	ctx.r16.s64 = ctx.r30.s64 + 9256;
	// addi r18,r30,9320
	ctx.r18.s64 = ctx.r30.s64 + 9320;
	// lwzx r19,r21,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r19.u32);
	// or r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 & ctx.r10.u64;
	// and r20,r20,r9
	ctx.r20.u64 = ctx.r20.u64 & ctx.r9.u64;
	// lwzx r21,r21,r17
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r17.u32);
	// lwzx r16,r28,r16
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r16.u32);
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// or r6,r20,r25
	ctx.r6.u64 = ctx.r20.u64 | ctx.r25.u64;
	// lwzx r28,r28,r18
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r18.u32);
	// and r17,r7,r10
	ctx.r17.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r18,r26,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3C;
	// stwx r6,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r6.u32);
	// addi r15,r30,9256
	ctx.r15.s64 = ctx.r30.s64 + 9256;
	// addi r25,r30,9320
	ctx.r25.s64 = ctx.r30.s64 + 9320;
	// or r4,r23,r17
	ctx.r4.u64 = ctx.r23.u64 | ctx.r17.u64;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// and r6,r21,r10
	ctx.r6.u64 = ctx.r21.u64 & ctx.r10.u64;
	// lwzx r4,r18,r15
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r15.u32);
	// and r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 & ctx.r9.u64;
	// lwzx r25,r18,r25
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r25.u32);
	// rlwinm r26,r26,30,2,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFC;
	// and r8,r19,r9
	ctx.r8.u64 = ctx.r19.u64 & ctx.r9.u64;
	// and r23,r16,r9
	ctx.r23.u64 = ctx.r16.u64 & ctx.r9.u64;
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// addi r21,r30,9256
	ctx.r21.s64 = ctx.r30.s64 + 9256;
	// addi r20,r30,9320
	ctx.r20.s64 = ctx.r30.s64 + 9320;
	// rlwinm r18,r24,2,26,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x3C;
	// addi r19,r30,9256
	ctx.r19.s64 = ctx.r30.s64 + 9256;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// or r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwzx r6,r26,r21
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r21.u32);
	// or r28,r23,r28
	ctx.r28.u64 = ctx.r23.u64 | ctx.r28.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwzx r5,r26,r20
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r20.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// lwzx r26,r18,r19
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	// addi r3,r30,9320
	ctx.r3.s64 = ctx.r30.s64 + 9320;
	// addi r28,r30,9256
	ctx.r28.s64 = ctx.r30.s64 + 9256;
	// addi r23,r30,9320
	ctx.r23.s64 = ctx.r30.s64 + 9320;
	// rlwinm r24,r24,30,2,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFC;
	// lwzx r28,r24,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r28.u32);
	// rlwinm r21,r22,2,26,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0x3C;
	// lwzx r3,r18,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r3.u32);
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// lwzx r24,r24,r23
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r23.u32);
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r22,r22,30,2,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFC;
	// lbz r19,6(r27)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r27.u32 + 6);
	// and r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 & ctx.r10.u64;
	// lbz r27,7(r27)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + 7);
	// addi r18,r30,9256
	ctx.r18.s64 = ctx.r30.s64 + 9256;
	// lwz r16,512(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// addi r17,r30,9320
	ctx.r17.s64 = ctx.r30.s64 + 9320;
	// addi r20,r30,9256
	ctx.r20.s64 = ctx.r30.s64 + 9256;
	// addi r23,r30,9320
	ctx.r23.s64 = ctx.r30.s64 + 9320;
	// or r4,r4,r25
	ctx.r4.u64 = ctx.r4.u64 | ctx.r25.u64;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lwzx r25,r22,r18
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r18.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// and r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 & ctx.r10.u64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// rlwinm r8,r19,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0x3C;
	// lwzx r5,r22,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r17.u32);
	// addi r22,r30,9256
	ctx.r22.s64 = ctx.r30.s64 + 9256;
	// lwzx r20,r21,r20
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	// and r3,r28,r9
	ctx.r3.u64 = ctx.r28.u64 & ctx.r9.u64;
	// lwzx r23,r21,r23
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r23.u32);
	// addi r21,r30,9320
	ctx.r21.s64 = ctx.r30.s64 + 9320;
	// and r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 & ctx.r9.u64;
	// and r6,r24,r10
	ctx.r6.u64 = ctx.r24.u64 & ctx.r10.u64;
	// lwzx r22,r8,r22
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// rlwinm r24,r27,2,26,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3C;
	// addi r17,r30,9256
	ctx.r17.s64 = ctx.r30.s64 + 9256;
	// lwzx r21,r8,r21
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r21.u32);
	// addi r8,r30,9320
	ctx.r8.s64 = ctx.r30.s64 + 9320;
	// addi r15,r30,9320
	ctx.r15.s64 = ctx.r30.s64 + 9320;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// or r4,r26,r4
	ctx.r4.u64 = ctx.r26.u64 | ctx.r4.u64;
	// or r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// rlwinm r28,r19,30,2,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 30) & 0x3FFFFFFC;
	// and r7,r5,r10
	ctx.r7.u64 = ctx.r5.u64 & ctx.r10.u64;
	// lwzx r26,r24,r17
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r17.u32);
	// addi r19,r30,9256
	ctx.r19.s64 = ctx.r30.s64 + 9256;
	// lwzx r6,r24,r15
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r15.u32);
	// rlwinm r27,r27,30,2,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r18,r30,9320
	ctx.r18.s64 = ctx.r30.s64 + 9320;
	// addi r14,r30,9256
	ctx.r14.s64 = ctx.r30.s64 + 9256;
	// and r3,r25,r9
	ctx.r3.u64 = ctx.r25.u64 & ctx.r9.u64;
	// and r24,r20,r9
	ctx.r24.u64 = ctx.r20.u64 & ctx.r9.u64;
	// lwzx r19,r28,r19
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r19.u32);
	// and r4,r23,r10
	ctx.r4.u64 = ctx.r23.u64 & ctx.r10.u64;
	// or r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 | ctx.r7.u64;
	// lwzx r28,r28,r18
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r18.u32);
	// or r4,r24,r4
	ctx.r4.u64 = ctx.r24.u64 | ctx.r4.u64;
	// lwzx r25,r27,r14
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r14.u32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// stw r3,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// and r4,r22,r9
	ctx.r4.u64 = ctx.r22.u64 & ctx.r9.u64;
	// and r3,r21,r10
	ctx.r3.u64 = ctx.r21.u64 & ctx.r10.u64;
	// and r26,r26,r9
	ctx.r26.u64 = ctx.r26.u64 & ctx.r9.u64;
	// and r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ctx.r10.u64;
	// add r8,r7,r31
	ctx.r8.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lwzx r5,r27,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// and r27,r19,r9
	ctx.r27.u64 = ctx.r19.u64 & ctx.r9.u64;
	// and r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 & ctx.r9.u64;
	// and r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 & ctx.r10.u64;
	// or r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 | ctx.r28.u64;
	// or r10,r26,r6
	ctx.r10.u64 = ctx.r26.u64 | ctx.r6.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// addi r27,r16,8
	ctx.r27.s64 = ctx.r16.s64 + 8;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r18,448(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r16,256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r17,124(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// b 0x832bd310
	goto loc_832BD310;
loc_832BCF38:
	// rlwinm r10,r23,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stbx r20,r10,r19
	PPC_STORE_U8(ctx.r10.u32 + ctx.r19.u32, ctx.r20.u8);
	// blt cr6,0x832bcf58
	if (ctx.cr6.lt) goto loc_832BCF58;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BCF58:
	// or r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 | ctx.r29.u64;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// clrlwi r8,r9,29
	ctx.r8.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x832bcfc4
	if (!ctx.cr6.eq) goto loc_832BCFC4;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// stfd f0,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f0.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfd f13,16(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f12,24(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// lfd f11,32(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// stfd f13,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f13.u64);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f10,40(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// stfd f12,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f12.u64);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfd f9,0(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// stfd f11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f11.u64);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfd f7,56(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// stfd f10,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f10.u64);
	// stfd f9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f9.u64);
	// stfdx f8,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.f8.u64);
	// stfdx f7,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + ctx.r31.u32, ctx.f7.u64);
	// b 0x832bd308
	goto loc_832BD308;
loc_832BCFC4:
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x832bd06c
	if (!ctx.cr6.eq) goto loc_832BD06C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r28,56(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r15,60(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stwx r28,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// stw r15,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r15.u32);
	// b 0x832bd308
	goto loc_832BD308;
loc_832BD06C:
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r5,11(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r3,13(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// lbz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// lbz r27,15(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// stb r28,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r28.u8);
	// stb r27,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r27.u8);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbz r6,26(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 26);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r5,27(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 27);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lbz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// lbz r3,29(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r28,31(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r26,17(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r25,18(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,19(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r23,20(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r22,21(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r21,22(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r20,23(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r19,24(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// stb r28,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r28.u8);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r18,7(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r17,32(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r16,33(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// lbz r15,34(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// lbz r14,35(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 35);
	// stb r27,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r27.u8);
	// stb r26,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r26.u8);
	// stb r25,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r25.u8);
	// stb r24,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r24.u8);
	// stb r23,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r23.u8);
	// stb r22,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r22.u8);
	// stb r21,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r21.u8);
	// stb r20,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r20.u8);
	// stbx r19,r9,r31
	PPC_STORE_U8(ctx.r9.u32 + ctx.r31.u32, ctx.r19.u8);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r6,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r6.u8);
	// lbz r27,36(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r26,37(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r25,38(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lbz r6,39(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 39);
	// stb r5,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r5.u8);
	// stb r4,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r4.u8);
	// stb r3,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r3.u8);
	// stb r8,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r8.u8);
	// stb r7,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r7.u8);
	// stb r28,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r28.u8);
	// stb r18,7(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7, ctx.r18.u8);
	// stb r17,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r17.u8);
	// stb r16,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r16.u8);
	// stb r15,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r15.u8);
	// stb r14,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r14.u8);
	// lbz r4,41(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// li r21,0
	ctx.r21.s64 = 0;
	// lbz r3,42(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 42);
	// li r20,1
	ctx.r20.s64 = 1;
	// lbz r24,46(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// stb r27,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r27.u8);
	// stb r26,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r26.u8);
	// stb r4,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r4.u8);
	// stb r3,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r3.u8);
	// lbz r4,55(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 55);
	// lbz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// stb r25,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r25.u8);
	// stb r24,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r24.u8);
	// lbz r23,47(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// lbz r27,57(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 57);
	// stb r3,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r3.u8);
	// stb r4,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r4.u8);
	// lbz r26,58(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 58);
	// lbz r25,59(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 59);
	// lbz r24,60(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 60);
	// stb r23,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r23.u8);
	// stb r27,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r27.u8);
	// lbz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r23,61(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 61);
	// stb r24,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r24.u8);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// stb r25,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r25.u8);
	// stb r6,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r6.u8);
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbz r8,43(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 43);
	// stb r23,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r23.u8);
	// lbz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// lbz r5,49(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// stb r8,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r8.u8);
	// lbz r28,45(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// stb r7,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r7.u8);
	// lbz r8,50(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 50);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// stb r5,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r5.u8);
	// lbz r7,51(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 51);
	// lbz r6,117(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r5,115(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// stb r28,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r28.u8);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r22,62(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 62);
	// lbz r19,63(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 63);
	// lbz r8,113(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// stb r6,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r6.u8);
	// stbx r5,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + ctx.r31.u32, ctx.r5.u8);
	// lbz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r15,53(r11)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// lbz r14,54(r11)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r11.u32 + 54);
	// lbz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r19,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r19.u8);
	// stb r22,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r22.u8);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r17,124(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r25,384(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r22,320(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r16,256(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r18,448(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r27,512(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lbz r8,119(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// stb r28,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r28.u8);
	// stb r15,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r15.u8);
	// stb r14,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r14.u8);
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// stb r6,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r6.u8);
	// stb r5,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r5.u8);
	// lbz r7,118(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r8,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r8.u8);
	// stb r7,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r7.u8);
	// stb r6,7(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7, ctx.r6.u8);
loc_832BD308:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
loc_832BD30C:
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
loc_832BD310:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lwz r9,1604(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r5,r10,-8
	ctx.r5.s64 = ctx.r10.s64 + -8;
	// add r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 + ctx.r9.u64;
loc_832BD328:
	// lwz r28,1596(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r5,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// bne cr6,0x832bb4ac
	if (!ctx.cr6.eq) goto loc_832BB4AC;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r24,r24,r11
	ctx.r24.u64 = ctx.r24.u64 + ctx.r11.u64;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// beq cr6,0x832bd37c
	if (ctx.cr6.eq) goto loc_832BD37C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x832bd374
	if (!ctx.cr6.eq) goto loc_832BD374;
	// rlwinm r11,r17,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bd37c
	if (ctx.cr6.eq) goto loc_832BD37C;
loc_832BD374:
	// add r19,r19,r28
	ctx.r19.u64 = ctx.r19.u64 + ctx.r28.u64;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
loc_832BD37C:
	// lwz r11,1548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// addi r17,r17,8
	ctx.r17.s64 = ctx.r17.s64 + 8;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// blt cr6,0x832bb3d4
	if (ctx.cr6.lt) goto loc_832BB3D4;
	// lwz r29,1524(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1524);
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r22,228(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// b 0x832bd3ac
	goto loc_832BD3AC;
loc_832BD3A8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_832BD3AC:
	// mullw r11,r25,r31
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r31.s32);
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r29,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFF80;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x832bd3d8
	if (!ctx.cr6.lt) goto loc_832BD3D8;
loc_832BD3C8:
	// dcbst r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x832bd3c8
	if (ctx.cr6.lt) goto loc_832BD3C8;
loc_832BD3D8:
	// lwz r11,1628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD3E8"))) PPC_WEAK_FUNC(sub_832BD3E8);
PPC_FUNC_IMPL(__imp__sub_832BD3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x832BD3F0;
	sub_82CA2BC0(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,20160
	ctx.r12.u64 = ctx.r12.u64 | 20160;
	// bl 0x82ca9e84
	ctx.lr = 0x832BD3FC;
	sub_82CA9E84(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r6,8(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r26,r1,192
	ctx.r26.s64 = ctx.r1.s64 + 192;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r29,16(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// add r22,r11,r9
	ctx.r22.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,20(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r6,28(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// add r21,r11,r7
	ctx.r21.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r7,32(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r21,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// cmplwi cr6,r3,45056
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 45056, ctx.xer);
	// ble cr6,0x832bd4e0
	if (!ctx.cr6.gt) goto loc_832BD4E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
loc_832BD4E0:
	// addi r22,r8,4
	ctx.r22.s64 = ctx.r8.s64 + 4;
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x832bd4fc
	if (!ctx.cr6.eq) goto loc_832BD4FC;
	// addi r27,r1,180
	ctx.r27.s64 = ctx.r1.s64 + 180;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
loc_832BD4FC:
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832bd540
	if (ctx.cr6.eq) goto loc_832BD540;
	// rlwinm r10,r28,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832bd540
	if (!ctx.cr6.eq) goto loc_832BD540;
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_832BD540:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,45460
	ctx.r11.u64 = ctx.r11.u64 | 45460;
	// lwzx r11,r1,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + ctx.r11.u32);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832bd5dc
	if (ctx.cr6.eq) goto loc_832BD5DC;
	// rlwinm r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832bd5cc
	if (ctx.cr6.eq) goto loc_832BD5CC;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r8,r20,4
	ctx.r8.s64 = ctx.r20.s64 + 4;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// bl 0x832bb018
	ctx.lr = 0x832BD5C8;
	sub_832BB018(ctx, base);
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_832BD5CC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r24,r11,r20
	ctx.r24.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x832bd78c
	if (ctx.cr6.lt) goto loc_832BD78C;
loc_832BD5DC:
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x832bd78c
	if (!ctx.cr6.lt) goto loc_832BD78C;
	// rlwinm r19,r28,0,16,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x832bd5f4
	if (!ctx.cr6.eq) goto loc_832BD5F4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_832BD5F4:
	// rlwinm r11,r28,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x200;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bd678
	if (!ctx.cr6.eq) goto loc_832BD678;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r18,r1,144
	ctx.r18.s64 = ctx.r1.s64 + 144;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x832bb018
	ctx.lr = 0x832BD664;
	sub_832BB018(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832bd678
	if (!ctx.cr6.lt) goto loc_832BD678;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_832BD678:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x832bd68c
	if (!ctx.cr6.eq) goto loc_832BD68C;
	// lwz r11,-4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_832BD68C:
	// rlwinm r11,r28,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832bd78c
	if (!ctx.cr6.eq) goto loc_832BD78C;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x832bd78c
	if (ctx.cr6.lt) goto loc_832BD78C;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x832bd78c
	if (!ctx.cr6.lt) goto loc_832BD78C;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// rlwinm r24,r21,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x832bb018
	ctx.lr = 0x832BD70C;
	sub_832BB018(ctx, base);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832bd728
	if (!ctx.cr6.lt) goto loc_832BD728;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_832BD728:
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x832bd78c
	if (ctx.cr6.lt) goto loc_832BD78C;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x832bd78c
	if (!ctx.cr6.lt) goto loc_832BD78C;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r3,52(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x832bb018
	ctx.lr = 0x832BD778;
	sub_832BB018(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832bd78c
	if (!ctx.cr6.lt) goto loc_832BD78C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_832BD78C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// subf r7,r26,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r26.s64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// divwu r3,r6,r8
	ctx.r3.u32 = ctx.r6.u32 / ctx.r8.u32;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_832BD7B0"))) PPC_WEAK_FUNC(sub_832BD7B0);
PPC_FUNC_IMPL(__imp__sub_832BD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x832BD7B8;
	sub_82CA2BDC(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x832bd800
	if (!ctx.cr6.gt) goto loc_832BD800;
	// srawi r29,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 2;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// ble cr6,0x832bd800
	if (!ctx.cr6.gt) goto loc_832BD800;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bd9b0
	ctx.lr = 0x832BD800;
	sub_832BD9B0(ctx, base);
loc_832BD800:
	// lwz r28,4(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x832bd82c
	if (!ctx.cr6.gt) goto loc_832BD82C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// ble cr6,0x832bd82c
	if (!ctx.cr6.gt) goto loc_832BD82C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x832bdba0
	ctx.lr = 0x832BD82C;
	sub_832BDBA0(ctx, base);
loc_832BD82C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0798
	ctx.lr = 0x832BD848;
	sub_832C0798(ctx, base);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x832bd92c
	if (!ctx.cr6.gt) goto loc_832BD92C;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bdc90
	ctx.lr = 0x832BD864;
	sub_832BDC90(ctx, base);
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// ble cr6,0x832bd948
	if (!ctx.cr6.gt) goto loc_832BD948;
	// addi r7,r31,-2
	ctx.r7.s64 = ctx.r31.s64 + -2;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-27852(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_832BD8B4:
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmsubs f2,f8,f6,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f4.f64));
	// fmadds f1,f8,f5,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsubs f12,f10,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f10,f1
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// bne 0x832bd8b4
	if (!ctx.cr0.eq) goto loc_832BD8B4;
	// b 0x832bd948
	goto loc_832BD948;
loc_832BD92C:
	// bne cr6,0x832bd948
	if (!ctx.cr6.eq) goto loc_832BD948;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = ctx.r26.s64 + 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x832bdc90
	ctx.lr = 0x832BD948;
	sub_832BDC90(ctx, base);
loc_832BD948:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// ble cr6,0x832bd998
	if (!ctx.cr6.gt) goto loc_832BD998;
	// addi r10,r31,-3
	ctx.r10.s64 = ctx.r31.s64 + -3;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_832BD974:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x832bd974
	if (!ctx.cr0.eq) goto loc_832BD974;
loc_832BD998:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_832BD9AC"))) PPC_WEAK_FUNC(sub_832BD9AC);
PPC_FUNC_IMPL(__imp__sub_832BD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD9B0"))) PPC_WEAK_FUNC(sub_832BD9B0);
PPC_FUNC_IMPL(__imp__sub_832BD9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x832BD9B8;
	sub_82CA2BE4(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca7500
	ctx.lr = 0x832BD9C0;
	sub_82CA7500(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r31,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 1;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// bl 0x82239e88
	ctx.lr = 0x832BD9F4;
	sub_82239E88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// stfs f28,4(r30)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// addi r27,r11,-17912
	ctx.r27.s64 = ctx.r11.s64 + -17912;
	// lfs f27,-9544(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -9544);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,-9940(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -9940);
	ctx.f30.f64 = double(temp.f32);
	// stfs f27,0(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// blt cr6,0x832bda48
	if (ctx.cr6.lt) goto loc_832BDA48;
	// lfs f0,-1320(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -1320);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x82239e88
	ctx.lr = 0x832BDA24;
	sub_82239E88(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,-9952(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -9952);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fdivs f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x82239e88
	ctx.lr = 0x832BDA3C;
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// stfs f10,12(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_832BDA48:
	// li r28,4
	ctx.r28.s64 = 4;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x832bdac8
	if (!ctx.cr6.gt) goto loc_832BDAC8;
	// lfs f29,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_832BDA5C:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f26,f12,f31
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82239e88
	ctx.lr = 0x832BDA7C;
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,-8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82239f68
	ctx.lr = 0x832BDA8C;
	sub_82239F68(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,-4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + -4, temp.u32);
	// fmuls f26,f26,f29
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f29.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82239e88
	ctx.lr = 0x832BDAA0;
	sub_82239E88(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82239f68
	ctx.lr = 0x832BDAB0;
	sub_82239F68(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x832bda5c
	if (ctx.cr6.lt) goto loc_832BDA5C;
loc_832BDAC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// ble cr6,0x832bdb90
	if (!ctx.cr6.gt) goto loc_832BDB90;
loc_832BDAD4:
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stfs f27,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f28,4(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// blt cr6,0x832bdb84
	if (ctx.cr6.lt) goto loc_832BDB84;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// addi r4,r8,3
	ctx.r4.s64 = ctx.r8.s64 + 3;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r30
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r30
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fdivs f11,f30,f13
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f13.f64));
	// stfsx f11,r3,r30
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r30.u32, temp.u32);
	// stfsx f12,r10,r30
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// ble cr6,0x832bdb84
	if (!ctx.cr6.gt) goto loc_832BDB84;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r7,r31,-5
	ctx.r7.s64 = ctx.r31.s64 + -5;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
loc_832BDB54:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x832bdb54
	if (!ctx.cr0.eq) goto loc_832BDB54;
loc_832BDB84:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bgt cr6,0x832bdad4
	if (ctx.cr6.gt) goto loc_832BDAD4;
loc_832BDB90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82ca754c
	ctx.lr = 0x832BDB9C;
	sub_82CA754C(ctx, base);
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832BDBA0"))) PPC_WEAK_FUNC(sub_832BDBA0);
PPC_FUNC_IMPL(__imp__sub_832BDBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832BDBA8;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// srawi r28,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f0,f12
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x82239e88
	ctx.lr = 0x832BDBEC;
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// lfs f31,-27852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfsx f10,r8,r29
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, temp.u32);
	// ble cr6,0x832bdc78
	if (!ctx.cr6.gt) goto loc_832BDC78;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_832BDC24:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f12,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82239e88
	ctx.lr = 0x832BDC44;
	sub_82239E88(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82239f68
	ctx.lr = 0x832BDC58;
	sub_82239F68(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// blt cr6,0x832bdc24
	if (ctx.cr6.lt) goto loc_832BDC24;
loc_832BDC78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832BDC8C"))) PPC_WEAK_FUNC(sub_832BDC8C);
PPC_FUNC_IMPL(__imp__sub_832BDC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDC90"))) PPC_WEAK_FUNC(sub_832BDC90);
PPC_FUNC_IMPL(__imp__sub_832BDC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be0
	ctx.lr = 0x832BDC98;
	sub_82CA2BE0(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca74f0
	ctx.lr = 0x832BDCA0;
	sub_82CA74F0(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// ble cr6,0x832bddb0
	if (!ctx.cr6.gt) goto loc_832BDDB0;
	// srawi r30,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 2;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x832be4f8
	ctx.lr = 0x832BDCD4;
	sub_832BE4F8(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ble cr6,0x832bdd5c
	if (!ctx.cr6.gt) goto loc_832BDD5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BDCEC;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832becc0
	ctx.lr = 0x832BDD04;
	sub_832BECC0(ctx, base);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BDD1C;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BDD3C;
	sub_832BEBE8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832bdfd8
	ctx.lr = 0x832BDD4C;
	sub_832BDFD8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDD58;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDD5C:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ble cr6,0x832bdd8c
	if (!ctx.cr6.gt) goto loc_832BDD8C;
	// bl 0x832bed90
	ctx.lr = 0x832BDD6C;
	sub_832BED90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832bdfd8
	ctx.lr = 0x832BDD7C;
	sub_832BDFD8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDD88;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDD8C:
	// bl 0x832bf9d0
	ctx.lr = 0x832BDD90;
	sub_832BF9D0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832bdfd8
	ctx.lr = 0x832BDDA0;
	sub_832BDFD8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDDAC;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDDB0:
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 8, ctx.xer);
	// ble cr6,0x832bdefc
	if (!ctx.cr6.gt) goto loc_832BDEFC;
	// cmpwi cr6,r27,32
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x832bdea4
	if (!ctx.cr6.eq) goto loc_832BDEA4;
	// addi r11,r28,-8
	ctx.r11.s64 = ctx.r28.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x832bfb18
	ctx.lr = 0x832BDDD4;
	sub_832BFB18(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f31,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f22.f64 = double(temp.f32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f29,24(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f28,28(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f27,40(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f26,44(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f25,56(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f24,60(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f7,84(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f23,88(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f22,92(r31)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f10,96(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f9,100(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f4,104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f3,108(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f5,116(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDEA0;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDEA4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832c0440
	ctx.lr = 0x832BDEAC;
	sub_832C0440(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDEF8;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDEFC:
	// bne cr6,0x832bdf90
	if (!ctx.cr6.eq) goto loc_832BDF90;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fadds f0,f4,f2
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fadds f6,f1,f5
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f10,f0,f7
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f8,f7,f0
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDF8C;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
loc_832BDF90:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x832bdfc8
	if (!ctx.cr6.eq) goto loc_832BDFC8;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_832BDFC8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82ca753c
	ctx.lr = 0x832BDFD4;
	sub_82CA753C(ctx, base);
	// b 0x82ca2c30
	// ERROR 82CA2C30
	return;
}

__attribute__((alias("__imp__sub_832BDFD8"))) PPC_WEAK_FUNC(sub_832BDFD8);
PPC_FUNC_IMPL(__imp__sub_832BDFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x832BDFE0;
	sub_82CA2BCC(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// ble cr6,0x832be040
	if (!ctx.cr6.gt) goto loc_832BE040;
loc_832BDFF8:
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x832be030
	if (!ctx.cr6.gt) goto loc_832BE030;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_832BE014:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x832be014
	if (!ctx.cr0.eq) goto loc_832BE014;
loc_832BE030:
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x832bdff8
	if (ctx.cr6.lt) goto loc_832BDFF8;
loc_832BE040:
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x832be1e4
	if (!ctx.cr6.eq) goto loc_832BE1E4;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x832be4f4
	if (!ctx.cr6.gt) goto loc_832BE4F4;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
loc_832BE064:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x832be18c
	if (!ctx.cr6.gt) goto loc_832BE18C;
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_832BE07C:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// add r8,r23,r10
	ctx.r8.u64 = ctx.r23.u64 + ctx.r10.u64;
	// add r31,r3,r9
	ctx.r31.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r29,r31,r11
	ctx.r29.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lfs f9,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r26,r8,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r25,r29,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r29,r28,r8
	ctx.r29.u64 = ctx.r28.u64 + ctx.r8.u64;
	// stfs f8,0(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// add r8,r26,r5
	ctx.r8.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// add r10,r25,r5
	ctx.r10.u64 = ctx.r25.u64 + ctx.r5.u64;
	// lfsx f6,r27,r5
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// lfsx f4,r26,r5
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r9,r29,r5
	ctx.r9.u64 = ctx.r29.u64 + ctx.r5.u64;
	// stfsx f4,r27,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r5.u32, temp.u32);
	// stfsx f6,r26,r5
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r5.u32, temp.u32);
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r25,r5
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r25,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r5.u32, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f1,r29,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne 0x832be07c
	if (!ctx.cr0.eq) goto loc_832BE07C;
loc_832BE18C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// add r10,r23,r10
	ctx.r10.u64 = ctx.r23.u64 + ctx.r10.u64;
	// addi r23,r23,2
	ctx.r23.s64 = ctx.r23.s64 + 2;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r21.s32, ctx.xer);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blt cr6,0x832be064
	if (ctx.cr6.lt) goto loc_832BE064;
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
loc_832BE1E4:
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// ble cr6,0x832be4f4
	if (!ctx.cr6.gt) goto loc_832BE4F4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
loc_832BE1F8:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// blt cr6,0x832be438
	if (ctx.cr6.lt) goto loc_832BE438;
	// addi r10,r24,-4
	ctx.r10.s64 = ctx.r24.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// addi r31,r8,1
	ctx.r31.s64 = ctx.r8.s64 + 1;
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_832BE21C:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r30,r9,6
	ctx.r30.s64 = ctx.r9.s64 + 6;
	// lwz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// add r29,r8,r9
	ctx.r29.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r27,r8,4
	ctx.r27.s64 = ctx.r8.s64 + 4;
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r29,r5
	ctx.r8.u64 = ctx.r29.u64 + ctx.r5.u64;
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfsx f10,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f8,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfsx f10,r29,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f8,r28,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, temp.u32);
	// stfs f7,4(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r29,r8,2
	ctx.r29.s64 = ctx.r8.s64 + 2;
	// add r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// addi r27,r8,4
	ctx.r27.s64 = ctx.r8.s64 + 4;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r26,r7,4
	ctx.r26.s64 = ctx.r7.s64 + 4;
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r29,r5
	ctx.r8.u64 = ctx.r29.u64 + ctx.r5.u64;
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f5,0(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f6,0(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f2,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f1,r29,r5
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f0,r28,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, temp.u32);
	// stfs f2,4(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r29,r8,-2
	ctx.r29.s64 = ctx.r8.s64 + -2;
	// add r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 + ctx.r3.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r26,r29,r11
	ctx.r26.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r27,r8,4
	ctx.r27.s64 = ctx.r8.s64 + 4;
	// addi r29,r7,4
	ctx.r29.s64 = ctx.r7.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stfs f9,0(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// add r8,r26,r5
	ctx.r8.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r28,r5
	ctx.r7.u64 = ctx.r28.u64 + ctx.r5.u64;
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfsx f8,r28,r5
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r26,r5
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r5.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfsx f8,r26,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r5.u32, temp.u32);
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f7,r28,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, temp.u32);
	// stfs f6,4(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r29,r8,r3
	ctx.r29.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// addi r28,r7,4
	ctx.r28.s64 = ctx.r7.s64 + 4;
	// addi r27,r8,4
	ctx.r27.s64 = ctx.r8.s64 + 4;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// add r8,r30,r5
	ctx.r8.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stfs f4,0(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r29,r5
	ctx.r7.u64 = ctx.r29.u64 + ctx.r5.u64;
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfsx f13,r29,r5
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r30,r5
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f13,r30,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f11,r29,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// bne 0x832be21c
	if (!ctx.cr0.eq) goto loc_832BE21C;
loc_832BE438:
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x832be4e0
	if (!ctx.cr6.lt) goto loc_832BE4E0;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r25,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r8,r25,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r25.s64;
loc_832BE450:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r29,r9,r31
	ctx.r29.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r28,r5
	ctx.r10.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r9,4
	ctx.r28.s64 = ctx.r9.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r10,r27,r5
	ctx.r10.u64 = ctx.r27.u64 + ctx.r5.u64;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r9,r30,r5
	ctx.r9.u64 = ctx.r30.u64 + ctx.r5.u64;
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r30,r5
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r27,r5
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f9,r27,r5
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r5.u32, temp.u32);
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f8,r30,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// bne 0x832be450
	if (!ctx.cr0.eq) goto loc_832BE450;
loc_832BE4E0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmpw cr6,r24,r21
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r21.s32, ctx.xer);
	// blt cr6,0x832be1f8
	if (ctx.cr6.lt) goto loc_832BE1F8;
loc_832BE4F4:
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_832BE4F8"))) PPC_WEAK_FUNC(sub_832BE4F8);
PPC_FUNC_IMPL(__imp__sub_832BE4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x832BE500;
	sub_82CA2BD8(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca74d0
	ctx.lr = 0x832BE508;
	sub_82CA74D0(ctx, base);
	// srawi r30,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 3;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r7,-27468
	ctx.r6.s64 = ctx.r7.s64 + -27468;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fsubs f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r27,r30,-2
	ctx.r27.s64 = ctx.r30.s64 + -2;
	// lfs f8,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f11
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f2,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fadds f0,f2,f4
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f12,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f13,-27468(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27468);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r5,8
	ctx.r29.s64 = ctx.r5.s64 + 8;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// fadds f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f6,f10,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fadds f4,f0,f9
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f4,4(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f3,4(r8)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fsubs f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fadds f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fsubs f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f9,-228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -228, temp.u32);
	// stfs f0,-224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// ble cr6,0x832be950
	if (!ctx.cr6.gt) goto loc_832BE950;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r27,-3
	ctx.r26.s64 = ctx.r27.s64 + -3;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r4
	ctx.r7.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r26,r26,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r9,r28,r4
	ctx.r9.u64 = ctx.r28.u64 + ctx.r4.u64;
	// addi r5,r7,16
	ctx.r5.s64 = ctx.r7.s64 + 16;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// add r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
loc_832BE650:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// lfs f6,-8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f30,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f3,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f27,f30,f6
	ctx.f27.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// lfs f7,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// lfs f0,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// lfs f4,-8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f30,f6
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// lfs f28,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f29,f1,f7
	ctx.f29.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsubs f26,f28,f4
	ctx.f26.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// lfs f23,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f23.f64 = double(temp.f32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f20,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f20.f64 = double(temp.f32);
	// fadds f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f28.f64));
	// lfs f18,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f22,f3,f23
	ctx.f22.f64 = double(float(ctx.f3.f64 - ctx.f23.f64));
	// lfs f25,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fadds f3,f23,f3
	ctx.f3.f64 = double(float(ctx.f23.f64 + ctx.f3.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f15,f18,f20
	ctx.f15.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// lfs f13,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f21,f7,f25
	ctx.f21.f64 = double(float(ctx.f7.f64 - ctx.f25.f64));
	// lfs f19,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// fadds f7,f7,f25
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f25.f64));
	// lfs f30,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fadds f24,f12,f13
	ctx.f24.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f23,f19,f30
	ctx.f23.f64 = double(float(ctx.f19.f64 + ctx.f30.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// lfs f16,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f16.f64 = double(temp.f32);
	// fadds f28,f27,f2
	ctx.f28.f64 = double(float(ctx.f27.f64 + ctx.f2.f64));
	// stfs f13,-232(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -232, temp.u32);
	// fsubs f17,f26,f29
	ctx.f17.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// stfs f0,-236(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -236, temp.u32);
	// fsubs f30,f30,f19
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f19.f64));
	// stfs f12,-240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -240, temp.u32);
	// fsubs f20,f18,f20
	ctx.f20.f64 = double(float(ctx.f18.f64 - ctx.f20.f64));
	// fadds f14,f1,f5
	ctx.f14.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f14,-4(r10)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fadds f14,f6,f4
	ctx.f14.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f14,-8(r10)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// fadds f14,f15,f3
	ctx.f14.f64 = double(float(ctx.f15.f64 + ctx.f3.f64));
	// stfs f14,0(r10)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f25,f24,f10
	ctx.f25.f64 = double(float(ctx.f24.f64 * ctx.f10.f64));
	// fadds f14,f7,f23
	ctx.f14.f64 = double(float(ctx.f7.f64 + ctx.f23.f64));
	// stfs f14,4(r10)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f3,f3,f15
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f15.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f24,f31,f28
	ctx.f24.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// fsubs f11,f11,f16
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f16.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fmuls f19,f31,f17
	ctx.f19.f64 = double(float(ctx.f31.f64 * ctx.f17.f64));
	// fsubs f18,f22,f21
	ctx.f18.f64 = double(float(ctx.f22.f64 - ctx.f21.f64));
	// fadds f3,f20,f30
	ctx.f3.f64 = double(float(ctx.f20.f64 + ctx.f30.f64));
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f5,-4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// fsubs f1,f23,f7
	ctx.f1.f64 = double(float(ctx.f23.f64 - ctx.f7.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f4,-8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// fmsubs f7,f25,f17,f24
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f17.f64 - ctx.f24.f64));
	// stfs f7,-8(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + -8, temp.u32);
	// fmuls f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmadds f6,f25,f28,f19
	ctx.f6.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f19.f64));
	// stfs f6,-4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// fneg f11,f16
	ctx.f11.u64 = ctx.f16.u64 ^ 0x8000000000000000;
	// fmuls f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// fadds f9,f29,f26
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f26.f64));
	// fadds f8,f21,f22
	ctx.f8.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// fmuls f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmadds f1,f13,f3,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f1.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fsubs f6,f2,f27
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fsubs f2,f30,f20
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f20.f64));
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmsubs f7,f13,f18,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f18.f64 - ctx.f7.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// fmadds f3,f4,f6,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f3,-8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + -8, temp.u32);
	// fmsubs f1,f5,f6,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f1.f64));
	// stfs f1,-4(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// fmadds f9,f11,f2,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmsubs f8,f12,f2,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 - ctx.f8.f64));
	// stfs f8,4(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// lfs f3,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f22,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f21,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f21.f64 = double(temp.f32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f29,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f27,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// lfs f30,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f23,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f18,f2,f7
	ctx.f18.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fsubs f17,f1,f6
	ctx.f17.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fsubs f19,f9,f3
	ctx.f19.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fsubs f20,f21,f22
	ctx.f20.f64 = double(float(ctx.f21.f64 - ctx.f22.f64));
	// fadds f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fadds f9,f29,f27
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// fadds f2,f8,f24
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f24.f64));
	// fadds f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fadds f22,f21,f22
	ctx.f22.f64 = double(float(ctx.f21.f64 + ctx.f22.f64));
	// fadds f6,f23,f30
	ctx.f6.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// fadds f16,f28,f26
	ctx.f16.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// fsubs f29,f27,f29
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fsubs f8,f24,f8
	ctx.f8.f64 = double(float(ctx.f24.f64 - ctx.f8.f64));
	// fsubs f28,f26,f28
	ctx.f28.f64 = double(float(ctx.f26.f64 - ctx.f28.f64));
	// fsubs f30,f23,f30
	ctx.f30.f64 = double(float(ctx.f23.f64 - ctx.f30.f64));
	// fsubs f21,f20,f19
	ctx.f21.f64 = double(float(ctx.f20.f64 - ctx.f19.f64));
	// fadds f15,f17,f18
	ctx.f15.f64 = double(float(ctx.f17.f64 + ctx.f18.f64));
	// fadds f27,f3,f7
	ctx.f27.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f27,12(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// fadds f27,f9,f2
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f27,0(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fadds f27,f1,f22
	ctx.f27.f64 = double(float(ctx.f1.f64 + ctx.f22.f64));
	// stfs f27,8(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f3,f2,f9
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f27,f16,f6
	ctx.f27.f64 = double(float(ctx.f16.f64 + ctx.f6.f64));
	// stfs f27,4(r8)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fsubs f2,f6,f16
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f16.f64));
	// stfs f7,12(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f1,f22,f1
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f1.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fadds f7,f29,f30
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f6,f8,f28
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f28.f64));
	// fadds f2,f28,f8
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f8.f64));
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// fmuls f1,f25,f21
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f21.f64));
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// fmuls f9,f25,f15
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f15.f64));
	// fadds f3,f19,f20
	ctx.f3.f64 = double(float(ctx.f19.f64 + ctx.f20.f64));
	// fsubs f8,f18,f17
	ctx.f8.f64 = double(float(ctx.f18.f64 - ctx.f17.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fmadds f1,f31,f15,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f15.f64 + ctx.f1.f64));
	// stfs f1,12(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// fmsubs f9,f31,f21,f9
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f21.f64 - ctx.f9.f64));
	// stfs f9,8(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fmuls f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmuls f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f3,f5,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f31,f11,f2
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fmuls f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmsubs f1,f0,f6,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 - ctx.f1.f64));
	// stfs f1,0(r7)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f0,f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmadds f13,f5,f8,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fmsubs f9,f4,f8,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f9,12(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmadds f8,f12,f30,f31
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmsubs f7,f11,f30,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 - ctx.f2.f64));
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// lfs f13,-236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// lfs f9,-228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,-16
	ctx.r6.s64 = ctx.r6.s64 + -16;
	// bne 0x832be650
	if (!ctx.cr0.eq) goto loc_832BE650;
	// lfs f0,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f0.f64 = double(temp.f32);
loc_832BE950:
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r31,r7,-2
	ctx.r31.s64 = ctx.r7.s64 + -2;
	// addi r3,r5,-2
	ctx.r3.s64 = ctx.r5.s64 + -2;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// fmuls f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// addi r28,r6,-2
	ctx.r28.s64 = ctx.r6.s64 + -2;
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// add r8,r26,r4
	ctx.r8.u64 = ctx.r26.u64 + ctx.r4.u64;
	// fmuls f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r29,r27,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f11,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfsx f9,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfsx f7,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfsx f3,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f7,f9
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfsx f31,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f31.f64 = double(temp.f32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f11,f3,f31
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// addi r27,r5,2
	ctx.r27.s64 = ctx.r5.s64 + 2;
	// fadds f7,f3,f31
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// addi r25,r7,2
	ctx.r25.s64 = ctx.r7.s64 + 2;
	// fadds f3,f13,f10
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fadds f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfsx f11,r29,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// fsubs f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f6,-4(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// fsubs f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfsx f12,r31,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// fmuls f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmsubs f12,f1,f10,f11
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 - ctx.f11.f64));
	// stfsx f12,r28,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r4.u32, temp.u32);
	// fmadds f11,f1,f3,f9
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f9.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f10,f2,f13,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfsx f10,r3,r4
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// fmsubs f9,f4,f13,f6
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f9,-4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f3,r26,r4
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f31,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// addi r31,r5,3
	ctx.r31.s64 = ctx.r5.s64 + 3;
	// fadds f30,f8,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// addi r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 3;
	// fadds f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// addi r24,r6,2
	ctx.r24.s64 = ctx.r6.s64 + 2;
	// fadds f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f3,f0
	ctx.f3.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r6,3
	ctx.r28.s64 = ctx.r6.s64 + 3;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// fsubs f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f13,f6,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f9,4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfsx f11,r26,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r4.u32, temp.u32);
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fadds f13,f12,f7
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f6,f30,f10
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f9,f13,f3
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfsx f13,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f7,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f9,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f0,r5,r4
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f0,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfsx f3,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f0,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfsx f7,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fsubs f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f31,f3,f7
	ctx.f31.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fadds f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f29,f31,f10
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fadds f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fadds f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfsx f9,r11,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// fsubs f9,f7,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f8,f3,f6
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fmuls f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f12,f1,f29
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// fmuls f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmuls f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fadds f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f3.f64));
	// stfsx f1,r3,r4
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// stfsx f9,r5,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, temp.u32);
	// stfsx f8,r29,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r4.u32, temp.u32);
	// fmsubs f7,f5,f29,f13
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 - ctx.f13.f64));
	// stfsx f7,r8,r4
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// fmadds f6,f5,f30,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfsx f6,r6,r4
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// fmadds f5,f4,f0,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfsx f5,r7,r4
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// fmsubs f4,f2,f0,f10
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f10.f64));
	// stfsx f4,r31,r4
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca751c
	ctx.lr = 0x832BEBE4;
	sub_82CA751C(ctx, base);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_832BEBE8"))) PPC_WEAK_FUNC(sub_832BEBE8);
PPC_FUNC_IMPL(__imp__sub_832BEBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x832BEBF0;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// srawi r31,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r27.s32 >> 2;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEC1C;
	sub_832BF218(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// ble cr6,0x832beca4
	if (!ctx.cr6.gt) goto loc_832BECA4;
loc_832BEC24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BEC38;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832becc0
	ctx.lr = 0x832BEC50;
	sub_832BECC0(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BEC68;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEC9C;
	sub_832BF218(ctx, base);
	// cmpwi cr6,r27,512
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 512, ctx.xer);
	// bgt cr6,0x832bec24
	if (ctx.cr6.gt) goto loc_832BEC24;
loc_832BECA4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832bed90
	ctx.lr = 0x832BECB8;
	sub_832BED90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832BECC0"))) PPC_WEAK_FUNC(sub_832BECC0);
PPC_FUNC_IMPL(__imp__sub_832BECC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be4
	ctx.lr = 0x832BECC8;
	sub_82CA2BE4(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r29.s32 >> 2;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BECF0;
	sub_832BF5A0(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// ble cr6,0x832bed74
	if (!ctx.cr6.gt) goto loc_832BED74;
loc_832BECF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BED0C;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832becc0
	ctx.lr = 0x832BED24;
	sub_832BECC0(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bebe8
	ctx.lr = 0x832BED3C;
	sub_832BEBE8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r9,r29,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r29.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// bl 0x832bf5a0
	ctx.lr = 0x832BED6C;
	sub_832BF5A0(ctx, base);
	// cmpwi cr6,r29,512
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 512, ctx.xer);
	// bgt cr6,0x832becf8
	if (ctx.cr6.gt) goto loc_832BECF8;
loc_832BED74:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832befc0
	ctx.lr = 0x832BED88;
	sub_832BEFC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82ca2c34
	// ERROR 82CA2C34
	return;
}

__attribute__((alias("__imp__sub_832BED90"))) PPC_WEAK_FUNC(sub_832BED90);
PPC_FUNC_IMPL(__imp__sub_832BED90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x832BED98;
	sub_82CA2BC0(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// srawi r31,r18,2
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r18.s32 >> 2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// ble cr6,0x832bee9c
	if (!ctx.cr6.gt) goto loc_832BEE9C;
loc_832BEDB8:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x832bee6c
	if (!ctx.cr6.lt) goto loc_832BEE6C;
loc_832BEDC4:
	// subf r30,r31,r23
	ctx.r30.s64 = ctx.r23.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x832bee60
	if (!ctx.cr6.lt) goto loc_832BEE60;
	// rlwinm r11,r23,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r10,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r10.s64;
	// subf r5,r31,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r30,r23
	ctx.r3.u64 = ctx.r30.u64 + ctx.r23.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r7,r24
	ctx.r20.u64 = ctx.r7.u64 + ctx.r24.u64;
	// add r22,r8,r24
	ctx.r22.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r19,r23,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r23,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r9,r21
	ctx.r29.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r27,r10,r21
	ctx.r27.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_832BEE18:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEE28;
	sub_832BF218(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BEE38;
	sub_832BF5A0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEE48;
	sub_832BF218(ctx, base);
	// add r30,r19,r30
	ctx.r30.u64 = ctx.r19.u64 + ctx.r30.u64;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x832bee18
	if (ctx.cr6.lt) goto loc_832BEE18;
loc_832BEE60:
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r23,r18
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x832bedc4
	if (ctx.cr6.lt) goto loc_832BEDC4;
loc_832BEE6C:
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// subf r10,r31,r18
	ctx.r10.s64 = ctx.r18.s64 - ctx.r31.s64;
	// subf r9,r11,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r21
	ctx.r4.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEE90;
	sub_832BF218(ctx, base);
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bgt cr6,0x832bedb8
	if (ctx.cr6.gt) goto loc_832BEDB8;
loc_832BEE9C:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r18
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x832bef80
	if (!ctx.cr6.lt) goto loc_832BEF80;
loc_832BEEA8:
	// subf r30,r31,r22
	ctx.r30.s64 = ctx.r22.s64 - ctx.r31.s64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// bge cr6,0x832bef74
	if (!ctx.cr6.lt) goto loc_832BEF74;
	// rlwinm r11,r22,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r10,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r10.s64;
	// subf r5,r31,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r30,r22
	ctx.r3.u64 = ctx.r30.u64 + ctx.r22.u64;
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r7,r24
	ctx.r20.u64 = ctx.r7.u64 + ctx.r24.u64;
	// add r23,r8,r24
	ctx.r23.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r19,r22,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r22,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r9,r21
	ctx.r29.u64 = ctx.r9.u64 + ctx.r21.u64;
	// add r27,r10,r21
	ctx.r27.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_832BEEFC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEF0C;
	sub_832BF218(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf9d0
	ctx.lr = 0x832BEF1C;
	sub_832BF9D0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BEF2C;
	sub_832BF5A0(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bfa70
	ctx.lr = 0x832BEF3C;
	sub_832BFA70(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEF4C;
	sub_832BF218(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf9d0
	ctx.lr = 0x832BEF5C;
	sub_832BF9D0(ctx, base);
	// add r30,r19,r30
	ctx.r30.u64 = ctx.r19.u64 + ctx.r30.u64;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x832beefc
	if (ctx.cr6.lt) goto loc_832BEEFC;
loc_832BEF74:
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r22,r18
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x832beea8
	if (ctx.cr6.lt) goto loc_832BEEA8;
loc_832BEF80:
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// subf r10,r31,r18
	ctx.r10.s64 = ctx.r18.s64 - ctx.r31.s64;
	// subf r9,r11,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r21
	ctx.r4.u64 = ctx.r10.u64 + ctx.r21.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BEFA4;
	sub_832BF218(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf9d0
	ctx.lr = 0x832BEFB4;
	sub_832BF9D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_832BEFBC"))) PPC_WEAK_FUNC(sub_832BEFBC);
PPC_FUNC_IMPL(__imp__sub_832BEFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BEFC0"))) PPC_WEAK_FUNC(sub_832BEFC0);
PPC_FUNC_IMPL(__imp__sub_832BEFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc8
	ctx.lr = 0x832BEFC8;
	sub_82CA2BC8(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r30,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 2;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// ble cr6,0x832bf0dc
	if (!ctx.cr6.gt) goto loc_832BF0DC;
loc_832BEFE8:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf0d0
	if (!ctx.cr6.lt) goto loc_832BF0D0;
loc_832BEFF4:
	// subf r29,r31,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r31.s64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf060
	if (!ctx.cr6.lt) goto loc_832BF060;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r7,r11,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r11.s64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r9,r22
	ctx.r26.u64 = ctx.r9.u64 + ctx.r22.u64;
	// rlwinm r21,r24,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r24,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r20
	ctx.r28.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_832BF02C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BF03C;
	sub_832BF218(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BF04C;
	sub_832BF218(ctx, base);
	// add r29,r21,r29
	ctx.r29.u64 = ctx.r21.u64 + ctx.r29.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832bf02c
	if (ctx.cr6.lt) goto loc_832BF02C;
loc_832BF060:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf0c4
	if (!ctx.cr6.lt) goto loc_832BF0C4;
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r22
	ctx.r5.u64 = ctx.r9.u64 + ctx.r22.u64;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r24,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r20
	ctx.r28.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_832BF098:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BF0A4;
	sub_832BF5A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BF0B0;
	sub_832BF5A0(ctx, base);
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r27,r26,r27
	ctx.r27.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832bf098
	if (ctx.cr6.lt) goto loc_832BF098;
loc_832BF0C4:
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r24,r30
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832beff4
	if (ctx.cr6.lt) goto loc_832BEFF4;
loc_832BF0D0:
	// srawi r31,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r31,128
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 128, ctx.xer);
	// bgt cr6,0x832befe8
	if (ctx.cr6.gt) goto loc_832BEFE8;
loc_832BF0DC:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf20c
	if (!ctx.cr6.lt) goto loc_832BF20C;
loc_832BF0E8:
	// subf r29,r31,r24
	ctx.r29.s64 = ctx.r24.s64 - ctx.r31.s64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf174
	if (!ctx.cr6.lt) goto loc_832BF174;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r7,r11,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r11.s64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r9,r22
	ctx.r26.u64 = ctx.r9.u64 + ctx.r22.u64;
	// rlwinm r21,r24,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r24,3,0,28
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r20
	ctx.r28.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_832BF120:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BF130;
	sub_832BF218(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf9d0
	ctx.lr = 0x832BF140;
	sub_832BF9D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf218
	ctx.lr = 0x832BF150;
	sub_832BF218(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf9d0
	ctx.lr = 0x832BF160;
	sub_832BF9D0(ctx, base);
	// add r29,r21,r29
	ctx.r29.u64 = ctx.r21.u64 + ctx.r29.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832bf120
	if (ctx.cr6.lt) goto loc_832BF120;
loc_832BF174:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x832bf200
	if (!ctx.cr6.lt) goto loc_832BF200;
	// subf r11,r31,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r31.s64;
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r9,r22
	ctx.r26.u64 = ctx.r9.u64 + ctx.r22.u64;
	// rlwinm r21,r24,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r24,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r28,r10,r20
	ctx.r28.u64 = ctx.r10.u64 + ctx.r20.u64;
	// add r27,r11,r20
	ctx.r27.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_832BF1AC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BF1BC;
	sub_832BF5A0(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bfa70
	ctx.lr = 0x832BF1CC;
	sub_832BFA70(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf5a0
	ctx.lr = 0x832BF1DC;
	sub_832BF5A0(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bfa70
	ctx.lr = 0x832BF1EC;
	sub_832BFA70(ctx, base);
	// add r29,r21,r29
	ctx.r29.u64 = ctx.r21.u64 + ctx.r29.u64;
	// add r28,r28,r25
	ctx.r28.u64 = ctx.r28.u64 + ctx.r25.u64;
	// add r27,r27,r25
	ctx.r27.u64 = ctx.r27.u64 + ctx.r25.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832bf1ac
	if (ctx.cr6.lt) goto loc_832BF1AC;
loc_832BF200:
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r24,r30
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x832bf0e8
	if (ctx.cr6.lt) goto loc_832BF0E8;
loc_832BF20C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82ca2c18
	// ERROR 82CA2C18
	return;
}

__attribute__((alias("__imp__sub_832BF214"))) PPC_WEAK_FUNC(sub_832BF214);
PPC_FUNC_IMPL(__imp__sub_832BF214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF218"))) PPC_WEAK_FUNC(sub_832BF218);
PPC_FUNC_IMPL(__imp__sub_832BF218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2be8
	ctx.lr = 0x832BF220;
	sub_82CA2BE8(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// srawi r29,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r3.s32 >> 3;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f0,f11
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f1,f13,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f13,f4,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f10,f2,f5
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f9,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// stfsx f11,r7,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fsubs f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fadds f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x832bf4c0
	if (!ctx.cr6.gt) goto loc_832BF4C0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r29,-3
	ctx.r6.s64 = ctx.r29.s64 + -3;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r28,r6,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r6,r5,8
	ctx.r6.s64 = ctx.r5.s64 + 8;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_832BF340:
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f7,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fadds f5,f1,f3
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lfs f1,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f11,f4,f8
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsubs f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fadds f11,f2,f10
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fsubs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f6,f13,f5
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f4,f9,f12
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f3,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmsubs f2,f1,f2,f8
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f8.f64));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f13,f1,f11,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmsubs f11,f3,f10,f4
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f12,f9,f10,f5
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f5.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lfs f6,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f31,f8,f10
	ctx.f31.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f8,f6,f4
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fsubs f30,f2,f5
	ctx.f30.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsubs f29,f4,f6
	ctx.f29.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f13,f8,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f2,f30,f29
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fsubs f13,f31,f11
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fadds f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f6,f1,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f5,f1,f2
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fadds f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// fmsubs f2,f7,f2,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 - ctx.f6.f64));
	// stfs f2,0(r8)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// fmuls f10,f3,f1
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// fmadds f12,f7,f4,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f12,4(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// fmadds f8,f3,f13,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmsubs f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f10.f64));
	// stfs f7,4(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// bne 0x832bf340
	if (!ctx.cr0.eq) goto loc_832BF340;
loc_832BF4C0:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfsx f11,r6,r4
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r10,r6,r4
	ctx.r10.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f7,f5
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f1,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f7,f5
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fsubs f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fsubs f3,f2,f6
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// fadds f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fsubs f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fadds f11,f9,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfsx f11,r7,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// fadds f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfsx f9,r6,r4
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// fsubs f7,f2,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fadds f6,f5,f2
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fsubs f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fadds f5,f3,f1
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82ca2c38
	// ERROR 82CA2C38
	return;
}

__attribute__((alias("__imp__sub_832BF5A0"))) PPC_WEAK_FUNC(sub_832BF5A0);
PPC_FUNC_IMPL(__imp__sub_832BF5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bd8
	ctx.lr = 0x832BF5A8;
	sub_82CA2BD8(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca74f8
	ctx.lr = 0x832BF5B0;
	sub_82CA74F8(ctx, base);
	// srawi r27,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r27.s64 = ctx.r3.s32 >> 3;
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r27,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r24,r4
	ctx.r7.u64 = ctx.r24.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfsx f11,r24,r4
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// lfs f3,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fadds f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fsubs f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fsubs f6,f2,f4
	ctx.f6.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fadds f5,f4,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f13,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fadds f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fsubs f8,f1,f4
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfsx f8,r24,r4
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r4.u32, temp.u32);
	// fsubs f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// stfs f7,4(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// stfs f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f5,0(r9)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f3,f9,f2
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// ble cr6,0x832bf8cc
	if (!ctx.cr6.gt) goto loc_832BF8CC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r8,2
	ctx.r30.s64 = ctx.r8.s64 + 2;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r27,-3
	ctx.r3.s64 = ctx.r27.s64 + -3;
	// add r26,r7,r4
	ctx.r26.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r9,r4
	ctx.r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm r25,r3,31,1,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r31,r8,8
	ctx.r31.s64 = ctx.r8.s64 + 8;
	// addi r7,r8,-8
	ctx.r7.s64 = ctx.r8.s64 + -8;
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
	// addi r8,r26,-8
	ctx.r8.s64 = ctx.r26.s64 + -8;
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// addi r6,r5,8
	ctx.r6.s64 = ctx.r5.s64 + 8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r26,r25,1
	ctx.r26.s64 = ctx.r25.s64 + 1;
loc_832BF6F4:
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f6,f2
	ctx.f6.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f2,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,-8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f31,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f26,f12,f3
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// lfs f30,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f31,f7
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// lfs f28,-8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f24,f8,f11
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f25,f12,f1
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f27,f2,f5
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f1,f30,f1,f26
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f26.f64));
	// fmadds f5,f28,f5,f13
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f13,f6,f10,f29
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f29.f64));
	// fmsubs f29,f0,f4,f24
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 - ctx.f24.f64));
	// fmsubs f3,f30,f3,f25
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f3.f64 - ctx.f25.f64));
	// fmsubs f9,f28,f9,f27
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 - ctx.f27.f64));
	// fmsubs f10,f31,f10,f7
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmadds f7,f8,f4,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fadds f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,4(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fsubs f5,f5,f1
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fadds f11,f3,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fsubs f4,f9,f3
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fadds f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f1,f29,f10
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f10.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsubs f11,f10,f29
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fsubs f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fmuls f27,f30,f11
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmuls f5,f30,f29
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fsubs f4,f3,f4
	ctx.f4.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// fmuls f30,f28,f1
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmsubs f29,f12,f29,f27
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 - ctx.f27.f64));
	// fmuls f28,f28,f13
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f27,f6,f7
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmadds f5,f12,f11,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f13,f2,f13,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f11,f0,f9,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmsubs f12,f2,f1,f28
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f28.f64));
	// fmsubs f10,f8,f9,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 - ctx.f10.f64));
	// fmsubs f8,f6,f4,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 - ctx.f7.f64));
	// fmadds f9,f31,f4,f27
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 + ctx.f27.f64));
	// fadds f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f7,4(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fadds f6,f12,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fsubs f4,f29,f12
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// fadds f2,f8,f10
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f2,4(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fadds f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f3,0(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfs f1,4(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fsubs f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// bne 0x832bf6f4
	if (!ctx.cr0.eq) goto loc_832BF6F4;
loc_832BF8CC:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfsx f0,r24,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r24,r5
	ctx.r7.u64 = ctx.r24.u64 + ctx.r5.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f11,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fadds f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// lfs f1,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fsubs f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fmuls f4,f1,f7
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f30,f0,f9
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmuls f31,f0,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f29,f1,f8
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f28,f1,f6
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmsubs f5,f0,f5,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 - ctx.f4.f64));
	// fmadds f4,f0,f7,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmadds f2,f1,f2,f12
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmsubs f13,f1,f3,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 - ctx.f11.f64));
	// fmsubs f11,f1,f10,f30
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 - ctx.f30.f64));
	// fmadds f12,f1,f9,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fmadds f10,f0,f6,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f29.f64));
	// fmsubs f9,f0,f8,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 - ctx.f28.f64));
	// fadds f8,f2,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fadds f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f6,f5,f13
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f5,f4,f2
	ctx.f5.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fsubs f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fadds f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fadds f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f1,4(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82ca7544
	ctx.lr = 0x832BF9CC;
	sub_82CA7544(ctx, base);
	// b 0x82ca2c28
	// ERROR 82CA2C28
	return;
}

__attribute__((alias("__imp__sub_832BF9D0"))) PPC_WEAK_FUNC(sub_832BF9D0);
PPC_FUNC_IMPL(__imp__sub_832BF9D0) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bne cr6,0x832bfa38
	if (!ctx.cr6.eq) goto loc_832BFA38;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x832bfb18
	ctx.lr = 0x832BFA00;
	sub_832BFB18(ctx, base);
	// addi r8,r5,-32
	ctx.r8.s64 = ctx.r5.s64 + -32;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x832bff28
	ctx.lr = 0x832BFA14;
	sub_832BFF28(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// bl 0x832bfb18
	ctx.lr = 0x832BFA20;
	sub_832BFB18(ctx, base);
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
	// bl 0x832bfb18
	ctx.lr = 0x832BFA28;
	sub_832BFB18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832BFA38:
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x832c0440
	ctx.lr = 0x832BFA48;
	sub_832C0440(ctx, base);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x832c05c8
	ctx.lr = 0x832BFA50;
	sub_832C05C8(ctx, base);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x832c0440
	ctx.lr = 0x832BFA58;
	sub_832C0440(ctx, base);
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x832c0440
	ctx.lr = 0x832BFA60;
	sub_832C0440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BFA70"))) PPC_WEAK_FUNC(sub_832BFA70);
PPC_FUNC_IMPL(__imp__sub_832BFA70) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,128
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 128, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bne cr6,0x832bfae0
	if (!ctx.cr6.eq) goto loc_832BFAE0;
	// addi r11,r5,-8
	ctx.r11.s64 = ctx.r5.s64 + -8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x832bfb18
	ctx.lr = 0x832BFAA0;
	sub_832BFB18(ctx, base);
	// addi r8,r5,-32
	ctx.r8.s64 = ctx.r5.s64 + -32;
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x832bff28
	ctx.lr = 0x832BFAB8;
	sub_832BFF28(ctx, base);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r10,256
	ctx.r3.s64 = ctx.r10.s64 + 256;
	// bl 0x832bfb18
	ctx.lr = 0x832BFAC4;
	sub_832BFB18(ctx, base);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r10,384
	ctx.r3.s64 = ctx.r10.s64 + 384;
	// bl 0x832bff28
	ctx.lr = 0x832BFAD0;
	sub_832BFF28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832BFAE0:
	// addi r11,r5,-16
	ctx.r11.s64 = ctx.r5.s64 + -16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// bl 0x832c0440
	ctx.lr = 0x832BFAF0;
	sub_832C0440(ctx, base);
	// addi r3,r10,64
	ctx.r3.s64 = ctx.r10.s64 + 64;
	// bl 0x832c05c8
	ctx.lr = 0x832BFAF8;
	sub_832C05C8(ctx, base);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// bl 0x832c0440
	ctx.lr = 0x832BFB00;
	sub_832C0440(ctx, base);
	// addi r3,r10,192
	ctx.r3.s64 = ctx.r10.s64 + 192;
	// bl 0x832c05c8
	ctx.lr = 0x832BFB08;
	sub_832C05C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BFB18"))) PPC_WEAK_FUNC(sub_832BFB18);
PPC_FUNC_IMPL(__imp__sub_832BFB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74d0
	ctx.lr = 0x832BFB28;
	sub_82CA74D0(ctx, base);
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f4,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f2,f4
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// lfs f6,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f2,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fadds f31,f4,f6
	ctx.f31.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f29,f30,f2
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f2.f64));
	// lfs f28,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f4,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fadds f24,f7,f13
	ctx.f24.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f26,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f2,f30,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f2.f64));
	// lfs f27,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f30,f11,f3
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// lfs f23,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f25,f28,f4
	ctx.f25.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// lfs f22,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f22.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fadds f21,f26,f27
	ctx.f21.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// lfs f20,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f20.f64 = double(temp.f32);
	// fadds f4,f28,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// lfs f28,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f27,f26,f27
	ctx.f27.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// lfs f26,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// fadds f18,f29,f31
	ctx.f18.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// stfs f18,-172(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fsubs f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// stfs f31,-176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// lfs f31,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f24,f8
	ctx.f29.f64 = double(float(ctx.f24.f64 * ctx.f8.f64));
	// fmuls f17,f30,f8
	ctx.f17.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// stfs f31,-192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fmuls f18,f13,f8
	ctx.f18.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f19,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f19.f64 = double(temp.f32);
	// fadds f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// lfs f11,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f6,f25
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f25.f64));
	// lfs f16,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f15,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f15.f64 = double(temp.f32);
	// fadds f6,f25,f6
	ctx.f6.f64 = double(float(ctx.f25.f64 + ctx.f6.f64));
	// lfs f14,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f14.f64 = double(temp.f32);
	// fadds f25,f4,f21
	ctx.f25.f64 = double(float(ctx.f4.f64 + ctx.f21.f64));
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f21,f4
	ctx.f4.f64 = double(float(ctx.f21.f64 - ctx.f4.f64));
	// fadds f21,f2,f27
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f27.f64));
	// fsubs f2,f27,f2
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f2.f64));
	// fadds f27,f5,f9
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fadds f5,f1,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fmadds f10,f24,f0,f17
	ctx.f10.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f17.f64));
	// fmsubs f30,f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 - ctx.f29.f64));
	// fmsubs f13,f3,f8,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 - ctx.f13.f64));
	// fadds f29,f7,f23
	ctx.f29.f64 = double(float(ctx.f7.f64 + ctx.f23.f64));
	// fadds f24,f28,f22
	ctx.f24.f64 = double(float(ctx.f28.f64 + ctx.f22.f64));
	// fmadds f3,f3,f0,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f18.f64));
	// fsubs f7,f7,f23
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f23.f64));
	// fsubs f28,f28,f22
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f22.f64));
	// fadds f23,f26,f20
	ctx.f23.f64 = double(float(ctx.f26.f64 + ctx.f20.f64));
	// stfs f27,-164(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fadds f22,f19,f11
	ctx.f22.f64 = double(float(ctx.f19.f64 + ctx.f11.f64));
	// stfs f5,-160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fsubs f26,f26,f20
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f20.f64));
	// lfs f20,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f11,f19,f11
	ctx.f11.f64 = double(float(ctx.f19.f64 - ctx.f11.f64));
	// lfs f27,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f19,f15,f16
	ctx.f19.f64 = double(float(ctx.f15.f64 - ctx.f16.f64));
	// lfs f18,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f17,f20,f12
	ctx.f17.f64 = double(float(ctx.f20.f64 - ctx.f12.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// stfs f25,-168(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fsubs f25,f27,f14
	ctx.f25.f64 = double(float(ctx.f27.f64 - ctx.f14.f64));
	// stfs f4,-180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fsubs f4,f5,f18
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f18.f64));
	// stfs f9,-192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fadds f12,f20,f12
	ctx.f12.f64 = double(float(ctx.f20.f64 + ctx.f12.f64));
	// stfs f1,-184(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f5,f5,f18
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f18.f64));
	// fadds f1,f26,f28
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// fsubs f9,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fsubs f28,f28,f26
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f26.f64));
	// fadds f26,f17,f19
	ctx.f26.f64 = double(float(ctx.f17.f64 + ctx.f19.f64));
	// fsubs f20,f19,f17
	ctx.f20.f64 = double(float(ctx.f19.f64 - ctx.f17.f64));
	// fadds f19,f25,f4
	ctx.f19.f64 = double(float(ctx.f25.f64 + ctx.f4.f64));
	// fsubs f4,f4,f25
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f25.f64));
	// fadds f11,f27,f14
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f14.f64));
	// fadds f27,f15,f16
	ctx.f27.f64 = double(float(ctx.f15.f64 + ctx.f16.f64));
	// lfs f15,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f15.f64 = double(temp.f32);
	// stfs f15,-188(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// fsubs f14,f5,f12
	ctx.f14.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f25,f9,f1
	ctx.f25.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fadds f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f9,f28,f7
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// fsubs f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// fmuls f18,f26,f0
	ctx.f18.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmuls f26,f26,f8
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f8.f64));
	// fmuls f17,f20,f8
	ctx.f17.f64 = double(float(ctx.f20.f64 * ctx.f8.f64));
	// fmuls f16,f19,f8
	ctx.f16.f64 = double(float(ctx.f19.f64 * ctx.f8.f64));
	// fsubs f28,f27,f11
	ctx.f28.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// fadds f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fmuls f25,f25,f15
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f15.f64));
	// fmuls f1,f1,f15
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f15.f64));
	// fmuls f9,f9,f15
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f15.f64));
	// fmuls f7,f7,f15
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f15.f64));
	// fmsubs f8,f4,f8,f18
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f18.f64));
	// fmadds f4,f4,f0,f26
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmsubs f26,f19,f0,f17
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f0.f64 - ctx.f17.f64));
	// fmadds f0,f20,f0,f16
	ctx.f0.f64 = double(float(ctx.f20.f64 * ctx.f0.f64 + ctx.f16.f64));
	// fadds f15,f23,f29
	ctx.f15.f64 = double(float(ctx.f23.f64 + ctx.f29.f64));
	// fadds f20,f25,f31
	ctx.f20.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// fadds f19,f1,f21
	ctx.f19.f64 = double(float(ctx.f1.f64 + ctx.f21.f64));
	// fsubs f18,f6,f9
	ctx.f18.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fadds f17,f7,f2
	ctx.f17.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fadds f2,f8,f30
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f30.f64));
	// fadds f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f16,f13,f26
	ctx.f16.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// fadds f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f13.f64));
	// fsubs f26,f3,f0
	ctx.f26.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fadds f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fsubs f0,f29,f23
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f23.f64));
	// fadds f29,f22,f24
	ctx.f29.f64 = double(float(ctx.f22.f64 + ctx.f24.f64));
	// fsubs f24,f24,f22
	ctx.f24.f64 = double(float(ctx.f24.f64 - ctx.f22.f64));
	// fadds f27,f2,f20
	ctx.f27.f64 = double(float(ctx.f2.f64 + ctx.f20.f64));
	// stfs f27,64(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fadds f27,f9,f19
	ctx.f27.f64 = double(float(ctx.f9.f64 + ctx.f19.f64));
	// stfs f27,68(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fadds f27,f16,f18
	ctx.f27.f64 = double(float(ctx.f16.f64 + ctx.f18.f64));
	// stfs f27,96(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f27,f18,f16
	ctx.f27.f64 = double(float(ctx.f18.f64 - ctx.f16.f64));
	// stfs f27,104(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fadds f27,f26,f7
	ctx.f27.f64 = double(float(ctx.f26.f64 + ctx.f7.f64));
	// stfs f27,100(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f7,f7,f26
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// stfs f7,108(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fadds f7,f13,f17
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f17.f64));
	// stfs f7,116(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f7,f20,f2
	ctx.f7.f64 = double(float(ctx.f20.f64 - ctx.f2.f64));
	// stfs f7,72(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fsubs f13,f17,f13
	ctx.f13.f64 = double(float(ctx.f17.f64 - ctx.f13.f64));
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fsubs f2,f19,f9
	ctx.f2.f64 = double(float(ctx.f19.f64 - ctx.f9.f64));
	// stfs f2,76(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fsubs f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfs f7,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f9,f21,f1
	ctx.f9.f64 = double(float(ctx.f21.f64 - ctx.f1.f64));
	// fadds f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fsubs f5,f7,f28
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f28.f64));
	// lfs f23,-164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f23.f64 = double(temp.f32);
	// fadds f13,f28,f7
	ctx.f13.f64 = double(float(ctx.f28.f64 + ctx.f7.f64));
	// lfs f21,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f21.f64 = double(temp.f32);
	// fadds f1,f14,f2
	ctx.f1.f64 = double(float(ctx.f14.f64 + ctx.f2.f64));
	// fsubs f7,f2,f14
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f14.f64));
	// fsubs f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// lfs f10,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f30,f8
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// lfs f30,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f30.f64 = double(temp.f32);
	// fadds f28,f24,f30
	ctx.f28.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// fsubs f30,f30,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f24.f64));
	// fadds f20,f11,f21
	ctx.f20.f64 = double(float(ctx.f11.f64 + ctx.f21.f64));
	// fadds f22,f12,f23
	ctx.f22.f64 = double(float(ctx.f12.f64 + ctx.f23.f64));
	// fsubs f12,f23,f12
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// fsubs f2,f5,f1
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fsubs f26,f13,f7
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fadds f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f13,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f31,f25
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f25.f64));
	// lfs f25,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f10,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f10.f64 = double(temp.f32);
	// fadds f27,f15,f10
	ctx.f27.f64 = double(float(ctx.f15.f64 + ctx.f10.f64));
	// fadds f24,f29,f25
	ctx.f24.f64 = double(float(ctx.f29.f64 + ctx.f25.f64));
	// fsubs f10,f10,f15
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f15.f64));
	// fmuls f2,f2,f13
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f26,f26,f13
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fmuls f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f13,f21,f11
	ctx.f13.f64 = double(float(ctx.f21.f64 - ctx.f11.f64));
	// fadds f11,f3,f6
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f11,120(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fadds f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f6,84(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f3,92(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fsubs f11,f5,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fadds f9,f4,f5
	ctx.f9.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f8,f2,f30
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f5,f30,f2
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f2.f64));
	// stfs f5,40(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f6,36(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f4,f0,f1
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f2,f28,f7
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f7.f64));
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f1,f7,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f3,f26,f31
	ctx.f3.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f26.f64));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fadds f11,f22,f27
	ctx.f11.f64 = double(float(ctx.f22.f64 + ctx.f27.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f9,f20,f24
	ctx.f9.f64 = double(float(ctx.f20.f64 + ctx.f24.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f8,f27,f22
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f22.f64));
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f7,f24,f20
	ctx.f7.f64 = double(float(ctx.f24.f64 - ctx.f20.f64));
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f29,f25,f29
	ctx.f29.f64 = double(float(ctx.f25.f64 - ctx.f29.f64));
	// fsubs f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f5,20(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f3,f29,f12
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// stfs f4,24(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca751c
	ctx.lr = 0x832BFF18;
	sub_82CA751C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BFF24"))) PPC_WEAK_FUNC(sub_832BFF24);
PPC_FUNC_IMPL(__imp__sub_832BFF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFF28"))) PPC_WEAK_FUNC(sub_832BFF28);
PPC_FUNC_IMPL(__imp__sub_832BFF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74d0
	ctx.lr = 0x832BFF38;
	sub_82CA74D0(ctx, base);
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f8,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f12,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f6,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f4,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f10,f2,f4
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// lfs f25,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lfs f22,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f22.f64 = double(temp.f32);
	// fsubs f29,f11,f7
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f23,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f23.f64 = double(temp.f32);
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f2,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f26,f9,f5
	ctx.f26.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f5,f9
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f9,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f19,f8,f6
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f30,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f17,f25,f9
	ctx.f17.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// fadds f15,f22,f23
	ctx.f15.f64 = double(float(ctx.f22.f64 + ctx.f23.f64));
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f24,f3,f2
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// lfs f20,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f20.f64 = double(temp.f32);
	// fadds f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f25.f64));
	// lfs f18,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f18.f64 = double(temp.f32);
	// fsubs f28,f31,f30
	ctx.f28.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// stfs f10,-212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -212, temp.u32);
	// fmuls f29,f29,f27
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f27.f64));
	// stfs f18,-216(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// fmuls f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// stfs f20,-224(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fmuls f21,f13,f6
	ctx.f21.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f27,-176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmuls f5,f5,f27
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// stfs f4,-220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lfs f16,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f16.f64 = double(temp.f32);
	// fsubs f23,f22,f23
	ctx.f23.f64 = double(float(ctx.f22.f64 - ctx.f23.f64));
	// lfs f14,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f26,f26,f27
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f27.f64));
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f13,f7,f19
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f19.f64));
	// lfs f18,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f18.f64 = double(temp.f32);
	// fadds f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lfs f25,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// fmsubs f24,f28,f4,f24
	ctx.f24.f64 = double(float(ctx.f28.f64 * ctx.f4.f64 - ctx.f24.f64));
	// lfs f22,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f22.f64 = double(temp.f32);
	// fadds f19,f29,f17
	ctx.f19.f64 = double(float(ctx.f29.f64 + ctx.f17.f64));
	// stfs f19,-192(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// fadds f19,f11,f15
	ctx.f19.f64 = double(float(ctx.f11.f64 + ctx.f15.f64));
	// lfs f20,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f11,f15,f11
	ctx.f11.f64 = double(float(ctx.f15.f64 - ctx.f11.f64));
	// lfs f27,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f15,f9,f5
	ctx.f15.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfs f4,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f28,f2,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f3.f64));
	// lfs f28,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f28.f64 = double(temp.f32);
	// fmsubs f8,f8,f7,f21
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f21.f64));
	// lfs f21,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f30,f1,f7
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fsubs f29,f17,f29
	ctx.f29.f64 = double(float(ctx.f17.f64 - ctx.f29.f64));
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fadds f17,f26,f23
	ctx.f17.f64 = double(float(ctx.f26.f64 + ctx.f23.f64));
	// fsubs f5,f23,f26
	ctx.f5.f64 = double(float(ctx.f23.f64 - ctx.f26.f64));
	// fadds f26,f8,f24
	ctx.f26.f64 = double(float(ctx.f8.f64 + ctx.f24.f64));
	// stfs f9,-164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// fsubs f8,f24,f8
	ctx.f8.f64 = double(float(ctx.f24.f64 - ctx.f8.f64));
	// stfs f15,-172(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fadds f24,f13,f3
	ctx.f24.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// lfs f23,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f15,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f15.f64 = double(temp.f32);
	// fmsubs f13,f31,f6,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 - ctx.f30.f64));
	// lfs f9,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f31,f7,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 + ctx.f1.f64));
	// lfs f31,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// stfs f17,-168(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fadds f17,f28,f4
	ctx.f17.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f5,-160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// fsubs f5,f20,f27
	ctx.f5.f64 = double(float(ctx.f20.f64 - ctx.f27.f64));
	// stfs f11,-180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// fsubs f11,f31,f23
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// stfs f29,-184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// fadds f29,f15,f9
	ctx.f29.f64 = double(float(ctx.f15.f64 + ctx.f9.f64));
	// fadds f30,f14,f16
	ctx.f30.f64 = double(float(ctx.f14.f64 + ctx.f16.f64));
	// stfs f26,-188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// stfs f24,-196(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + -196, temp.u32);
	// fadds f24,f22,f25
	ctx.f24.f64 = double(float(ctx.f22.f64 + ctx.f25.f64));
	// lfs f26,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f26.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f25,f22,f25
	ctx.f25.f64 = double(float(ctx.f22.f64 - ctx.f25.f64));
	// stfs f19,-200(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + -200, temp.u32);
	// fsubs f4,f28,f4
	ctx.f4.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// stfs f8,-204(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -204, temp.u32);
	// fsubs f12,f10,f18
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f18.f64));
	// lfs f8,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f22,f21,f26
	ctx.f22.f64 = double(float(ctx.f21.f64 - ctx.f26.f64));
	// stfs f3,-208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// fadds f28,f26,f21
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f21.f64));
	// lfs f26,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f26.f64 = double(temp.f32);
	// fadds f10,f18,f10
	ctx.f10.f64 = double(float(ctx.f18.f64 + ctx.f10.f64));
	// stfs f1,-224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -224, temp.u32);
	// fsubs f9,f15,f9
	ctx.f9.f64 = double(float(ctx.f15.f64 - ctx.f9.f64));
	// lfs f15,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f15.f64 = double(temp.f32);
	// fsubs f18,f14,f16
	ctx.f18.f64 = double(float(ctx.f14.f64 - ctx.f16.f64));
	// stfs f13,-220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -220, temp.u32);
	// fmuls f16,f17,f7
	ctx.f16.f64 = double(float(ctx.f17.f64 * ctx.f7.f64));
	// fmuls f21,f5,f26
	ctx.f21.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fmuls f17,f17,f6
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f6.f64));
	// fmuls f14,f11,f15
	ctx.f14.f64 = double(float(ctx.f11.f64 * ctx.f15.f64));
	// fmuls f19,f29,f15
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f15.f64));
	// fadds f31,f23,f31
	ctx.f31.f64 = double(float(ctx.f23.f64 + ctx.f31.f64));
	// fmuls f23,f30,f26
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f26.f64));
	// fadds f27,f27,f20
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f20.f64));
	// fmuls f20,f0,f15
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmsubs f16,f22,f6,f16
	ctx.f16.f64 = double(float(ctx.f22.f64 * ctx.f6.f64 - ctx.f16.f64));
	// fmadds f21,f24,f8,f21
	ctx.f21.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f21.f64));
	// fmuls f1,f28,f15
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f15.f64));
	// fmadds f22,f22,f7,f17
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f7.f64 + ctx.f17.f64));
	// fmadds f29,f29,f2,f14
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 + ctx.f14.f64));
	// fmsubs f11,f11,f2,f19
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 - ctx.f19.f64));
	// fmuls f24,f24,f26
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f26.f64));
	// fmuls f13,f31,f6
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f6.f64));
	// fmuls f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f14,f25,f8
	ctx.f14.f64 = double(float(ctx.f25.f64 * ctx.f8.f64));
	// fmuls f19,f10,f26
	ctx.f19.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmuls f17,f18,f26
	ctx.f17.f64 = double(float(ctx.f18.f64 * ctx.f26.f64));
	// fmadds f23,f12,f8,f23
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f23.f64));
	// fmuls f25,f25,f26
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f26.f64));
	// fmuls f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f6,-216(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -216, temp.u32);
	// lfs f6,-212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f4,f15
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f15.f64));
	// fmadds f20,f6,f2,f20
	ctx.f20.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f20.f64));
	// fmsubs f0,f6,f15,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f15.f64 - ctx.f0.f64));
	// fmsubs f6,f5,f8,f24
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f24.f64));
	// fmsubs f4,f4,f2,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f12,f12,f26,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f26.f64 - ctx.f30.f64));
	// fmadds f5,f18,f8,f19
	ctx.f5.f64 = double(float(ctx.f18.f64 * ctx.f8.f64 + ctx.f19.f64));
	// fmsubs f10,f10,f8,f17
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 - ctx.f17.f64));
	// fmadds f1,f9,f7,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fmsubs f30,f27,f26,f14
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f26.f64 - ctx.f14.f64));
	// fmadds f8,f27,f8,f25
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 + ctx.f25.f64));
	// fadds f13,f21,f23
	ctx.f13.f64 = double(float(ctx.f21.f64 + ctx.f23.f64));
	// fsubs f9,f22,f29
	ctx.f9.f64 = double(float(ctx.f22.f64 - ctx.f29.f64));
	// lfs f19,-196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -196);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f27,f16,f11
	ctx.f27.f64 = double(float(ctx.f16.f64 - ctx.f11.f64));
	// lfs f15,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f3,f28,f2,f3
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f3.f64));
	// lfs f28,-224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f26,f28,f0
	ctx.f26.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// lfs f2,-216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// stfs f15,-176(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fadds f28,f6,f12
	ctx.f28.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// lfs f14,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f14.f64 = double(temp.f32);
	// fsubs f24,f5,f8
	ctx.f24.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fadds f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// stfs f8,-168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fsubs f6,f23,f21
	ctx.f6.f64 = double(float(ctx.f23.f64 - ctx.f21.f64));
	// lfs f23,-204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -204);
	ctx.f23.f64 = double(temp.f32);
	// fadds f5,f11,f16
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f16.f64));
	// lfs f11,-208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f25,f10,f30
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// fadds f29,f29,f22
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f22.f64));
	// fadds f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// fsubs f22,f23,f9
	ctx.f22.f64 = double(float(ctx.f23.f64 - ctx.f9.f64));
	// fadds f30,f27,f11
	ctx.f30.f64 = double(float(ctx.f27.f64 + ctx.f11.f64));
	// fadds f9,f9,f23
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f23.f64));
	// fsubs f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// fmsubs f7,f31,f7,f2
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64 - ctx.f2.f64));
	// lfs f2,-220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f2.f64 = double(temp.f32);
	// fadds f21,f1,f4
	ctx.f21.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fsubs f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// lfs f1,-200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -200);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f31,f2,f20
	ctx.f31.f64 = double(float(ctx.f2.f64 - ctx.f20.f64));
	// fadds f2,f20,f2
	ctx.f2.f64 = double(float(ctx.f20.f64 + ctx.f2.f64));
	// fadds f20,f13,f1
	ctx.f20.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f18,f29,f19
	ctx.f18.f64 = double(float(ctx.f29.f64 + ctx.f19.f64));
	// fsubs f13,f19,f29
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f29.f64));
	// fsubs f27,f22,f30
	ctx.f27.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// fsubs f29,f9,f11
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fadds f30,f30,f22
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f22.f64));
	// lfs f22,-188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	ctx.f22.f64 = double(temp.f32);
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f9,-184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	ctx.f9.f64 = double(temp.f32);
	// fadds f17,f7,f3
	ctx.f17.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fsubs f7,f3,f7
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// lfs f3,-192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	ctx.f3.f64 = double(temp.f32);
	// fadds f16,f5,f22
	ctx.f16.f64 = double(float(ctx.f5.f64 + ctx.f22.f64));
	// fadds f23,f28,f3
	ctx.f23.f64 = double(float(ctx.f28.f64 + ctx.f3.f64));
	// fsubs f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// fsubs f5,f22,f5
	ctx.f5.f64 = double(float(ctx.f22.f64 - ctx.f5.f64));
	// lfs f22,-180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f27,f27,f15
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f15.f64));
	// fmuls f29,f29,f15
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f15.f64));
	// fmuls f30,f30,f15
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f15.f64));
	// fmuls f11,f11,f15
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f15.f64));
	// fsubs f15,f31,f17
	ctx.f15.f64 = double(float(ctx.f31.f64 - ctx.f17.f64));
	// fsubs f28,f9,f6
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fadds f31,f17,f31
	ctx.f31.f64 = double(float(ctx.f17.f64 + ctx.f31.f64));
	// fadds f17,f18,f20
	ctx.f17.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// stfs f17,4(r3)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f9,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f9.f64 = double(temp.f32);
	// fadds f19,f12,f22
	ctx.f19.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// stfs f10,-172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fsubs f20,f20,f18
	ctx.f20.f64 = double(float(ctx.f20.f64 - ctx.f18.f64));
	// stfs f20,12(r3)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f12,f22,f12
	ctx.f12.f64 = double(float(ctx.f22.f64 - ctx.f12.f64));
	// fadds f20,f16,f23
	ctx.f20.f64 = double(float(ctx.f16.f64 + ctx.f23.f64));
	// stfs f20,0(r3)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f22,f25,f9
	ctx.f22.f64 = double(float(ctx.f25.f64 + ctx.f9.f64));
	// fsubs f8,f26,f21
	ctx.f8.f64 = double(float(ctx.f26.f64 - ctx.f21.f64));
	// fsubs f23,f23,f16
	ctx.f23.f64 = double(float(ctx.f23.f64 - ctx.f16.f64));
	// stfs f23,8(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f9,f9,f25
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// fadds f10,f24,f14
	ctx.f10.f64 = double(float(ctx.f24.f64 + ctx.f14.f64));
	// fadds f26,f21,f26
	ctx.f26.f64 = double(float(ctx.f21.f64 + ctx.f26.f64));
	// fsubs f25,f14,f24
	ctx.f25.f64 = double(float(ctx.f14.f64 - ctx.f24.f64));
	// fadds f24,f4,f2
	ctx.f24.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fsubs f21,f0,f7
	ctx.f21.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsubs f23,f3,f13
	ctx.f23.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f23,16(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f23,f5,f1
	ctx.f23.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// fsubs f1,f1,f5
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fadds f5,f30,f19
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f19.f64));
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f5,f2,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f23,20(r3)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fadds f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f0,-168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f3,24(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fadds f13,f27,f28
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fsubs f1,f19,f30
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f30.f64));
	// stfs f1,44(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fadds f6,f29,f12
	ctx.f6.f64 = double(float(ctx.f29.f64 + ctx.f12.f64));
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f3,f28,f27
	ctx.f3.f64 = double(float(ctx.f28.f64 - ctx.f27.f64));
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f1,68(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// lfs f1,-164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f1.f64 = double(temp.f32);
	// fadds f3,f15,f22
	ctx.f3.f64 = double(float(ctx.f15.f64 + ctx.f22.f64));
	// stfs f3,64(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fsubs f8,f24,f21
	ctx.f8.f64 = double(float(ctx.f24.f64 - ctx.f21.f64));
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// fadds f6,f21,f24
	ctx.f6.f64 = double(float(ctx.f21.f64 + ctx.f24.f64));
	// lfs f12,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fsubs f10,f9,f26
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// stfs f10,80(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fadds f9,f26,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 + ctx.f9.f64));
	// stfs f9,88(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f11,f31,f25
	ctx.f11.f64 = double(float(ctx.f31.f64 + ctx.f25.f64));
	// lfs f9,-176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,84(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f13,f22,f15
	ctx.f13.f64 = double(float(ctx.f22.f64 - ctx.f15.f64));
	// lfs f11,-172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f25,f31
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmuls f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f4,92(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmuls f7,f6,f9
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f6,f0,f1
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fadds f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f1,96(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f13,104(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fadds f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fsubs f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f12,108(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// fadds f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f11,116(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fsubs f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f2.f64));
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fadds f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f9,120(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f8,f5,f3
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// stfs f8,124(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca751c
	ctx.lr = 0x832C0434;
	sub_82CA751C(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0440"))) PPC_WEAK_FUNC(sub_832C0440);
PPC_FUNC_IMPL(__imp__sub_832C0440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74f8
	ctx.lr = 0x832C0450;
	sub_82CA74F8(ctx, base);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// fadds f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lfs f31,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f30,f7,f0
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lfs f29,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f0,f29
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f26,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fadds f25,f3,f5
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f24,f10,f2
	ctx.f24.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fadds f10,f2,f10
	ctx.f10.f64 = double(float(ctx.f2.f64 + ctx.f10.f64));
	// fsubs f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsubs f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fadds f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fadds f9,f28,f6
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f6.f64));
	// fsubs f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f4,f27,f30
	ctx.f4.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// fsubs f31,f24,f25
	ctx.f31.f64 = double(float(ctx.f24.f64 - ctx.f25.f64));
	// fadds f29,f25,f24
	ctx.f29.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// fadds f28,f5,f10
	ctx.f28.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fsubs f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fsubs f10,f1,f2
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fadds f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f25,f3,f7
	ctx.f25.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fsubs f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// fmuls f13,f29,f26
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f26.f64));
	// fmuls f31,f28,f26
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f26.f64));
	// fmuls f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fadds f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f29,0(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f9,f30,f27
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f27.f64));
	// fadds f12,f7,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fadds f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f4,f13,f25
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fadds f10,f5,f1
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f1.f64));
	// stfs f10,52(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f12,f2,f31
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f7,f31,f2
	ctx.f7.f64 = double(float(ctx.f31.f64 + ctx.f2.f64));
	// stfs f7,56(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fsubs f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// stfs f5,60(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f4,f6,f3
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fadds f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f2,20(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca7544
	ctx.lr = 0x832C05BC;
	sub_82CA7544(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C05C8"))) PPC_WEAK_FUNC(sub_832C05C8);
PPC_FUNC_IMPL(__imp__sub_832C05C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca74e8
	ctx.lr = 0x832C05D8;
	sub_82CA74E8(ctx, base);
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fadds f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f3,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fadds f10,f1,f3
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lfs f30,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f31,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f29,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f26,f4,f30
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// lfs f28,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f27,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lfs f25,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f25.f64 = double(temp.f32);
	// fadds f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f24,f2,f31
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f23,f10,f31
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fsubs f22,f28,f8
	ctx.f22.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// fadds f21,f27,f25
	ctx.f21.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmsubs f26,f1,f31,f26
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 - ctx.f26.f64));
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmadds f4,f1,f30,f4
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// fmadds f1,f10,f30,f24
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f24.f64));
	// fmsubs f10,f2,f30,f23
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 - ctx.f23.f64));
	// fmuls f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f24,f3,f30
	ctx.f24.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fadds f8,f8,f28
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fadds f23,f7,f22
	ctx.f23.f64 = double(float(ctx.f7.f64 + ctx.f22.f64));
	// fsubs f7,f22,f7
	ctx.f7.f64 = double(float(ctx.f22.f64 - ctx.f7.f64));
	// fadds f20,f6,f21
	ctx.f20.f64 = double(float(ctx.f6.f64 + ctx.f21.f64));
	// fadds f22,f1,f4
	ctx.f22.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fsubs f6,f21,f6
	ctx.f6.f64 = double(float(ctx.f21.f64 - ctx.f6.f64));
	// fadds f21,f10,f26
	ctx.f21.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// fsubs f4,f4,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fsubs f1,f26,f10
	ctx.f1.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// fmsubs f2,f13,f30,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 - ctx.f2.f64));
	// fmuls f10,f3,f31
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fsubs f3,f27,f25
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f25.f64));
	// fmuls f5,f5,f29
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fadds f13,f22,f20
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f20.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f21,f23
	ctx.f13.f64 = double(float(ctx.f21.f64 + ctx.f23.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f13,f23,f21
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f21.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f13,f20,f22
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f22.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fsubs f13,f7,f4
	ctx.f13.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// fadds f7,f4,f7
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f4,f12,f30,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmsubs f0,f11,f31,f24
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f24.f64));
	// fmadds f13,f11,f30,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fsubs f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fadds f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsubs f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f8,f3,f5
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fadds f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fadds f5,f0,f2
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fsubs f3,f6,f1
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// stfs f3,28(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fadds f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fsubs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fadds f1,f7,f11
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fsubs f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fsubs f11,f9,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fadds f10,f4,f9
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f10,56(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fsubs f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stfs f9,60(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82ca7534
	ctx.lr = 0x832C078C;
	sub_82CA7534(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0798"))) PPC_WEAK_FUNC(sub_832C0798);
PPC_FUNC_IMPL(__imp__sub_832C0798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bdc
	ctx.lr = 0x832C07A0;
	sub_82CA2BDC(ctx, base);
	// srawi r25,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r3.s32 >> 1;
	// divw r9,r5,r3
	ctx.r9.s32 = ctx.r5.s32 / ctx.r3.s32;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x832c08f8
	if (ctx.cr6.lt) goto loc_832C08F8;
	// addi r11,r25,-5
	ctx.r11.s64 = ctx.r25.s64 + -5;
	// addi r8,r3,-3
	ctx.r8.s64 = ctx.r3.s64 + -3;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r27,r8,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r7,r9
	ctx.r7.s64 = -ctx.r9.s64;
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r6
	ctx.r29.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r27,r4
	ctx.r10.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 1;
loc_832C07F8:
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f6,f13,f9,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f6,-8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fmsubs f5,f13,f10,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f7.f64));
	// stfs f5,8(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmadds f10,f3,f13,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fmsubs f9,f3,f0,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// add r30,r30,r8
	ctx.r30.u64 = ctx.r30.u64 + ctx.r8.u64;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// add r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 + ctx.r29.u64;
	// fmuls f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmadds f0,f7,f3,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f13,f8,f3,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f1.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fsubs f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f4,f11,f7,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmsubs f3,f11,f8,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f5.f64));
	// stfs f3,-4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bne 0x832c07f8
	if (!ctx.cr0.eq) goto loc_832C07F8;
loc_832C08F8:
	// cmpw cr6,r27,r25
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x832c0980
	if (!ctx.cr6.lt) goto loc_832C0980;
	// subf r10,r27,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r27.s64;
	// subf r5,r28,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r28.s64;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r31,r9
	ctx.r31.s64 = -ctx.r9.s64;
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r7,r27,r25
	ctx.r7.s64 = ctx.r25.s64 - ctx.r27.s64;
loc_832C0938:
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmadds f6,f13,f9,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f5,f0,f9,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f7.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x832c0938
	if (!ctx.cr0.eq) goto loc_832C0938;
loc_832C0980:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f12,r11,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// b 0x82ca2c2c
	// ERROR 82CA2C2C
	return;
}

__attribute__((alias("__imp__sub_832C0998"))) PPC_WEAK_FUNC(sub_832C0998);
PPC_FUNC_IMPL(__imp__sub_832C0998) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc4
	ctx.lr = 0x832C09A0;
	sub_82CA2BC4(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r11,r1,-368
	ctx.r11.s64 = ctx.r1.s64 + -368;
	// li r24,8
	ctx.r24.s64 = 8;
loc_832C09AC:
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r7,48(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// extsh r29,r7
	ctx.r29.s64 = ctx.r7.s16;
	// lhz r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// or r31,r5,r9
	ctx.r31.u64 = ctx.r5.u64 | ctx.r9.u64;
	// lhz r30,96(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r27,112(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// or r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 | ctx.r29.u64;
	// extsh r28,r7
	ctx.r28.s64 = ctx.r7.s16;
	// or r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 | ctx.r8.u64;
	// extsh r7,r30
	ctx.r7.s64 = ctx.r30.s16;
	// or r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 | ctx.r28.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// or r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 | ctx.r7.u64;
	// or r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 | ctx.r27.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832c0a40
	if (!ctx.cr6.eq) goto loc_832C0A40;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r9,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 11;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// stw r9,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r9.u32);
	// stw r9,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r9.u32);
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// b 0x832c0b64
	goto loc_832C0B64;
loc_832C0A40:
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lwz r26,64(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r25,128(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// lwz r23,192(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r22,32(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r21,96(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r20,160(r6)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// lwz r19,224(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	// mullw r9,r26,r9
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r25,r8
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r8.s32);
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// mullw r7,r23,r7
	ctx.r7.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r7.s32);
	// srawi r8,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 11;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// srawi r7,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 11;
	// mullw r5,r22,r5
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// mullw r29,r21,r29
	ctx.r29.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r29.s32);
	// mulli r9,r9,2896
	ctx.r9.s64 = ctx.r9.s64 * 2896;
	// srawi r25,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 11;
	// mullw r28,r20,r28
	ctx.r28.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r28.s32);
	// srawi r9,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 11;
	// mullw r27,r19,r27
	ctx.r27.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r27.s32);
	// srawi r5,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 11;
	// srawi r29,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 11;
	// srawi r28,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 11;
	// subf r27,r5,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r5.s64;
	// subf r26,r28,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r28.s64;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r29,r26,r27
	ctx.r29.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// mulli r29,r29,3784
	ctx.r29.s64 = ctx.r29.s64 * 3784;
	// mulli r28,r27,-5352
	ctx.r28.s64 = ctx.r27.s64 * -5352;
	// subf r27,r5,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// srawi r5,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 11;
	// mulli r28,r27,2896
	ctx.r28.s64 = ctx.r27.s64 * 2896;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mulli r27,r26,2217
	ctx.r27.s64 = ctx.r26.s64 * 2217;
	// srawi r26,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 11;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r28,r30,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r7,r5,r29
	ctx.r7.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r23,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r23.s64 = ctx.r27.s32 >> 11;
	// subf r27,r8,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r8.s64;
	// add r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r5,r7,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r7.s64;
	// subf r26,r8,r31
	ctx.r26.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subf r25,r29,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r29.s64;
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r28,r9,r30
	ctx.r28.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// stw r9,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r9.u32);
	// add r31,r25,r5
	ctx.r31.u64 = ctx.r25.u64 + ctx.r5.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// add r7,r5,r29
	ctx.r7.u64 = ctx.r5.u64 + ctx.r29.u64;
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// subf r5,r5,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r5.s64;
	// subf r8,r31,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r31.s64;
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// add r9,r31,r26
	ctx.r9.u64 = ctx.r31.u64 + ctx.r26.u64;
	// stw r5,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r5.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
loc_832C0B64:
	// stw r9,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x832c09ac
	if (ctx.cr0.gt) goto loc_832C09AC;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r11,r1,-344
	ctx.r11.s64 = ctx.r1.s64 + -344;
	// li r5,8
	ctx.r5.s64 = 8;
loc_832C0B84:
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,-20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r30,r7,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r7.s64;
	// lwz r31,-16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r28,r29,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r29.s64;
	// add r27,r30,r3
	ctx.r27.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mulli r28,r28,2896
	ctx.r28.s64 = ctx.r28.s64 * 2896;
	// lwz r6,-24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// mulli r27,r27,3784
	ctx.r27.s64 = ctx.r27.s64 * 3784;
	// mulli r25,r3,-5352
	ctx.r25.s64 = ctx.r3.s64 * -5352;
	// subf r26,r9,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r24,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r28.s32 >> 11;
	// srawi r3,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 11;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r28,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r25.s32 >> 11;
	// mulli r27,r26,2896
	ctx.r27.s64 = ctx.r26.s64 * 2896;
	// add r8,r29,r31
	ctx.r8.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mulli r30,r30,2217
	ctx.r30.s64 = ctx.r30.s64 * 2217;
	// subf r29,r9,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r9.s64;
	// add r31,r6,r7
	ctx.r31.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r28,r7,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r26,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r27.s32 >> 11;
	// srawi r6,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 11;
	// subf r27,r8,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r8.s64;
	// add r7,r29,r3
	ctx.r7.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 + ctx.r31.u64;
	// subf r25,r3,r6
	ctx.r25.s64 = ctx.r6.s64 - ctx.r3.s64;
	// add r29,r27,r28
	ctx.r29.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r6,r7,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r7.s64;
	// subf r3,r27,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r26,r9,r30
	ctx.r26.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r28,r9,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r30,r7,r29
	ctx.r30.u64 = ctx.r7.u64 + ctx.r29.u64;
	// subf r7,r7,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r7.s64;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// add r9,r25,r6
	ctx.r9.u64 = ctx.r25.u64 + ctx.r6.u64;
	// addi r29,r26,127
	ctx.r29.s64 = ctx.r26.s64 + 127;
	// add r31,r6,r3
	ctx.r31.u64 = ctx.r6.u64 + ctx.r3.u64;
	// addi r28,r28,127
	ctx.r28.s64 = ctx.r28.s64 + 127;
	// addi r27,r7,127
	ctx.r27.s64 = ctx.r7.s64 + 127;
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// addi r30,r30,127
	ctx.r30.s64 = ctx.r30.s64 + 127;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r3,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 8;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r29,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 8;
	// stb r3,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// addi r31,r31,127
	ctx.r31.s64 = ctx.r31.s64 + 127;
	// srawi r8,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 8;
	// stb r29,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r29.u8);
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// srawi r30,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 8;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// stb r30,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r30.u8);
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// stb r7,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x832c0b84
	if (!ctx.cr0.eq) goto loc_832C0B84;
	// b 0x82ca2c14
	// ERROR 82CA2C14
	return;
}

__attribute__((alias("__imp__sub_832C0CB4"))) PPC_WEAK_FUNC(sub_832C0CB4);
PPC_FUNC_IMPL(__imp__sub_832C0CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0CB8"))) PPC_WEAK_FUNC(sub_832C0CB8);
PPC_FUNC_IMPL(__imp__sub_832C0CB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bc0
	ctx.lr = 0x832C0CC0;
	sub_82CA2BC0(ctx, base);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// li r23,8
	ctx.r23.s64 = 8;
loc_832C0CD4:
	// lhz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// lhz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r5,48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 48);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r7,64(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// extsh r29,r5
	ctx.r29.s64 = ctx.r5.s16;
	// lhz r5,80(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// or r31,r4,r8
	ctx.r31.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lhz r30,96(r10)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + 96);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r27,112(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 112);
	// or r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 | ctx.r29.u64;
	// extsh r28,r5
	ctx.r28.s64 = ctx.r5.s16;
	// or r31,r31,r7
	ctx.r31.u64 = ctx.r31.u64 | ctx.r7.u64;
	// extsh r5,r30
	ctx.r5.s64 = ctx.r30.s16;
	// or r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 | ctx.r28.u64;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// or r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 | ctx.r5.u64;
	// or r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 | ctx.r27.u64;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x832c0d68
	if (!ctx.cr6.eq) goto loc_832C0D68;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mullw r4,r5,r7
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// srawi r8,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 11;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// stw r8,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r8.u32);
	// stw r8,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r8.u32);
	// stw r8,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
	// b 0x832c0e8c
	goto loc_832C0E8C;
loc_832C0D68:
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lwz r26,64(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// lwz r25,128(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 128);
	// mullw r31,r31,r30
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// lwz r22,192(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 192);
	// lwz r21,32(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// lwz r20,96(r6)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r19,160(r6)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// lwz r18,224(r6)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r6.u32 + 224);
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// mullw r30,r25,r7
	ctx.r30.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r7.s32);
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// mullw r5,r22,r5
	ctx.r5.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// srawi r7,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 11;
	// srawi r30,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 11;
	// srawi r5,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 11;
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r4.s32);
	// subf r8,r5,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r5.s64;
	// mullw r29,r20,r29
	ctx.r29.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r29.s32);
	// mulli r8,r8,2896
	ctx.r8.s64 = ctx.r8.s64 * 2896;
	// srawi r25,r8,11
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FF) != 0);
	ctx.r25.s64 = ctx.r8.s32 >> 11;
	// mullw r28,r19,r28
	ctx.r28.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r28.s32);
	// srawi r8,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 11;
	// mullw r27,r18,r27
	ctx.r27.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r27.s32);
	// srawi r4,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r29.s32 >> 11;
	// srawi r29,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r28.s32 >> 11;
	// srawi r28,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r27.s32 >> 11;
	// subf r27,r4,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r4.s64;
	// subf r26,r28,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r29,r26,r27
	ctx.r29.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// mulli r29,r29,3784
	ctx.r29.s64 = ctx.r29.s64 * 3784;
	// mulli r28,r27,-5352
	ctx.r28.s64 = ctx.r27.s64 * -5352;
	// subf r27,r4,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r4.s64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// srawi r4,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r28.s32 >> 11;
	// mulli r28,r27,2896
	ctx.r28.s64 = ctx.r27.s64 * 2896;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulli r27,r26,2217
	ctx.r27.s64 = ctx.r26.s64 * 2217;
	// srawi r26,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r28.s32 >> 11;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// subf r28,r30,r31
	ctx.r28.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 + ctx.r29.u64;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r22,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r22.s64 = ctx.r27.s32 >> 11;
	// subf r27,r7,r25
	ctx.r27.s64 = ctx.r25.s64 - ctx.r7.s64;
	// add r30,r7,r31
	ctx.r30.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r4,r5,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r5.s64;
	// subf r26,r7,r31
	ctx.r26.s64 = ctx.r31.s64 - ctx.r7.s64;
	// subf r25,r29,r22
	ctx.r25.s64 = ctx.r22.s64 - ctx.r29.s64;
	// add r7,r27,r28
	ctx.r7.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r29,r27,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r28,r8,r30
	ctx.r28.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// add r30,r5,r7
	ctx.r30.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r8,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r8.u32);
	// add r31,r25,r4
	ctx.r31.u64 = ctx.r25.u64 + ctx.r4.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// add r5,r4,r29
	ctx.r5.u64 = ctx.r4.u64 + ctx.r29.u64;
	// stw r7,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r7.u32);
	// subf r4,r4,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r4.s64;
	// subf r7,r31,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r31.s64;
	// stw r5,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// add r8,r31,r26
	ctx.r8.u64 = ctx.r31.u64 + ctx.r26.u64;
	// stw r4,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r4.u32);
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
loc_832C0E8C:
	// stw r8,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bgt 0x832c0cd4
	if (ctx.cr0.gt) goto loc_832C0CD4;
	// addi r11,r1,-360
	ctx.r11.s64 = ctx.r1.s64 + -360;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
loc_832C0EAC:
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,-20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r29,-16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// subf r31,r6,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r28,-24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// subf r7,r30,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mulli r26,r7,2896
	ctx.r26.s64 = ctx.r7.s64 * 2896;
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// mulli r6,r27,3784
	ctx.r6.s64 = ctx.r27.s64 * 3784;
	// mulli r27,r3,-5352
	ctx.r27.s64 = ctx.r3.s64 * -5352;
	// srawi r26,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 11;
	// subf r25,r8,r7
	ctx.r25.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r3,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 11;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r6,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 11;
	// mulli r27,r25,2896
	ctx.r27.s64 = ctx.r25.s64 * 2896;
	// add r7,r29,r30
	ctx.r7.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// mulli r30,r31,2217
	ctx.r30.s64 = ctx.r31.s64 * 2217;
	// srawi r29,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r27.s32 >> 11;
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// subf r27,r7,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r7.s64;
	// add r31,r28,r5
	ctx.r31.u64 = ctx.r28.u64 + ctx.r5.u64;
	// srawi r26,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r30.s32 >> 11;
	// subf r28,r5,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r5.s64;
	// subf r5,r6,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r6.s64;
	// add r30,r7,r31
	ctx.r30.u64 = ctx.r7.u64 + ctx.r31.u64;
	// subf r3,r3,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r3.s64;
	// add r29,r27,r28
	ctx.r29.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r26,r8,r30
	ctx.r26.u64 = ctx.r8.u64 + ctx.r30.u64;
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r25,r6,r29
	ctx.r25.u64 = ctx.r6.u64 + ctx.r29.u64;
	// add r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r6,r6,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r6.s64;
	// subf r3,r27,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r30,r8,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r8.s64;
	// addi r28,r26,127
	ctx.r28.s64 = ctx.r26.s64 + 127;
	// add r29,r7,r31
	ctx.r29.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r27,r25,127
	ctx.r27.s64 = ctx.r25.s64 + 127;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// addi r6,r6,127
	ctx.r6.s64 = ctx.r6.s64 + 127;
	// addi r30,r30,127
	ctx.r30.s64 = ctx.r30.s64 + 127;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// addi r29,r29,127
	ctx.r29.s64 = ctx.r29.s64 + 127;
	// srawi r27,r27,8
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 8;
	// srawi r26,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r6.s32 >> 8;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// add r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// subf r8,r7,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r7.s64;
	// addi r3,r6,127
	ctx.r3.s64 = ctx.r6.s64 + 127;
	// addi r8,r8,127
	ctx.r8.s64 = ctx.r8.s64 + 127;
	// clrlwi r6,r27,24
	ctx.r6.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r7,r28,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFF0000;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// rlwinm r31,r26,16,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFF0000;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// rlwinm r29,r29,16,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF0000;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 | ctx.r30.u64;
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r3,r3,16,8,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF0000;
	// rlwinm r31,r7,8,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r30,r6,8,0,23
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r29,r5,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 | ctx.r8.u64;
	// or r8,r31,r7
	ctx.r8.u64 = ctx.r31.u64 | ctx.r7.u64;
	// or r7,r30,r6
	ctx.r7.u64 = ctx.r30.u64 | ctx.r6.u64;
	// or r6,r29,r5
	ctx.r6.u64 = ctx.r29.u64 | ctx.r5.u64;
	// rlwinm r5,r3,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r3,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r3.u32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r3,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r3.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// add r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 + ctx.r9.u64;
	// bne 0x832c0eac
	if (!ctx.cr0.eq) goto loc_832C0EAC;
	// b 0x82ca2c10
	// ERROR 82CA2C10
	return;
}

__attribute__((alias("__imp__sub_832C1030"))) PPC_WEAK_FUNC(sub_832C1030);
PPC_FUNC_IMPL(__imp__sub_832C1030) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bbc
	ctx.lr = 0x832C1038;
	sub_82CA2BBC(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r11,r11,24128
	ctx.r11.s64 = ctx.r11.s64 + 24128;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r1,-384
	ctx.r11.s64 = ctx.r1.s64 + -384;
	// li r22,8
	ctx.r22.s64 = 8;
loc_832C1054:
	// lhz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// lhz r6,32(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r31,48(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 48);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r5,64(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 64);
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// lhz r31,80(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// or r29,r30,r6
	ctx.r29.u64 = ctx.r30.u64 | ctx.r6.u64;
	// lhz r28,96(r9)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r9.u32 + 96);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r25,112(r9)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r9.u32 + 112);
	// or r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 | ctx.r27.u64;
	// extsh r26,r31
	ctx.r26.s64 = ctx.r31.s16;
	// or r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 | ctx.r5.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// or r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 | ctx.r26.u64;
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// or r29,r29,r31
	ctx.r29.u64 = ctx.r29.u64 | ctx.r31.u64;
	// or r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 | ctx.r25.u64;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x832c10e8
	if (!ctx.cr6.eq) goto loc_832C10E8;
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// srawi r6,r5,11
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 11;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stw r6,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// stw r6,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r6.u32);
	// stw r6,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r6.u32);
	// stw r6,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r6.u32);
	// b 0x832c120c
	goto loc_832C120C;
loc_832C10E8:
	// lhz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lwz r24,64(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r23,128(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// lwz r21,192(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r20,32(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r19,96(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// lwz r18,160(r10)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	// lwz r17,224(r10)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	// mullw r6,r24,r6
	ctx.r6.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r6.s32);
	// mullw r28,r23,r5
	ctx.r28.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r5.s32);
	// srawi r29,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 11;
	// mullw r31,r21,r31
	ctx.r31.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r31.s32);
	// srawi r5,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 11;
	// srawi r28,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 11;
	// srawi r31,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 11;
	// mullw r6,r20,r30
	ctx.r6.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r30.s32);
	// subf r30,r31,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r31.s64;
	// mullw r27,r19,r27
	ctx.r27.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r27.s32);
	// mulli r30,r30,2896
	ctx.r30.s64 = ctx.r30.s64 * 2896;
	// srawi r23,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r23.s64 = ctx.r30.s32 >> 11;
	// mullw r26,r18,r26
	ctx.r26.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r26.s32);
	// srawi r6,r6,11
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 11;
	// mullw r25,r17,r25
	ctx.r25.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r25.s32);
	// srawi r30,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 11;
	// srawi r27,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r27.s64 = ctx.r26.s32 >> 11;
	// srawi r26,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r26.s64 = ctx.r25.s32 >> 11;
	// subf r25,r30,r27
	ctx.r25.s64 = ctx.r27.s64 - ctx.r30.s64;
	// subf r24,r26,r6
	ctx.r24.s64 = ctx.r6.s64 - ctx.r26.s64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r27,r24,r25
	ctx.r27.u64 = ctx.r24.u64 + ctx.r25.u64;
	// add r6,r26,r6
	ctx.r6.u64 = ctx.r26.u64 + ctx.r6.u64;
	// mulli r27,r27,3784
	ctx.r27.s64 = ctx.r27.s64 * 3784;
	// mulli r26,r25,-5352
	ctx.r26.s64 = ctx.r25.s64 * -5352;
	// subf r25,r30,r6
	ctx.r25.s64 = ctx.r6.s64 - ctx.r30.s64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// srawi r27,r27,11
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 11;
	// srawi r30,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r30.s64 = ctx.r26.s32 >> 11;
	// mulli r26,r25,2896
	ctx.r26.s64 = ctx.r25.s64 * 2896;
	// subf r30,r6,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r6.s64;
	// mulli r25,r24,2217
	ctx.r25.s64 = ctx.r24.s64 * 2217;
	// srawi r24,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 11;
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subf r26,r28,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r28.s64;
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// srawi r21,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r21.s64 = ctx.r25.s32 >> 11;
	// subf r25,r5,r23
	ctx.r25.s64 = ctx.r23.s64 - ctx.r5.s64;
	// add r28,r5,r29
	ctx.r28.u64 = ctx.r5.u64 + ctx.r29.u64;
	// subf r30,r31,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r31.s64;
	// subf r24,r5,r29
	ctx.r24.s64 = ctx.r29.s64 - ctx.r5.s64;
	// subf r23,r27,r21
	ctx.r23.s64 = ctx.r21.s64 - ctx.r27.s64;
	// add r5,r25,r26
	ctx.r5.u64 = ctx.r25.u64 + ctx.r26.u64;
	// subf r27,r25,r26
	ctx.r27.s64 = ctx.r26.s64 - ctx.r25.s64;
	// add r26,r6,r28
	ctx.r26.u64 = ctx.r6.u64 + ctx.r28.u64;
	// subf r6,r6,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r6.s64;
	// add r28,r31,r5
	ctx.r28.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// stw r6,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r6.u32);
	// add r29,r23,r30
	ctx.r29.u64 = ctx.r23.u64 + ctx.r30.u64;
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// add r6,r30,r27
	ctx.r6.u64 = ctx.r30.u64 + ctx.r27.u64;
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// subf r31,r30,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r5,r29,r24
	ctx.r5.u64 = ctx.r29.u64 + ctx.r24.u64;
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// subf r6,r29,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r29.s64;
	// stw r31,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r31.u32);
	// stw r5,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r5.u32);
loc_832C120C:
	// stw r6,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bgt 0x832c1054
	if (ctx.cr0.gt) goto loc_832C1054;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// addi r11,r1,-360
	ctx.r11.s64 = ctx.r1.s64 + -360;
	// li r3,8
	ctx.r3.s64 = 8;
loc_832C1230:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,-12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// lwz r30,-20(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r26,r6,r7
	ctx.r26.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r25,r31,r30
	ctx.r25.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r29,-16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwz r27,-24(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// add r24,r25,r26
	ctx.r24.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r7,r29,r6
	ctx.r7.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lbz r23,-1(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// add r30,r27,r28
	ctx.r30.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r22,r6,r29
	ctx.r22.s64 = ctx.r29.s64 - ctx.r6.s64;
	// add r6,r31,r5
	ctx.r6.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r29,r7,r30
	ctx.r29.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r31,r5,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r5.s64;
	// mulli r22,r22,2896
	ctx.r22.s64 = ctx.r22.s64 * 2896;
	// mulli r24,r24,3784
	ctx.r24.s64 = ctx.r24.s64 * 3784;
	// add r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 + ctx.r29.u64;
	// mulli r26,r26,-5352
	ctx.r26.s64 = ctx.r26.s64 * -5352;
	// mulli r21,r31,2896
	ctx.r21.s64 = ctx.r31.s64 * 2896;
	// srawi r22,r22,11
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x7FF) != 0);
	ctx.r22.s64 = ctx.r22.s32 >> 11;
	// srawi r31,r24,11
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FF) != 0);
	ctx.r31.s64 = ctx.r24.s32 >> 11;
	// mulli r25,r25,2217
	ctx.r25.s64 = ctx.r25.s64 * 2217;
	// addi r5,r5,127
	ctx.r5.s64 = ctx.r5.s64 + 127;
	// srawi r24,r26,11
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FF) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 11;
	// srawi r21,r21,11
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FF) != 0);
	ctx.r21.s64 = ctx.r21.s32 >> 11;
	// srawi r20,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r20.s64 = ctx.r25.s32 >> 11;
	// srawi r25,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 8;
	// subf r5,r6,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r6.s64;
	// add r29,r25,r23
	ctx.r29.u64 = ctx.r25.u64 + ctx.r23.u64;
	// subf r27,r28,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r28.s64;
	// stb r29,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r29.u8);
	// subf r28,r7,r22
	ctx.r28.s64 = ctx.r22.s64 - ctx.r7.s64;
	// subf r6,r6,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r6.s64;
	// add r29,r28,r27
	ctx.r29.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// addi r25,r5,127
	ctx.r25.s64 = ctx.r5.s64 + 127;
	// subf r5,r6,r21
	ctx.r5.s64 = ctx.r21.s64 - ctx.r6.s64;
	// add r26,r6,r29
	ctx.r26.u64 = ctx.r6.u64 + ctx.r29.u64;
	// subf r6,r6,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r6.s64;
	// srawi r25,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r25.s64 = ctx.r25.s32 >> 8;
	// addi r29,r6,127
	ctx.r29.s64 = ctx.r6.s64 + 127;
	// subf r6,r28,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r28.s64;
	// subf r27,r31,r20
	ctx.r27.s64 = ctx.r20.s64 - ctx.r31.s64;
	// add r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r28,r5,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r6,r7,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r7.s64;
	// add r7,r27,r5
	ctx.r7.u64 = ctx.r27.u64 + ctx.r5.u64;
	// addi r5,r26,127
	ctx.r5.s64 = ctx.r26.s64 + 127;
	// addi r31,r31,127
	ctx.r31.s64 = ctx.r31.s64 + 127;
	// srawi r26,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r26.s64 = ctx.r5.s32 >> 8;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// lbz r5,6(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// addi r30,r28,127
	ctx.r30.s64 = ctx.r28.s64 + 127;
	// add r5,r25,r5
	ctx.r5.u64 = ctx.r25.u64 + ctx.r5.u64;
	// stb r5,6(r9)
	PPC_STORE_U8(ctx.r9.u32 + 6, ctx.r5.u8);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lbz r5,5(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// stb r5,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, ctx.r5.u8);
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stb r5,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r5.u8);
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// lbz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// subf r30,r7,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r7.s64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r30,r30,127
	ctx.r30.s64 = ctx.r30.s64 + 127;
	// stb r6,4(r9)
	PPC_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stb r5,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r5.u8);
	// lbz r6,3(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r7,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// bne 0x832c1230
	if (!ctx.cr0.eq) goto loc_832C1230;
	// b 0x82ca2c0c
	// ERROR 82CA2C0C
	return;
}

__attribute__((alias("__imp__sub_832C13A8"))) PPC_WEAK_FUNC(sub_832C13A8);
PPC_FUNC_IMPL(__imp__sub_832C13A8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x832C13B0;
	sub_82CA2BB0(ctx, base);
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r8,r1,-400
	ctx.r8.s64 = ctx.r1.s64 + -400;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,-384
	ctx.r7.s64 = ctx.r1.s64 + -384;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r1,-368
	ctx.r5.s64 = ctx.r1.s64 + -368;
	// addi r3,r1,-352
	ctx.r3.s64 = ctx.r1.s64 + -352;
	// addi r31,r1,-336
	ctx.r31.s64 = ctx.r1.s64 + -336;
	// addi r30,r1,-320
	ctx.r30.s64 = ctx.r1.s64 + -320;
	// addi r29,r1,-304
	ctx.r29.s64 = ctx.r1.s64 + -304;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge cr6,0x832c1438
	if (!ctx.cr6.lt) goto loc_832C1438;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfic r7,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r7.s64 = 4 - ctx.r11.s64;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// slw r5,r9,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// srw r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 | ctx.r8.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// clrlwi r27,r9,28
	ctx.r27.u64 = ctx.r9.u32 & 0xF;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// b 0x832c1444
	goto loc_832C1444;
loc_832C1438:
	// clrlwi r27,r10,28
	ctx.r27.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_832C1444:
	// li r7,96
	ctx.r7.s64 = 96;
	// stw r11,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r10,-460(r1)
	PPC_STORE_U32(ctx.r1.u32 + -460, ctx.r10.u32);
	// stb r7,-219(r1)
	PPC_STORE_U8(ctx.r1.u32 + -219, ctx.r7.u8);
	// li r7,15
	ctx.r7.s64 = 15;
	// stb r8,-220(r1)
	PPC_STORE_U8(ctx.r1.u32 + -220, ctx.r8.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r9,r27,-1
	ctx.r9.s64 = ctx.r27.s64 + -1;
	// stb r7,-215(r1)
	PPC_STORE_U8(ctx.r1.u32 + -215, ctx.r7.u8);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r3,7
	ctx.r3.s64 = 7;
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r5,-218(r1)
	PPC_STORE_U8(ctx.r1.u32 + -218, ctx.r5.u8);
	// stb r3,-217(r1)
	PPC_STORE_U8(ctx.r1.u32 + -217, ctx.r3.u8);
	// li r23,0
	ctx.r23.s64 = 0;
	// stb r8,-216(r1)
	PPC_STORE_U8(ctx.r1.u32 + -216, ctx.r8.u8);
	// addi r26,r1,-220
	ctx.r26.s64 = ctx.r1.s64 + -220;
	// addi r25,r1,-214
	ctx.r25.s64 = ctx.r1.s64 + -214;
	// slw r29,r24,r9
	ctx.r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// ble cr6,0x832c1974
	if (!ctx.cr6.gt) goto loc_832C1974;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_832C14A4:
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// slw r31,r24,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// bge cr6,0x832c195c
	if (!ctx.cr6.lt) goto loc_832C195C;
loc_832C14C0:
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832c1950
	if (ctx.cr6.eq) goto loc_832C1950;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c14e8
	if (!ctx.cr6.eq) goto loc_832C14E8;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c14f4
	goto loc_832C14F4;
loc_832C14E8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C14F4:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832c1950
	if (ctx.cr6.eq) goto loc_832C1950;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x832c1950
	if (ctx.cr6.gt) goto loc_832C1950;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,5412
	ctx.r12.s64 = ctx.r12.s64 + 5412;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_832C1534;
	case 1:
		goto loc_832C1548;
	case 2:
		goto loc_832C1584;
	case 3:
		goto loc_832C18E0;
	default:
		__builtin_unreachable();
	}
	// lwz r25,5428(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 5428);
	// lwz r25,5448(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 5448);
	// lwz r25,5508(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 5508);
	// lwz r25,6368(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6368);
loc_832C1534:
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// b 0x832c1590
	goto loc_832C1590;
loc_832C1548:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r8,r25,1
	ctx.r8.s64 = ctx.r25.s64 + 1;
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r22,r9,2
	ctx.r22.s64 = ctx.r9.s64 + 2;
	// addi r21,r9,18
	ctx.r21.s64 = ctx.r9.s64 + 18;
	// addi r20,r9,34
	ctx.r20.s64 = ctx.r9.s64 + 34;
	// stb r22,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r22.u8);
	// addi r9,r9,50
	ctx.r9.s64 = ctx.r9.s64 + 50;
	// stb r21,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r21.u8);
	// stb r20,1(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1, ctx.r20.u8);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stb r22,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r22.u8);
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// b 0x832c1954
	goto loc_832C1954;
loc_832C1584:
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r23.u8);
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_832C1590:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c16ec
	if (!ctx.cr6.eq) goto loc_832C16EC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c16d0
	if (!ctx.cr6.eq) goto loc_832C16D0;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r11,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_832C15B8:
	// and r22,r9,r31
	ctx.r22.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// beq cr6,0x832c15d0
	if (ctx.cr6.eq) goto loc_832C15D0;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832C15D0:
	// rlwinm r22,r8,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r1,-416
	ctx.r21.s64 = ctx.r1.s64 + -416;
	// sthx r9,r22,r21
	PPC_STORE_U16(ctx.r22.u32 + ctx.r21.u32, ctx.r9.u16);
loc_832C15DC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1770
	if (!ctx.cr6.eq) goto loc_832C1770;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c1754
	if (!ctx.cr6.eq) goto loc_832C1754;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r11,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_832C1608:
	// and r22,r9,r31
	ctx.r22.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// beq cr6,0x832c1620
	if (ctx.cr6.eq) goto loc_832C1620;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832C1620:
	// rlwinm r22,r8,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r1,-416
	ctx.r21.s64 = ctx.r1.s64 + -416;
	// sthx r9,r22,r21
	PPC_STORE_U16(ctx.r22.u32 + ctx.r21.u32, ctx.r9.u16);
loc_832C162C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c17f4
	if (!ctx.cr6.eq) goto loc_832C17F4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c17d8
	if (!ctx.cr6.eq) goto loc_832C17D8;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r11,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_832C1658:
	// and r22,r9,r31
	ctx.r22.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// beq cr6,0x832c1670
	if (ctx.cr6.eq) goto loc_832C1670;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832C1670:
	// rlwinm r22,r8,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r1,-416
	ctx.r21.s64 = ctx.r1.s64 + -416;
	// sthx r9,r22,r21
	PPC_STORE_U16(ctx.r22.u32 + ctx.r21.u32, ctx.r9.u16);
loc_832C167C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1878
	if (!ctx.cr6.eq) goto loc_832C1878;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c185c
	if (!ctx.cr6.eq) goto loc_832C185C;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r11,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r5.u8 & 0x3F));
	// subfic r11,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r7.s64;
loc_832C16A8:
	// and r22,r9,r31
	ctx.r22.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// beq cr6,0x832c16c0
	if (ctx.cr6.eq) goto loc_832C16C0;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832C16C0:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r1,-416
	ctx.r22.s64 = ctx.r1.s64 + -416;
	// sthx r9,r8,r22
	PPC_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r9.u16);
	// b 0x832c1954
	goto loc_832C1954;
loc_832C16D0:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c15dc
	goto loc_832C15DC;
loc_832C16EC:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c173c
	if (!ctx.cr6.eq) goto loc_832C173C;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832c172c
	if (!ctx.cr6.lt) goto loc_832C172C;
	// lwz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r21,r11,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srw r10,r22,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r21.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x832c15b8
	goto loc_832C15B8;
loc_832C172C:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x832c15b8
	goto loc_832C15B8;
loc_832C173C:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c15dc
	goto loc_832C15DC;
loc_832C1754:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c162c
	goto loc_832C162C;
loc_832C1770:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c17c0
	if (!ctx.cr6.eq) goto loc_832C17C0;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832c17b0
	if (!ctx.cr6.lt) goto loc_832C17B0;
	// lwz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r21,r11,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srw r10,r22,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r21.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x832c1608
	goto loc_832C1608;
loc_832C17B0:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x832c1608
	goto loc_832C1608;
loc_832C17C0:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c162c
	goto loc_832C162C;
loc_832C17D8:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c167c
	goto loc_832C167C;
loc_832C17F4:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c1844
	if (!ctx.cr6.eq) goto loc_832C1844;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832c1834
	if (!ctx.cr6.lt) goto loc_832C1834;
	// lwz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r21,r11,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srw r10,r22,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r21.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x832c1658
	goto loc_832C1658;
loc_832C1834:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x832c1658
	goto loc_832C1658;
loc_832C1844:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c167c
	goto loc_832C167C;
loc_832C185C:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c1954
	goto loc_832C1954;
loc_832C1878:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c18c8
	if (!ctx.cr6.eq) goto loc_832C18C8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x832c18b8
	if (!ctx.cr6.lt) goto loc_832C18B8;
	// lwz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r21,r11,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// srw r10,r22,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r21.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x832c16a8
	goto loc_832C16A8;
loc_832C18B8:
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x832c16a8
	goto loc_832C16A8;
loc_832C18C8:
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c1954
	goto loc_832C1954;
loc_832C18E0:
	// subfic r9,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r7.s64;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// srw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r9.u8 & 0x3F));
	// bge cr6,0x832c191c
	if (!ctx.cr6.lt) goto loc_832C191C;
	// lwz r22,0(r6)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r21,r11,r7
	ctx.r21.s64 = ctx.r7.s64 - ctx.r11.s64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// slw r20,r22,r11
	ctx.r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r20,r10
	ctx.r10.u64 = ctx.r20.u64 | ctx.r10.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// srw r10,r22,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r21.u8 & 0x3F));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// b 0x832c1928
	goto loc_832C1928;
loc_832C191C:
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
loc_832C1928:
	// and r22,r9,r31
	ctx.r22.u64 = ctx.r9.u64 & ctx.r31.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// beq cr6,0x832c1940
	if (ctx.cr6.eq) goto loc_832C1940;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_832C1940:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r23.u8);
	// addi r22,r1,-416
	ctx.r22.s64 = ctx.r1.s64 + -416;
	// sthx r9,r8,r22
	PPC_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r9.u16);
loc_832C1950:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_832C1954:
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832c14c0
	if (ctx.cr6.lt) goto loc_832C14C0;
loc_832C195C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// srawi r29,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bgt cr6,0x832c14a4
	if (ctx.cr6.gt) goto loc_832C14A4;
	// stw r10,-460(r1)
	PPC_STORE_U32(ctx.r1.u32 + -460, ctx.r10.u32);
	// stw r11,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r11.u32);
loc_832C1974:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x832c1ce4
	if (ctx.cr6.eq) goto loc_832C1CE4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x832c1ce4
	if (!ctx.cr6.lt) goto loc_832C1CE4;
loc_832C1988:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x832c1cd0
	if (ctx.cr6.eq) goto loc_832C1CD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c19b0
	if (!ctx.cr6.eq) goto loc_832C19B0;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c19bc
	goto loc_832C19BC;
loc_832C19B0:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C19BC:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832c1cd0
	if (ctx.cr6.eq) goto loc_832C1CD0;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bgt cr6,0x832c1cd0
	if (ctx.cr6.gt) goto loc_832C1CD0;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,6636
	ctx.r12.s64 = ctx.r12.s64 + 6636;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_832C19FC;
	case 1:
		goto loc_832C1A10;
	case 2:
		goto loc_832C1A4C;
	case 3:
		goto loc_832C1C88;
	default:
		__builtin_unreachable();
	}
	// lwz r25,6652(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6652);
	// lwz r25,6672(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6672);
	// lwz r25,6732(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 6732);
	// lwz r25,7304(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 7304);
loc_832C19FC:
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// b 0x832c1a58
	goto loc_832C1A58;
loc_832C1A10:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// addi r8,r25,1
	ctx.r8.s64 = ctx.r25.s64 + 1;
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// addi r3,r9,18
	ctx.r3.s64 = ctx.r9.s64 + 18;
	// addi r31,r9,34
	ctx.r31.s64 = ctx.r9.s64 + 34;
	// stb r7,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// addi r9,r9,50
	ctx.r9.s64 = ctx.r9.s64 + 50;
	// stb r3,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r3.u8);
	// stb r31,1(r25)
	PPC_STORE_U8(ctx.r25.u32 + 1, ctx.r31.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r25,r9,1
	ctx.r25.s64 = ctx.r9.s64 + 1;
	// b 0x832c1cd4
	goto loc_832C1CD4;
loc_832C1A4C:
	// stb r23,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r23.u8);
	// rlwinm r7,r8,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_832C1A58:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1a74
	if (!ctx.cr6.eq) goto loc_832C1A74;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r9,31
	ctx.r9.s64 = 31;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1a80
	goto loc_832C1A80;
loc_832C1A74:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_832C1A80:
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x832c1aa0
	if (ctx.cr6.eq) goto loc_832C1AA0;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// b 0x832c1ae0
	goto loc_832C1AE0;
loc_832C1AA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c1abc
	if (!ctx.cr6.eq) goto loc_832C1ABC;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r9,31
	ctx.r9.s64 = 31;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1ac8
	goto loc_832C1AC8;
loc_832C1ABC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_832C1AC8:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r11,r1,-416
	ctx.r11.s64 = ctx.r1.s64 + -416;
	// rlwimi r3,r24,0,31,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r3.u64 & 0xFFFE);
	// sthx r3,r8,r11
	PPC_STORE_U16(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u16);
loc_832C1AE0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c1b00
	if (!ctx.cr6.eq) goto loc_832C1B00;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1b0c
	goto loc_832C1B0C;
loc_832C1B00:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_832C1B0C:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832c1b2c
	if (ctx.cr6.eq) goto loc_832C1B2C;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c1b6c
	goto loc_832C1B6C;
loc_832C1B2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c1b48
	if (!ctx.cr6.eq) goto loc_832C1B48;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1b54
	goto loc_832C1B54;
loc_832C1B48:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_832C1B54:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// addi r9,r1,-416
	ctx.r9.s64 = ctx.r1.s64 + -416;
	// rlwimi r3,r24,0,31,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r3.u64 & 0xFFFE);
	// sthx r3,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u16);
loc_832C1B6C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x832c1b8c
	if (!ctx.cr6.eq) goto loc_832C1B8C;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r9,31
	ctx.r9.s64 = 31;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1b98
	goto loc_832C1B98;
loc_832C1B8C:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_832C1B98:
	// clrlwi r10,r8,31
	ctx.r10.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c1bb8
	if (ctx.cr6.eq) goto loc_832C1BB8;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r10.u8);
	// b 0x832c1bf8
	goto loc_832C1BF8;
loc_832C1BB8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c1bd4
	if (!ctx.cr6.eq) goto loc_832C1BD4;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r9,31
	ctx.r9.s64 = 31;
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1be0
	goto loc_832C1BE0;
loc_832C1BD4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_832C1BE0:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// addi r10,r1,-416
	ctx.r10.s64 = ctx.r1.s64 + -416;
	// rlwimi r3,r24,0,31,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r3.u64 & 0xFFFE);
	// sthx r3,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u16);
loc_832C1BF8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x832c1c18
	if (!ctx.cr6.eq) goto loc_832C1C18;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1c24
	goto loc_832C1C24;
loc_832C1C18:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_832C1C24:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832c1c44
	if (ctx.cr6.eq) goto loc_832C1C44;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// b 0x832c1cd4
	goto loc_832C1CD4;
loc_832C1C44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1c60
	if (!ctx.cr6.eq) goto loc_832C1C60;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1c6c
	goto loc_832C1C6C;
loc_832C1C60:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C1C6C:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r8,r7,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r7,r9
	ctx.r7.s64 = -ctx.r9.s64;
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// rlwimi r7,r24,0,31,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r7.u64 & 0xFFFE);
	// sthx r7,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
	// b 0x832c1cd4
	goto loc_832C1CD4;
loc_832C1C88:
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1ca8
	if (!ctx.cr6.eq) goto loc_832C1CA8;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r10,r9,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1cb4
	goto loc_832C1CB4;
loc_832C1CA8:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C1CB4:
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r23,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r23.u8);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// neg r7,r9
	ctx.r7.s64 = -ctx.r9.s64;
	// addi r3,r1,-416
	ctx.r3.s64 = ctx.r1.s64 + -416;
	// rlwimi r7,r24,0,31,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r24.u32, 0) & 0xFFFFFFFFFFFF0001) | (ctx.r7.u64 & 0xFFFE);
	// sthx r7,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u16);
loc_832C1CD0:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_832C1CD4:
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x832c1988
	if (ctx.cr6.lt) goto loc_832C1988;
	// stw r10,-460(r1)
	PPC_STORE_U32(ctx.r1.u32 + -460, ctx.r10.u32);
	// stw r11,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r11.u32);
loc_832C1CE4:
	// lwz r10,-408(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	// lwz r9,-400(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	// lwz r8,-392(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	// lwz r7,-412(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	// lwz r5,-404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -404);
	// stw r10,-448(r1)
	PPC_STORE_U32(ctx.r1.u32 + -448, ctx.r10.u32);
	// stw r9,-436(r1)
	PPC_STORE_U32(ctx.r1.u32 + -436, ctx.r9.u32);
	// lwz r3,-396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -396);
	// stw r8,-456(r1)
	PPC_STORE_U32(ctx.r1.u32 + -456, ctx.r8.u32);
	// stw r7,-432(r1)
	PPC_STORE_U32(ctx.r1.u32 + -432, ctx.r7.u32);
	// stw r5,-452(r1)
	PPC_STORE_U32(ctx.r1.u32 + -452, ctx.r5.u32);
	// lhz r11,-414(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -414);
	// stw r3,-444(r1)
	PPC_STORE_U32(ctx.r1.u32 + -444, ctx.r3.u32);
	// lwz r17,-296(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	// lwz r18,-304(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r19,-336(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	// sth r11,-440(r1)
	PPC_STORE_U16(ctx.r1.u32 + -440, ctx.r11.u16);
	// lwz r14,-464(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	// lwz r20,-344(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	// stw r17,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r17.u32);
	// lwz r21,-308(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r22,-316(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r23,-348(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r16,-340(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r17,-448(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	// stw r18,-448(r1)
	PPC_STORE_U32(ctx.r1.u32 + -448, ctx.r18.u32);
	// lwz r18,-436(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	// stw r19,-436(r1)
	PPC_STORE_U32(ctx.r1.u32 + -436, ctx.r19.u32);
	// lwz r19,-456(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	// stw r20,-456(r1)
	PPC_STORE_U32(ctx.r1.u32 + -456, ctx.r20.u32);
	// lwz r20,-432(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	// stw r21,-432(r1)
	PPC_STORE_U32(ctx.r1.u32 + -432, ctx.r21.u32);
	// lwz r21,-452(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	// stw r22,-452(r1)
	PPC_STORE_U32(ctx.r1.u32 + -452, ctx.r22.u32);
	// lwz r22,-444(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	// stw r23,-444(r1)
	PPC_STORE_U32(ctx.r1.u32 + -444, ctx.r23.u32);
	// lwz r23,-332(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	// lwz r15,-460(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	// stw r16,-460(r1)
	PPC_STORE_U32(ctx.r1.u32 + -460, ctx.r16.u32);
	// lhz r16,-440(r1)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r1.u32 + -440);
	// lwz r10,-388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	// stw r23,-440(r1)
	PPC_STORE_U32(ctx.r1.u32 + -440, ctx.r23.u32);
	// lwz r23,-300(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r9,-368(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r8,-328(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r7,-384(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	// lwz r5,-376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -376);
	// lwz r3,-364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	// lwz r31,-324(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	// lwz r30,-380(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	// lwz r29,-372(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -372);
	// lwz r28,-360(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r27,-352(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r26,-320(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	// stw r23,-428(r1)
	PPC_STORE_U32(ctx.r1.u32 + -428, ctx.r23.u32);
	// lwz r25,-312(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r24,-356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	// lwz r23,-292(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// stw r15,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r15.u32);
	// stw r14,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r14.u32);
	// sth r16,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r16.u16);
	// stw r17,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// stw r18,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
	// stw r19,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
	// stw r20,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r20.u32);
	// stw r21,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r21.u32);
	// stw r22,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
	// stw r29,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// stw r27,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r27.u32);
	// stw r26,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r26.u32);
	// lwz r10,-444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -444);
	// lwz r9,-452(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	// lwz r8,-432(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -432);
	// lwz r7,-456(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	// lwz r5,-436(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -436);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// stw r8,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// stw r7,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// lwz r3,-448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	// lwz r10,-464(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -464);
	// lwz r9,-460(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	// lwz r8,-440(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -440);
	// lwz r7,-428(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// stw r25,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r25.u32);
	// stw r24,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r24.u32);
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stw r3,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// stw r7,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r7.u32);
	// stw r23,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r23.u32);
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1E88"))) PPC_WEAK_FUNC(sub_832C1E88);
PPC_FUNC_IMPL(__imp__sub_832C1E88) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bcc
	ctx.lr = 0x832C1E90;
	sub_82CA2BCC(ctx, base);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x832c1ed8
	if (!ctx.cr6.lt) goto loc_832C1ED8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// subfic r7,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r7.s64 = 3 - ctx.r11.s64;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// srw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x832c1ee4
	goto loc_832C1EE4;
loc_832C1ED8:
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_832C1EE4:
	// li r6,16
	ctx.r6.s64 = 16;
	// addic. r10,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r10.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r29,96
	ctx.r29.s64 = 96;
	// stb r6,-236(r1)
	PPC_STORE_U8(ctx.r1.u32 + -236, ctx.r6.u8);
	// li r27,176
	ctx.r27.s64 = 176;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r29,-235(r1)
	PPC_STORE_U8(ctx.r1.u32 + -235, ctx.r29.u8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stb r27,-234(r1)
	PPC_STORE_U8(ctx.r1.u32 + -234, ctx.r27.u8);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r28,r1,-236
	ctx.r28.s64 = ctx.r1.s64 + -236;
	// stb r6,-233(r1)
	PPC_STORE_U8(ctx.r1.u32 + -233, ctx.r6.u8);
	// addi r26,r1,-232
	ctx.r26.s64 = ctx.r1.s64 + -232;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// slw r27,r9,r8
	ctx.r27.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// beq 0x832c2394
	if (ctx.cr0.eq) goto loc_832C2394;
loc_832C1F28:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x832c1fa8
	if (!ctx.cr6.gt) goto loc_832C1FA8;
loc_832C1F34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1f50
	if (!ctx.cr6.eq) goto loc_832C1F50;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1f5c
	goto loc_832C1F5C;
loc_832C1F50:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C1F5C:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c1f9c
	if (ctx.cr6.eq) goto loc_832C1F9C;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// lbzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// lbzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x832c1f88
	if (ctx.cr6.lt) goto loc_832C1F88;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C1F88:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r10,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u8);
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
loc_832C1F9C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x832c1f34
	if (ctx.cr6.lt) goto loc_832C1F34;
loc_832C1FA8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x832c2388
	if (!ctx.cr6.lt) goto loc_832C2388;
	// addi r10,r1,-160
	ctx.r10.s64 = ctx.r1.s64 + -160;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_832C1FBC:
	// lbz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x832c237c
	if (ctx.cr6.eq) goto loc_832C237C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c1fe4
	if (!ctx.cr6.eq) goto loc_832C1FE4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c1ff0
	goto loc_832C1FF0;
loc_832C1FE4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C1FF0:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c237c
	if (ctx.cr6.eq) goto loc_832C237C;
	// clrlwi r10,r9,30
	ctx.r10.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x832c237c
	if (ctx.cr6.gt) goto loc_832C237C;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// addi r12,r12,8224
	ctx.r12.s64 = ctx.r12.s64 + 8224;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_832C2030;
	case 1:
		goto loc_832C2044;
	case 2:
		goto loc_832C2080;
	case 3:
		goto loc_832C231C;
	default:
		__builtin_unreachable();
	}
	// lwz r25,8240(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8240);
	// lwz r25,8260(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8260);
	// lwz r25,8320(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8320);
	// lwz r25,8988(r12)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r12.u32 + 8988);
loc_832C2030:
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// b 0x832c208c
	goto loc_832C208C;
loc_832C2044:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r23,r10,2
	ctx.r23.s64 = ctx.r10.s64 + 2;
	// addi r22,r10,18
	ctx.r22.s64 = ctx.r10.s64 + 18;
	// addi r21,r10,34
	ctx.r21.s64 = ctx.r10.s64 + 34;
	// stb r23,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r23.u8);
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
	// stb r22,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r22.u8);
	// stb r21,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r21.u8);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stb r23,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r23.u8);
	// addi r26,r10,1
	ctx.r26.s64 = ctx.r10.s64 + 1;
	// b 0x832c2380
	goto loc_832C2380;
loc_832C2080:
	// stb r25,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r25.u8);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_832C208C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c20a8
	if (!ctx.cr6.eq) goto loc_832C20A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c20b4
	goto loc_832C20B4;
loc_832C20A8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C20B4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c20d4
	if (ctx.cr6.eq) goto loc_832C20D4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x832c212c
	goto loc_832C212C;
loc_832C20D4:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c20fc
	if (!ctx.cr6.eq) goto loc_832C20FC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c2108
	goto loc_832C2108;
loc_832C20FC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C2108:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x832c211c
	if (!ctx.cr6.eq) goto loc_832C211C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C211C:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
loc_832C212C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c214c
	if (!ctx.cr6.eq) goto loc_832C214C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c2158
	goto loc_832C2158;
loc_832C214C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C2158:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c2178
	if (ctx.cr6.eq) goto loc_832C2178;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x832c21d0
	goto loc_832C21D0;
loc_832C2178:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c21a0
	if (!ctx.cr6.eq) goto loc_832C21A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c21ac
	goto loc_832C21AC;
loc_832C21A0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C21AC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x832c21c0
	if (!ctx.cr6.eq) goto loc_832C21C0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C21C0:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
loc_832C21D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c21f0
	if (!ctx.cr6.eq) goto loc_832C21F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c21fc
	goto loc_832C21FC;
loc_832C21F0:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C21FC:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c221c
	if (ctx.cr6.eq) goto loc_832C221C;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x832c2274
	goto loc_832C2274;
loc_832C221C:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c2244
	if (!ctx.cr6.eq) goto loc_832C2244;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c2250
	goto loc_832C2250;
loc_832C2244:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C2250:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x832c2264
	if (!ctx.cr6.eq) goto loc_832C2264;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C2264:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
loc_832C2274:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c2294
	if (!ctx.cr6.eq) goto loc_832C2294;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c22a0
	goto loc_832C22A0;
loc_832C2294:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C22A0:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x832c22c0
	if (ctx.cr6.eq) goto loc_832C22C0;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// stb r10,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r10.u8);
	// b 0x832c2380
	goto loc_832C2380;
loc_832C22C0:
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x832c22e8
	if (!ctx.cr6.eq) goto loc_832C22E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c22f4
	goto loc_832C22F4;
loc_832C22E8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C22F4:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x832c2308
	if (!ctx.cr6.eq) goto loc_832C2308;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C2308:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
	// b 0x832c2380
	goto loc_832C2380;
loc_832C231C:
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x832c2348
	if (!ctx.cr6.eq) goto loc_832C2348;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r11,31
	ctx.r11.s64 = 31;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x832c2354
	goto loc_832C2354;
loc_832C2348:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_832C2354:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// neg r10,r27
	ctx.r10.s64 = -ctx.r27.s64;
	// bne cr6,0x832c2368
	if (!ctx.cr6.eq) goto loc_832C2368;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_832C2368:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// beq cr6,0x832c2394
	if (ctx.cr6.eq) goto loc_832C2394;
	// stb r25,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r25.u8);
loc_832C237C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_832C2380:
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x832c1fbc
	if (ctx.cr6.lt) goto loc_832C1FBC;
loc_832C2388:
	// srawi r27,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 1;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x832c1f28
	if (!ctx.cr0.eq) goto loc_832C1F28;
loc_832C2394:
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x82ca2c1c
	// ERROR 82CA2C1C
	return;
}

__attribute__((alias("__imp__sub_832C23A4"))) PPC_WEAK_FUNC(sub_832C23A4);
PPC_FUNC_IMPL(__imp__sub_832C23A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C23A8"))) PPC_WEAK_FUNC(sub_832C23A8);
PPC_FUNC_IMPL(__imp__sub_832C23A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82ca2bb0
	ctx.lr = 0x832C23B0;
	sub_82CA2BB0(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x832c1e88
	ctx.lr = 0x832C2404;
	sub_832C1E88(ctx, base);
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r21,0(r31)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r27,6(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// lbz r4,7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,115(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// lbz r22,1(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbzx r5,r31,r29
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// lbz r24,4(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r26,5(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r31,3(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r23,117(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// lbz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// lbz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// add r16,r9,r23
	ctx.r16.u64 = ctx.r9.u64 + ctx.r23.u64;
	// lbz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// add r17,r6,r3
	ctx.r17.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r18,124(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// lbz r3,125(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// add r21,r21,r28
	ctx.r21.u64 = ctx.r21.u64 + ctx.r28.u64;
	// lbz r19,118(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 118);
	// add r28,r27,r18
	ctx.r28.u64 = ctx.r27.u64 + ctx.r18.u64;
	// lbz r20,113(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// add r27,r4,r3
	ctx.r27.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r17,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r17.u8);
	// add r17,r8,r7
	ctx.r17.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r16,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r16.u8);
	// add r16,r10,r19
	ctx.r16.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lbz r25,121(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// add r22,r22,r20
	ctx.r22.u64 = ctx.r22.u64 + ctx.r20.u64;
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r25,r9,r5
	ctx.r25.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r21,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r21.u8);
	// stb r22,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r22.u8);
	// lbz r7,126(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lbz r9,127(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// lbz r30,119(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r3,122(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// add r15,r31,r30
	ctx.r15.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r5,123(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r26,1(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r21,2(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r20,3(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r14,r6,r5
	ctx.r14.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lbz r31,5(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r18,6(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbz r6,7(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r23,156(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 156);
	// lbz r30,136(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r3,137(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// stb r5,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r5.u8);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r22,157(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 157);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stb r27,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r27.u8);
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// stb r28,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r28.u8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r24,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r24.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// stb r7,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r7.u8);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lbz r20,133(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lbz r5,129(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r27,81(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r4,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r4.u8);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r19,96(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r16,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r16.u8);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stb r14,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r14.u8);
	// add r16,r5,r4
	ctx.r16.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stb r17,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r17.u8);
	// add r14,r9,r6
	ctx.r14.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stb r15,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r15.u8);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r27,r24,r23
	ctx.r27.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbz r21,138(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// add r22,r19,r22
	ctx.r22.u64 = ctx.r19.u64 + ctx.r22.u64;
	// lbz r18,158(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 158);
	// lbz r20,159(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 159);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r17,139(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 139);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lbz r15,130(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 130);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r23,5(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r19,131(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 131);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lbz r5,135(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 135);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r25,6(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r3,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r3.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r30,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r30.u8);
	// add r30,r31,r15
	ctx.r30.u64 = ctx.r31.u64 + ctx.r15.u64;
	// stb r28,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r28.u8);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// stb r5,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r5.u8);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lbz r20,0(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// stb r25,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r25.u8);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// lbz r21,7(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + ctx.r19.u64;
	// lbz r11,134(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 134);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r24,r6,r5
	ctx.r24.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stb r26,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r26.u8);
	// stb r20,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r20.u8);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lbz r20,1(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// stb r22,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r22.u8);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stb r27,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r27.u8);
	// add r27,r29,r26
	ctx.r27.u64 = ctx.r29.u64 + ctx.r26.u64;
	// stb r16,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r16.u8);
	// stb r20,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r20.u8);
	// stb r14,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r14.u8);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lbz r22,164(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// lbz r24,7(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// lbz r26,141(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 141);
	// lbz r20,2(r9)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r29,140(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 140);
	// lbz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r19,145(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// add r6,r21,r23
	ctx.r6.u64 = ctx.r21.u64 + ctx.r23.u64;
	// lbz r21,165(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 165);
	// lbz r23,161(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 161);
	// lbz r5,82(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r18,3(r9)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r31,83(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r17,4(r9)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// lbz r15,160(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r21,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r23,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r23.u8);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stb r22,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r22.u8);
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// stb r27,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r27.u8);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stb r24,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r24.u8);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stb r25,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r25.u8);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// lbz r16,5(r9)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// lbz r14,6(r9)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// lbzx r20,r9,r7
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbz r19,1(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stb r5,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// lbz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lbz r18,2(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r17,3(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// lbz r15,4(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lbz r16,5(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r21,6(r10)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r23,146(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 146);
	// lbz r25,147(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// lbz r25,167(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 167);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stb r9,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// stb r26,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r26.u8);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lbz r18,163(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 163);
	// stb r28,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r28.u8);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// lbz r14,142(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 142);
	// lbz r4,166(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// lbz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// stb r23,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r23.u8);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lbz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// add r26,r26,r25
	ctx.r26.u64 = ctx.r26.u64 + ctx.r25.u64;
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// lbz r18,6(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r8,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// lbz r29,162(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 162);
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// stb r24,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r24.u8);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stb r18,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r17,148(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r20,1(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r19,149(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 149);
	// lbz r14,2(r10)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r15,4(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r16,5(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r18,7(r10)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// lbz r4,153(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 153);
	// lbz r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// lbz r25,169(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 169);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r29,172(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r26,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r26.u8);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lbz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r27,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r27.u8);
	// add r22,r22,r21
	ctx.r22.u64 = ctx.r22.u64 + ctx.r21.u64;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// stb r28,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r28.u8);
	// stb r30,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r30.u8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// add r7,r5,r17
	ctx.r7.u64 = ctx.r5.u64 + ctx.r17.u64;
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// stb r9,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// clrlwi r30,r6,24
	ctx.r30.u64 = ctx.r6.u32 & 0xFF;
	// stb r22,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r22.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r24,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r24.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r17,82(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// stb r4,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r4.u8);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lbz r21,173(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 173);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// lbz r30,174(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 174);
	// lbz r3,175(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 175);
	// add r24,r20,r19
	ctx.r24.u64 = ctx.r20.u64 + ctx.r19.u64;
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// lbz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r22,1(r10)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r20,2(r10)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// lbz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r26,170(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 170);
	// lbz r28,171(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 171);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r19,3(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r17,4(r10)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// clrlwi r31,r26,24
	ctx.r31.u64 = ctx.r26.u32 & 0xFF;
	// lbz r25,150(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 150);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lbz r14,151(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// lbz r18,154(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 154);
	// lbz r21,155(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 155);
	// stb r4,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// clrlwi r6,r30,24
	ctx.r6.u64 = ctx.r30.u32 & 0xFF;
	// stb r24,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r24.u8);
	// stb r27,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r27.u8);
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// stb r5,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r5.u8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r15,5(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// add r8,r25,r23
	ctx.r8.u64 = ctx.r25.u64 + ctx.r23.u64;
	// lbz r16,6(r10)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// stb r26,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r26.u8);
	// add r26,r22,r14
	ctx.r26.u64 = ctx.r22.u64 + ctx.r14.u64;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// add r28,r20,r18
	ctx.r28.u64 = ctx.r20.u64 + ctx.r18.u64;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// add r30,r19,r21
	ctx.r30.u64 = ctx.r19.u64 + ctx.r21.u64;
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// add r3,r17,r31
	ctx.r3.u64 = ctx.r17.u64 + ctx.r31.u64;
	// lbz r10,7(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// add r5,r15,r4
	ctx.r5.u64 = ctx.r15.u64 + ctx.r4.u64;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r4,r16,r6
	ctx.r4.u64 = ctx.r16.u64 + ctx.r6.u64;
	// stb r26,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r26.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r28,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r28.u8);
	// stb r30,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r30.u8);
	// stb r3,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r3.u8);
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82ca2c00
	sub_82CA2C00(ctx, base);
	return;
}

