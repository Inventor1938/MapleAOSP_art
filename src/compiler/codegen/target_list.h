ArmConditionCode oatArmConditionEncoding(ConditionCode code);
AssemblerStatus oatAssembleInstructions(CompilationUnit* cUnit, uintptr_t startAddr);
bool doubleReg(int reg);
bool fpReg(int reg);
bool genAddLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genAndLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genArithOpDouble(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genArithOpFloat(CompilationUnit *cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genArithOpFloat(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genCmpFP(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genConversion(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc);
bool genInlinedCas32(CompilationUnit* cUnit, CallInfo* info, bool need_write_barrier);
bool genInlinedMinMaxInt(CompilationUnit *cUnit, CallInfo* info, bool isMin);
bool genInlinedSqrt(CompilationUnit* cUnit, CallInfo* info);
bool genNegLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
bool genOrLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genSubLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool genXorLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool oatArchInit();
bool oatArchVariantInit(void);
bool oatIsFpReg(int reg);
bool sameRegType(int reg1, int reg2);
bool singleReg(int reg);
bool smallLiteralDivide(CompilationUnit* cUnit, Instruction::Code dalvikOpcode, RegLocation rlSrc, RegLocation rlDest, int lit);
char* decodeFPCSRegList(int count, int base, char* buf);
char* decodeRegList(int opcode, int vector, char* buf);
RegisterInfo* oatGetRegInfo(CompilationUnit* cUnit, int reg);
RegLocation oatGetReturnAlt(CompilationUnit* cUnit);
RegLocation oatGetReturnWideAlt(CompilationUnit* cUnit);
void oatClobberCalleeSave(CompilationUnit *cUnit);
void oatFreeCallTemps(CompilationUnit* cUnit);
void oatLockCallTemps(CompilationUnit* cUnit);
InstructionSet oatInstructionSet();
int encodeImmDoubleHigh(int value);
int encodeImmDouble(int valLo, int valHi);
int encodeImmSingle(int value);
int encodeShift(int code, int amount);
int expandImmediate(int value);
int inPosition(CompilationUnit* cUnit, int sReg);
int leadingZeros(uint32_t val);
int loadHelper(CompilationUnit* cUnit, int offset);
int modifiedImmediate(uint32_t value);
int oatAllocTypedTemp(CompilationUnit* cUnit, bool fpHint, int regClass);
int oatAllocTypedTempPair(CompilationUnit* cUnit, bool fpHint, int regClass);
int oatAssignInsnOffsets(CompilationUnit* cUnit);
int oatGetInsnSize(LIR* lir);
int s2d(int lowReg, int highReg);
int targetReg(SpecialTargetRegister reg);
LIR* fpRegCopy(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* genRegMemCheck(CompilationUnit* cUnit, ConditionCode cCode, int reg1, int base, int offset, ThrowKind kind);
LIR* loadBaseDispBody(CompilationUnit* cUnit, int rBase, int displacement, int rDest, int rDestHi, OpSize size, int sReg);
LIR* loadBaseDisp(CompilationUnit* cUnit, int rBase, int displacement, int rDest, OpSize size, int sReg);
LIR* loadBaseDispWide(CompilationUnit* cUnit, int rBase, int displacement, int rDestLo, int rDestHi, int sReg);
LIR* loadBaseIndexed(CompilationUnit* cUnit, int rBase, int rIndex, int rDest, int scale, OpSize size);
LIR* loadBaseIndexedDisp(CompilationUnit *cUnit, int rBase, int rIndex, int scale, int displacement, int rDest, int rDestHi, OpSize size, int sReg);
LIR* loadConstantNoClobber(CompilationUnit* cUnit, int rDest, int value);
LIR* loadConstantValueWide(CompilationUnit* cUnit, int rDestLo, int rDestHi, int valLo, int valHi);
LIR* loadFPConstantValue(CompilationUnit* cUnit, int rDest, int value);
LIR* loadMultiple(CompilationUnit *cUnit, int rBase, int rMask);
LIR* opBranchUnconditional(CompilationUnit* cUnit, OpKind op);
LIR* opCmpBranch(CompilationUnit* cUnit, ConditionCode cond, int src1, int src2, LIR* target);
LIR* opCmpImmBranch(CompilationUnit* cUnit, ConditionCode cond, int reg, int checkValue, LIR* target);
LIR* opCondBranch(CompilationUnit* cUnit, ConditionCode cc, LIR* target);
LIR* opDecAndBranch(CompilationUnit* cUnit, ConditionCode cCode, int reg, LIR* target);
LIR* opIT(CompilationUnit* cUnit, ArmConditionCode cond, const char* guide);
LIR* opMem(CompilationUnit* cUnit, OpKind op, int rBase, int disp);
LIR* opPcRelLoad(CompilationUnit* cUnit, int reg, LIR* target);
LIR* opReg(CompilationUnit* cUnit, OpKind op, int rDestSrc);
LIR* opRegCopy(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* opRegCopyNoInsert(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* opRegImm(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int value);
LIR* opRegMem(CompilationUnit* cUnit, OpKind op, int rDest, int rBase, int offset);
LIR* opRegReg(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int rSrc2);
LIR* opRegRegImm(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int value);
LIR* opRegRegReg(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int rSrc2);
LIR* opRegRegRegShift(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int rSrc2, int shift);
LIR* opRegRegShift(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int rSrc2, int shift);
LIR* opTestSuspend(CompilationUnit* cUnit, LIR* target);
LIR* opThreadMem(CompilationUnit* cUnit, OpKind op, int threadOffset);
LIR* opVldm(CompilationUnit* cUnit, int rBase, int count);
LIR* opVstm(CompilationUnit* cUnit, int rBase, int count);
LIR* storeBaseDispBody(CompilationUnit* cUnit, int rBase, int displacement, int rSrc, int rSrcHi, OpSize size);
LIR* storeBaseDisp(CompilationUnit* cUnit, int rBase, int displacement, int rSrc, OpSize size);
LIR* storeBaseDispWide(CompilationUnit* cUnit, int rBase, int displacement, int rSrcLo, int rSrcHi);
LIR* storeBaseIndexed(CompilationUnit* cUnit, int rBase, int rIndex, int rSrc, int scale, OpSize size);
LIR* storeBaseIndexedDisp(CompilationUnit *cUnit, int rBase, int rIndex, int scale, int displacement, int rSrc, int rSrcHi, OpSize size, int sReg);
LIR* storeMultiple(CompilationUnit *cUnit, int rBase, int rMask);
MIR* getNextMir(CompilationUnit* cUnit, BasicBlock** pBb, MIR* mir);
MIR* specialIdentity(CompilationUnit* cUnit, MIR* mir);
MIR* specialIGet(CompilationUnit* cUnit, BasicBlock** bb, MIR* mir, OpSize size, bool longOrDouble, bool isObject);
MIR* specialIPut(CompilationUnit* cUnit, BasicBlock** bb, MIR* mir, OpSize size, bool longOrDouble, bool isObject);
RegLocation argLoc(CompilationUnit* cUnit, RegLocation loc);
RegLocation genDivRem(CompilationUnit* cUnit, RegLocation rlDest, int regLo, int regHi, bool isDiv);
RegLocation genDivRemLit(CompilationUnit* cUnit, RegLocation rlDest, int regLo, int lit, bool isDiv);
RegLocation loadArg(CompilationUnit* cUnit, RegLocation loc);
RegLocation locCReturn();
RegLocation locCReturnDouble();
RegLocation locCReturnFloat();
RegLocation locCReturnWide();
std::string buildInsnString(const char* fmt, LIR* lir, unsigned char* baseAddr);
uint64_t getRegMaskCommon(CompilationUnit* cUnit, int reg);
uint32_t fpRegMask();
uint32_t oatFpRegMask();
uint64_t getPCUseDefEncoding();
void convertShortToLongBranch(CompilationUnit* cUnit, LIR* lir);
void freeRegLocTemps(CompilationUnit* cUnit, RegLocation rlKeep, RegLocation rlFree);
void genCmpLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
void genDivZeroCheck(CompilationUnit* cUnit, int regLo, int regHi);
void genEntrySequence(CompilationUnit* cUnit, RegLocation* argLocs, RegLocation rlMethod);
void genExitSequence(CompilationUnit* cUnit);
void genFillArrayData(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void genFusedFPCmpBranch(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir, bool gtBias, bool isDouble);
void genFusedLongCmpBranch(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir);
void genMonitorEnter(CompilationUnit* cUnit, int optFlags, RegLocation rlSrc);
void genMonitorExit(CompilationUnit* cUnit, int optFlags, RegLocation rlSrc);
void genMultiplyByTwoBitMultiplier(CompilationUnit* cUnit, RegLocation rlSrc, RegLocation rlResult, int lit, int firstBit, int secondBit);
void genNegDouble(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
void genNegFloat(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
void genPackedSwitch(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void genPrintLabel(CompilationUnit *cUnit, MIR* mir);
void genSparseSwitch(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void genSpecialCase(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir, SpecialCaseHandler specialCase);
void loadPair(CompilationUnit* cUnit, int base, int lowReg, int highReg);
void lockLiveArgs(CompilationUnit* cUnit, MIR* mir);
void markGCCard(CompilationUnit* cUnit, int valReg, int tgtAddrReg);
void oatAdjustSpillMask(CompilationUnit* cUnit);
void oatClobberCalleeSave(CompilationUnit *cUnit);
void oatDumpResourceMask(LIR* lir, uint64_t mask, const char* prefix);
void oatFlushReg(CompilationUnit* cUnit, int reg);
void oatFlushRegWide(CompilationUnit* cUnit, int reg1, int reg2);
void oatGenMemBarrier(CompilationUnit* cUnit, int barrierKind);
void oatInitializeRegAlloc(CompilationUnit* cUnit);
void oatMarkPreservedSingle(CompilationUnit* cUnit, int vReg, int reg);
void oatNopLIR( LIR* lir);
void opLea(CompilationUnit* cUnit, int rBase, int reg1, int reg2, int scale, int offset);
void opRegCopyWide(CompilationUnit* cUnit, int destLo, int destHi, int srcLo, int srcHi);
void opRegThreadMem(CompilationUnit* cUnit, OpKind op, int rDest, int threadOffset);
void opTlsCmp(CompilationUnit* cUnit, int offset, int val);
bool branchUnconditional(LIR* lir);
void setupTargetResourceMasks(CompilationUnit* cUnit, LIR* lir);
void spillCoreRegs(CompilationUnit* cUnit);
void unSpillCoreRegs(CompilationUnit* cUnit);
X86ConditionCode oatX86ConditionEncoding(ConditionCode cond);
