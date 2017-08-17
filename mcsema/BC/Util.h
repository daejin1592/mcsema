/*
 * Copyright (c) 2017 Trail of Bits, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MCSEMA_BC_UTIL_H_
#define MCSEMA_BC_UTIL_H_

#include <cstdint>
#include <list>
#include <vector>

#include "mcsema/CFG/CFG.h"

namespace llvm {

class BasicBlock;
class ConstantInt;
class LLVMContext;
class Module;

}  // namespace llvm
namespace mcsema {

extern llvm::LLVMContext *gContext;
extern llvm::Module *gModule;

// Return the type of a lifted function.
llvm::FunctionType *LiftedFunctionType(void);


}  // namespace mcsema

#endif  // MCSEMA_BC_UTIL_H_
