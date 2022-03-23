# Copyright (C) metraTec GmbH - All Rights Reserved
# Unauthorized copying of this file, via any medium is strictly prohibited
# Proprietary and confidential
# Written by Gerhard Jörges <joerges@metratec.com>, March 2022

cmake_minimum_required(VERSION 3.22.1)

# Find Zephyr. This also loads Zephyr's build system.
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(app)

# treat warnings as errors in project files
zephyr_library_compile_options(-Wall -Werror)

# Add your source file to the "app" target. This must come after
# find_package(Zephyr) which defines the target.
target_sources(app PRIVATE
    src/main.c
)
