#ifndef __MOCK_LIBRANDOM_H__
#define __MOCK_LIBRANDOM_H__

#include "librandom.h"
#include "cmock/cmock.h"

DECLARE_FUNCTION_MOCK1(MOCK_LIBRANDOM, generate_random_number, int(int));

#endif
