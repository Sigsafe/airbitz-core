/*
 * Copyright (c) 2014, AirBitz, Inc.
 * All rights reserved.
 *
 * See the LICENSE file for more information.
 */
/**
 * @file
 * Password-based login logic.
 */

#ifndef ABC_LoginPassword_h
#define ABC_LoginPassword_h

#include "Login.hpp"
#include "../../src/ABC.h"

namespace abcd {

tABC_CC ABC_LoginPassword(Login *&result,
                          Lobby *lobby,
                          const char *szPassword,
                          tABC_Error *pError);

tABC_CC ABC_LoginPasswordSet(Login &login,
                             const char *szPassword,
                             tABC_Error *pError);

tABC_CC ABC_LoginPasswordOk(Login &login,
                            const char *szPassword,
                            bool *pOk,
                            tABC_Error *pError);

} // namespace abcd

#endif
