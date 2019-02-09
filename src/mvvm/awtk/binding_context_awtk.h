﻿/**
 * File:   binding_context_awtk.h
 * Author: AWTK Develop Team
 * Brief:  binding context awtk
 *
 * Copyright (c) 2019 - 2019  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2019-01-30 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_BINDING_CONTEXT_AWTK_H
#define TK_BINDING_CONTEXT_AWTK_H

#include "base/widget.h"
#include "mvvm/base/binding_context.h"

BEGIN_C_DECLS

/**
 * @method binding_context_create
 * 创建binding_context对象，负责绑定AWTK控件于模型。
 *
 * @return {binding_context_t*} 返回binding_context对象。
 */
binding_context_t* binding_context_create(void);

END_C_DECLS

#endif /*TK_BINDING_CONTEXT_AWTK_H*/
