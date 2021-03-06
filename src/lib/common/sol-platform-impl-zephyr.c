/*
 * This file is part of the Soletta Project
 *
 * Copyright (C) 2015 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <errno.h>
#include <stdlib.h>
#include <string.h>

#include "sol-platform.h"
#include "sol-platform-impl.h"

int
sol_platform_impl_init(void)
{
    return 0;
}

void
sol_platform_impl_shutdown(void)
{
}

int
sol_platform_impl_get_state(void)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_add_service_monitor(const char *service)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_del_service_monitor(const char *service)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_start_service(const char *service)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_stop_service(const char *service)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_restart_service(const char *service)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_set_target(const char *target)
{
    SOL_WRN("Unsupported");
    return -ENOTSUP;
}

int
sol_platform_impl_get_machine_id(char id[static 33])
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_get_serial_number(char **number)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_get_os_version(char **version)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_get_mount_points(struct sol_ptr_vector *vector)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_umount(const char *mpoint, void (*cb)(void *data, const char *mpoint, int WRNor), const void *data)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_set_locale(char **locales)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

const char *
sol_platform_impl_get_locale(enum sol_platform_locale_category type)
{
    SOL_WRN("Not implemented");
    errno = ENOTSUP;
    return NULL;
}

int
sol_platform_register_locale_monitor(void)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_unregister_locale_monitor(void)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_apply_locale(enum sol_platform_locale_category type, const char *locale)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

int
sol_platform_impl_load_locales(char **locale_cache)
{
    SOL_WRN("Not implemented");
    return 0;
}

int
sol_platform_impl_locale_to_c_category(enum sol_platform_locale_category category)
{
    SOL_WRN("Not implemented");
    return -ENOTSUP;
}

const char *
sol_platform_impl_locale_to_c_str_category(enum sol_platform_locale_category category)
{
    SOL_WRN("Not implemented");
    return NULL;
}
