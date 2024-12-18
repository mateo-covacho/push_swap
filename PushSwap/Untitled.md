--------------------------------------------------------------------------------
Profile data file 'callgrind.out.131463' (creator: callgrind-3.23.0)
--------------------------------------------------------------------------------
I1 cache: 
D1 cache: 
LL cache: 
Timerange: Basic block 0 - 38487
Trigger: Program termination
Profiled target:  ./push_swap 2 1 3 6 5 (PID 131463, part 1)
Events recorded:  Ir
Events shown:     Ir
Event sort order: Ir
Thresholds:       99
Include dirs:     
User annotated:   
Auto-annotation:  on

--------------------------------------------------------------------------------
Ir               
--------------------------------------------------------------------------------
188,139 (100.0%)  PROGRAM TOTALS

--------------------------------------------------------------------------------
Ir               file:function
--------------------------------------------------------------------------------

54,573 (29.01%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
54,573 (29.01%)  *  ???:__GI___tunables_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

36,732 (19.52%)  < ???:_dl_lookup_symbol_x (99x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
26,439 (14.05%)  *  ???:do_lookup_x [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
10,293 ( 5.47%)  >   ???:check_match (94x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

78,674 (41.82%)  < ???:dl_main (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
25,841 (13.74%)  *  ???:_dl_relocate_object [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
51,649 (27.45%)  >   ???:_dl_lookup_symbol_x (91x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   124 ( 0.07%)  >   ???:_dl_protect_relro (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    56 ( 0.03%)  >   ???:strnlen (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    56 ( 0.03%)  >   ???:wcschr (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    52 ( 0.03%)  >   ???:wmemchr (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    32 ( 0.02%)  >   ???:__x86_cacheinfo (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    28 ( 0.01%)  >   ???:strchrnul (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    28 ( 0.01%)  >   ???:rindex (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    28 ( 0.01%)  >   ???:memrchr (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    28 ( 0.01%)  >   ???:strlen (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    28 ( 0.01%)  >   ???:wcscmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    27 ( 0.01%)  >   ???:memset (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    27 ( 0.01%)  >   ???:__memset_chk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    26 ( 0.01%)  >   ???:bcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    26 ( 0.01%)  >   ???:memchr (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    26 ( 0.01%)  >   ???:wmemcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:memcpy@@GLIBC_2.14 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:mempcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:memmove (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:__memmove_chk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:__memcpy_chk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    25 ( 0.01%)  >   ???:__mempcpy_chk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:strcasecmp_l (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:strncasecmp_l (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:strncasecmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:strncmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:wmemset (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:strcasecmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    22 ( 0.01%)  >   ???:wcsnlen (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    22 ( 0.01%)  >   ???:strcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    22 ( 0.01%)  >   ???:wcslen (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:wcpncpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:wcscat (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:wcsncpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:index (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:strncpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    21 ( 0.01%)  >   ???:stpncpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    19 ( 0.01%)  >   ???:strcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    19 ( 0.01%)  >   ???:stpcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    19 ( 0.01%)  >   ???:wcscpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    19 ( 0.01%)  >   ???:strcat (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     8 ( 0.00%)  >   ???:strspn (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     8 ( 0.00%)  >   ???:strpbrk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     8 ( 0.00%)  >   ???:strcspn (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     6 ( 0.00%)  >   ???:__x86_cpu_features (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

51,649 (27.45%)  < ???:_dl_relocate_object (91x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,219 ( 1.18%)  < ???:lookup_malloc_symbol (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,079 ( 1.11%)  < ???:_dl_fixup (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
19,215 (10.21%)  *  ???:_dl_lookup_symbol_x [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
36,732 (19.52%)  >   ???:do_lookup_x (99x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 4,764 ( 2.53%)  < ???:check_match (130x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,283 ( 0.68%)  < ???:_dl_name_match_p (32x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   282 ( 0.15%)  < ???:_dl_check_map_versions (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    75 ( 0.04%)  < ???:_dl_map_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  < ???:_dl_map_object_from_fd (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    22 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 6,476 ( 3.44%)  *  ???:strcmp [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

10,293 ( 5.47%)  < ???:do_lookup_x (94x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   555 ( 0.29%)  < ???:_dl_lookup_direct (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 6,084 ( 3.23%)  *  ???:check_match [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,764 ( 2.53%)  >   ???:strcmp (130x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 5,440 ( 2.89%)  < ???:handle_intel.constprop.0 (24x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 5,440 ( 2.89%)  *  ???:intel_check_word.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 3,929 ( 2.09%)  < ???:_dl_check_all_versions (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,668 ( 1.42%)  *  ???:_dl_check_map_versions [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   798 ( 0.42%)  >   ???:_dl_name_match_p (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   282 ( 0.15%)  >   ???:strcmp (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   126 ( 0.07%)  >   ???:__minimal_calloc (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    55 ( 0.03%)  >   ???:strncmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 4,617 ( 2.45%)  < ???:_dl_map_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,610 ( 1.39%)  *  ???:_dl_map_object_from_fd [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,015 ( 0.54%)  >   ???:_dl_new_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   287 ( 0.15%)  >   ???:memset (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   248 ( 0.13%)  >   ???:mmap (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   160 ( 0.09%)  >   ???:_dl_process_pt_gnu_property (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    96 ( 0.05%)  >   ???:_dl_add_to_namespace_list (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    66 ( 0.04%)  >   ???:_dl_setup_hash (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  >   ???:strcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    20 ( 0.01%)  >   ???:_dl_audit_objopen (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    20 ( 0.01%)  >   ???:_dl_debug_update (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    20 ( 0.01%)  >   ???:fstat (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    19 ( 0.01%)  >   ???:_dl_assign_tls_modid (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    18 ( 0.01%)  >   ???:__GI___close_nocancel (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  >   ???:__pread64_nocancel (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

106,402 (56.55%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,423 ( 0.76%)  *  ???:dl_main [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
78,674 (41.82%)  >   ???:_dl_relocate_object (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 6,079 ( 3.23%)  >   ???:_dl_map_object_deps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 5,182 ( 2.75%)  >   ???:_dl_init_paths (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,044 ( 2.15%)  >   ???:_dl_receive_error (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 3,646 ( 1.94%)  >   ???:handle_preload_list (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,520 ( 1.34%)  >   ???:__rtld_malloc_init_real (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,229 ( 0.65%)  >   ???:_dl_next_ld_env_entry (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   926 ( 0.49%)  >   ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   642 ( 0.34%)  >   ???:_dl_call_libc_early_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   630 ( 0.33%)  >   ???:_dl_find_object_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   589 ( 0.31%)  >   ???:__rtld_mutex_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   300 ( 0.16%)  >   ???:_dl_new_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   150 ( 0.08%)  >   ???:_dl_allocate_tls_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    64 ( 0.03%)  >   ???:_dl_process_pt_gnu_property (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    38 ( 0.02%)  >   ???:_dl_debug_initialize (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    37 ( 0.02%)  >   ???:_dl_add_to_namespace_list (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    35 ( 0.02%)  >   ???:_dl_add_to_slotinfo (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    33 ( 0.02%)  >   ???:_dl_setup_hash (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  >   ???:_dl_cet_check (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  >   ???:_dl_audit_activity_map (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  >   ???:strcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    18 ( 0.01%)  >   ???:__tls_pre_init_tp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  >   ???:access (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  >   ???:_dl_audit_activity_nsid (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    10 ( 0.01%)  >   ???:_dl_debug_update (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    10 ( 0.01%)  >   ???:_dl_count_modids (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    10 ( 0.01%)  >   ???:_dl_unload_cache (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
     4 ( 0.00%)  >   ???:_dl_debug_state (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
     2 ( 0.00%)  >   ???:_dl_sysdep_start_cleanup (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,412 ( 0.75%)  < ???:fillin_rpath.isra.0 (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,412 ( 0.75%)  *  ???:strsep [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,280 ( 0.68%)  < ???:free (20x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
 1,280 ( 0.68%)  *  ???:_int_free [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 1,229 ( 0.65%)  < ???:dl_main (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,229 ( 0.65%)  *  ???:_dl_next_ld_env_entry [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   589 ( 0.31%)  < ???:0x0000000004868780 (20x) [???]
   318 ( 0.17%)  < ???:init_cpu_features.constprop.0 (11x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    58 ( 0.03%)  < ???:_dl_tls_static_surplus_init (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    30 ( 0.02%)  < ???:__tls_init_tp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    30 ( 0.02%)  < ???:__set_vma_name (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    30 ( 0.02%)  < ???:_dl_sort_maps_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,055 ( 0.56%)  *  ???:__tunable_get_val [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 3,482 ( 1.85%)  < ???:_dl_init_paths (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,052 ( 0.56%)  *  ???:decompose_rpath [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,244 ( 1.19%)  >   ???:fillin_rpath.isra.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   145 ( 0.08%)  >   ???:strdup (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  >   ???:__minimal_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    10 ( 0.01%)  >   ???:__minimal_free (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   957 ( 0.51%)  < ???:malloc (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   395 ( 0.21%)  < ???:tcache_init.part.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
 1,040 ( 0.55%)  *  ???:_int_malloc [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   256 ( 0.14%)  >   ???:sysmalloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    56 ( 0.03%)  >   ???:alloc_perturb (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 6,079 ( 3.23%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,029 ( 0.55%)  *  ???:_dl_map_object_deps [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,430 ( 2.35%)  >   ???:_dl_catch_exception (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   312 ( 0.17%)  >   ???:_dl_sort_maps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   112 ( 0.06%)  >   ???:_dl_dst_count (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    93 ( 0.05%)  >   ???:__minimal_malloc (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    55 ( 0.03%)  >   ???:memcpy (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  >   ???:__libc_scratch_buffer_set_array_size (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,955 ( 1.04%)  < src/parse.c:arg_parse (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   900 ( 0.48%)  < src/stack_utils.c:push_stack (9x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   392 ( 0.21%)  < ???:ft_split (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   374 ( 0.20%)  < ???:allocate (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   926 ( 0.49%)  *  ???:malloc [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
 1,226 ( 0.65%)  >   ???:ptmalloc_init.part.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   957 ( 0.51%)  >   ???:_int_malloc (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   512 ( 0.27%)  >   ???:tcache_init.part.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   885 ( 0.47%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   885 ( 0.47%)  *  ???:_dl_sysdep_parse_arguments [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   371 ( 0.20%)  < ???:__minimal_calloc (8x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   124 ( 0.07%)  < ???:strdup (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    99 ( 0.05%)  < ???:_dl_allocate_tls_storage (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    93 ( 0.05%)  < ???:_dl_map_object_deps (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  < ???:_dl_init_paths (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  < ???:_dl_important_hwcaps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  < ???:_dl_new_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  < ???:open_path (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  < ???:_dl_find_object_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  < ???:decompose_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  < ???:fillin_rpath.isra.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   860 ( 0.46%)  *  ???:__minimal_malloc [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    75 ( 0.04%)  >   ???:__set_vma_name (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  >   ???:mmap (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,226 ( 0.65%)  < ???:malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   852 ( 0.45%)  *  ???:ptmalloc_init.part.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   374 ( 0.20%)  >   ???:0x0000000004868780 (12x) [???]

 1,080 ( 0.57%)  < src/parse.c:check_range (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   690 ( 0.37%)  *  ???:ft_atoll [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   210 ( 0.11%)  >   ???:ft_isdigit (20x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   180 ( 0.10%)  >   ???:ft_isspace (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

 1,015 ( 0.54%)  < ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   300 ( 0.16%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   678 ( 0.36%)  *  ???:_dl_new_object [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   249 ( 0.13%)  >   ???:__minimal_calloc (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   216 ( 0.11%)  >   ???:strlen (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    62 ( 0.03%)  >   ???:__minimal_malloc (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    58 ( 0.03%)  >   ???:mempcpy (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    52 ( 0.03%)  >   ???:memcpy (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   234 ( 0.12%)  < ???:strdup (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   216 ( 0.11%)  < ???:_dl_new_object (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    87 ( 0.05%)  < ???:fillin_rpath.isra.0 (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    51 ( 0.03%)  < ???:_dl_hwcaps_split (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    28 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    17 ( 0.01%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    17 ( 0.01%)  < ???:_dl_map_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   650 ( 0.35%)  *  ???:strlen [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

170,257 (90.50%)  < ???:0x000000000001c840 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   591 ( 0.31%)  *  ???:_dl_start [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
169,622 (90.16%)  >   ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    33 ( 0.02%)  >   ???:_dl_setup_hash (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    11 ( 0.01%)  >   ???:__rtld_malloc_init_stubs (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   930 ( 0.49%)  < ???:free_2d (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   837 ( 0.44%)  < src/stack_utils.c:pop_stack (9x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    93 ( 0.05%)  < src/push_swap.c:main (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   580 ( 0.31%)  *  ???:free [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
 1,280 ( 0.68%)  >   ???:_int_free (20x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   278 ( 0.15%)  < ???:_dl_dst_count (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   216 ( 0.11%)  < ???:_dl_hwcaps_split (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  < ???:_dl_map_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    21 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   563 ( 0.30%)  *  ???:index [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 5,992 ( 3.18%)  < ???:init_cpu_features.constprop.0 (12x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   552 ( 0.29%)  *  ???:handle_intel.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 5,440 ( 2.89%)  >   ???:intel_check_word.constprop.0 (24x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 7,628 ( 4.05%)  < ???:_dl_x86_init_cpu_features (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   466 ( 0.25%)  *  ???:init_cpu_features.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 5,992 ( 3.18%)  >   ???:handle_intel.constprop.0 (12x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   318 ( 0.17%)  >   ???:__tunable_get_val (11x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   318 ( 0.17%)  >   ???:__GI___tunable_set_val (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   236 ( 0.13%)  >   ???:get_common_cache_info.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   220 ( 0.12%)  >   ???:update_active.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    78 ( 0.04%)  >   ???:get_common_indices.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   459 ( 0.24%)  *  src/parse.c:check_digits [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   120 ( 0.06%)  >   ???:ft_isdigit (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   705 ( 0.37%)  < ???:_dl_hwcaps_split_masked (14x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    15 ( 0.01%)  < ???:_dl_important_hwcaps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   453 ( 0.24%)  *  ???:_dl_hwcaps_split [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   216 ( 0.11%)  >   ???:index (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    51 ( 0.03%)  >   ???:strlen (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   440 ( 0.23%)  < ???:handle_preload_list (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
     8 ( 0.00%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   448 ( 0.24%)  *  ???:strcspn [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   210 ( 0.11%)  < ???:ft_atoll (20x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   120 ( 0.06%)  < src/parse.c:check_digits (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   105 ( 0.06%)  < ???:ft_atoi (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   435 ( 0.23%)  *  ???:ft_isdigit [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

 2,511 ( 1.33%)  < ???:_dl_runtime_resolve_xsave (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   432 ( 0.23%)  *  ???:_dl_fixup [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,079 ( 1.11%)  >   ???:_dl_lookup_symbol_x (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 4,244 ( 2.26%)  < ???:openaux (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,971 ( 1.58%)  < ???:map_doit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   427 ( 0.23%)  *  ???:_dl_map_object [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,617 ( 2.45%)  >   ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   900 ( 0.48%)  >   ???:_dl_name_match_p (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   703 ( 0.37%)  >   ???:open_path (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   293 ( 0.16%)  >   ???:expand_dynamic_string_token (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   120 ( 0.06%)  >   ???:open_verify.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    75 ( 0.04%)  >   ???:strcmp (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    48 ( 0.03%)  >   ???:index (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    17 ( 0.01%)  >   ???:strlen (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    15 ( 0.01%)  >   ???:cache_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   900 ( 0.48%)  < ???:_dl_map_object (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   798 ( 0.42%)  < ???:_dl_check_map_versions (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   415 ( 0.22%)  *  ???:_dl_name_match_p [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,283 ( 0.68%)  >   ???:strcmp (32x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 1,129 ( 0.60%)  < ???:ft_split (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   410 ( 0.22%)  *  ???:allocate [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   374 ( 0.20%)  >   ???:malloc (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   345 ( 0.18%)  >   ???:ft_strlcpy (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   287 ( 0.15%)  < ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    28 ( 0.01%)  < ???:_dl_init_paths (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    27 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  < ???:_dl_allocate_tls_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    18 ( 0.01%)  < ???:__minimal_free (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   385 ( 0.20%)  *  ???:memset [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   340 ( 0.18%)  < ???:ft_split (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   340 ( 0.18%)  *  ???:ft_wcount [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   500 ( 0.27%)  < ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   338 ( 0.18%)  *  ???:_dl_allocate_tls_storage [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    99 ( 0.05%)  >   ???:__minimal_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    63 ( 0.03%)  >   ???:allocate_dtv (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   168 ( 0.09%)  < src/instructions.c:push (12x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    84 ( 0.04%)  < src/instructions.c:rotate (6x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    42 ( 0.02%)  < src/instructions.c:reverse_rotate (3x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    42 ( 0.02%)  < src/instructions.c:swap (3x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   336 ( 0.18%)  *  ???:write [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   530 ( 0.28%)  < src/parse.c:arg_parse (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   335 ( 0.18%)  *  ???:ft_atoi [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   105 ( 0.06%)  >   ???:ft_isdigit (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    90 ( 0.05%)  >   ???:ft_isspace (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   334 ( 0.18%)  < ???:_dl_sort_maps (8x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   334 ( 0.18%)  *  ???:dfs_traversal.part.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   331 ( 0.18%)  *  src/parse.c:arg_parse [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 2,061 ( 1.10%)  >   ???:ft_split (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,955 ( 1.04%)  >   ???:malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
 1,857 ( 0.99%)  >   ???:free_2d (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,485 ( 0.79%)  >   src/parse.c:check_range (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   692 ( 0.37%)  >   ???:_dl_runtime_resolve_xsave (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   530 ( 0.28%)  >   ???:ft_atoi (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   356 ( 0.19%)  < ???:_dl_fini (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   312 ( 0.17%)  < ???:_dl_map_object_deps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   312 ( 0.17%)  *  ???:_dl_sort_maps [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   334 ( 0.18%)  >   ???:dfs_traversal.part.0 (8x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    22 ( 0.01%)  >   ???:memcpy (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   248 ( 0.13%)  < ???:_dl_map_object_from_fd (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  < ???:__minimal_malloc (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   310 ( 0.16%)  *  ???:mmap [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,485 ( 0.79%)  < src/parse.c:arg_parse (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   300 ( 0.16%)  *  src/parse.c:check_range [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,080 ( 0.57%)  >   ???:ft_atoll (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   105 ( 0.06%)  >   ???:ft_strlen (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   297 ( 0.16%)  *  src/stack_utils.c:push_stack [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   900 ( 0.48%)  >   ???:malloc (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   294 ( 0.16%)  *  src/stack_utils.c:pop_stack [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,456 ( 0.77%)  >   ???:exit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   837 ( 0.44%)  >   ???:free (9x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   656 ( 0.35%)  >   ???:_dl_runtime_resolve_xsave (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    92 ( 0.05%)  < ???:strdup (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    55 ( 0.03%)  < ???:_dl_map_object_deps (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    52 ( 0.03%)  < ???:_dl_new_object (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    27 ( 0.01%)  < ???:handle_preload_list (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    27 ( 0.01%)  < ???:open_path (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    22 ( 0.01%)  < ???:_dl_sort_maps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    14 ( 0.01%)  < ???:fillin_rpath.isra.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   289 ( 0.15%)  *  ???:memcpy [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,857 ( 0.99%)  < src/parse.c:arg_parse (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   279 ( 0.15%)  *  ???:free_2d [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   930 ( 0.49%)  >   ???:free (10x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   648 ( 0.34%)  >   ???:_dl_runtime_resolve_xsave (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   204 ( 0.11%)  < ???:_dlfo_process_initial (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    73 ( 0.04%)  < ???:_dl_find_object_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   277 ( 0.15%)  *  ???:_dl_find_object_from_map [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   270 ( 0.14%)  < ???:__GI___tunable_set_val (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   270 ( 0.14%)  *  ???:do_tunable_update_val [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   180 ( 0.10%)  < ???:ft_atoll (10x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    90 ( 0.05%)  < ???:ft_atoi (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   270 ( 0.14%)  *  ???:ft_isspace [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   276 ( 0.15%)  < ???:open_path (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   120 ( 0.06%)  < ???:_dl_map_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   263 ( 0.14%)  *  ???:open_verify.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    98 ( 0.05%)  >   ???:__open_nocancel (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    22 ( 0.01%)  >   ???:__read_nocancel (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  >   ???:__pread64_nocancel (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   247 ( 0.13%)  < src/push_swap.c:main (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   247 ( 0.13%)  *  ???:check_duplicates_bf [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   656 ( 0.35%)  < ???:_dl_important_hwcaps (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   342 ( 0.18%)  < ???:copy_hwcaps (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   245 ( 0.13%)  *  ???:_dl_hwcaps_split_masked [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   705 ( 0.37%)  >   ???:_dl_hwcaps_split (14x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  >   ???:_dl_hwcaps_contains (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   372 ( 0.20%)  < ???:_dl_init (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   243 ( 0.13%)  *  ???:call_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    72 ( 0.04%)  >   ???:_init_first (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    24 ( 0.01%)  >   ???:_IO_stdfiles_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    14 ( 0.01%)  >   ???:check_stdfiles_vtables (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    12 ( 0.01%)  >   ???:0x0000000000001100 (1x) [/nix/store/jlcmn1sc1k1ryzk2lzxs3af4m1ghmdy6-valgrind-3.23.0/libexec/valgrind/vgpreload_core-amd64-linux.so]
     7 ( 0.00%)  >   ???:0x000000000483c000 (1x) [???]

    99 ( 0.05%)  < ???:open_path (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    58 ( 0.03%)  < ???:_dl_new_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    26 ( 0.01%)  < ???:copy_hwcaps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    21 ( 0.01%)  < ???:fillin_rpath.isra.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  < ???:_dl_allocate_tls_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   242 ( 0.13%)  *  ???:mempcpy [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   345 ( 0.18%)  < ???:allocate (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   240 ( 0.13%)  *  ???:ft_strlcpy [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   105 ( 0.06%)  >   ???:ft_strlen (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   236 ( 0.13%)  < ???:init_cpu_features.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   236 ( 0.13%)  *  ???:get_common_cache_info.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   703 ( 0.37%)  < ???:_dl_map_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   226 ( 0.12%)  *  ???:open_path [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   276 ( 0.15%)  >   ???:open_verify.constprop.0 (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    99 ( 0.05%)  >   ???:mempcpy (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    44 ( 0.02%)  >   ???:stat (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  >   ???:__minimal_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    27 ( 0.01%)  >   ???:memcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   160 ( 0.09%)  < ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    64 ( 0.03%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   224 ( 0.12%)  *  ???:_dl_process_pt_gnu_property [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,497 ( 0.80%)  < ???:_dl_init_paths (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   222 ( 0.12%)  *  ???:_dl_important_hwcaps [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   656 ( 0.35%)  >   ???:_dl_hwcaps_split_masked (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   470 ( 0.25%)  >   ???:copy_hwcaps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  >   ???:__minimal_malloc (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    53 ( 0.03%)  >   ???:_dl_hwcaps_subdirs_active (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    19 ( 0.01%)  >   ???:bcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    15 ( 0.01%)  >   ???:_dl_hwcaps_split (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   220 ( 0.12%)  < ???:init_cpu_features.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   220 ( 0.12%)  *  ???:update_active.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   954 ( 0.51%)  < ???:__run_exit_handlers (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   215 ( 0.11%)  *  ???:_dl_fini [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   356 ( 0.19%)  >   ???:_dl_sort_maps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   237 ( 0.13%)  >   ???:_dl_call_fini (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    46 ( 0.02%)  >   ???:pthread_mutex_lock@@GLIBC_2.2.5 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    42 ( 0.02%)  >   ???:pthread_mutex_unlock@@GLIBC_2.2.5 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    32 ( 0.02%)  >   ???:_dl_audit_objclose (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    26 ( 0.01%)  >   ???:_dl_audit_activity_nsid (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   105 ( 0.06%)  < src/parse.c:check_range (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   105 ( 0.06%)  < ???:ft_strlcpy (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   210 ( 0.11%)  *  ???:ft_strlen [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

 2,061 ( 1.10%)  < src/parse.c:arg_parse (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   200 ( 0.11%)  *  ???:ft_split [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,129 ( 0.60%)  >   ???:allocate (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   392 ( 0.21%)  >   ???:malloc (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   340 ( 0.18%)  >   ???:ft_wcount (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

 2,244 ( 1.19%)  < ???:decompose_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   198 ( 0.11%)  *  ???:fillin_rpath.isra.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,412 ( 0.75%)  >   ???:strsep (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   404 ( 0.21%)  >   ???:expand_dynamic_string_token (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    87 ( 0.05%)  >   ???:strlen (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    46 ( 0.02%)  >   ???:__minimal_free (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  >   ???:bcmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    31 ( 0.02%)  >   ???:__minimal_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    21 ( 0.01%)  >   ???:mempcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    14 ( 0.01%)  >   ???:memcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   395 ( 0.21%)  < ???:_dl_find_object_init (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   191 ( 0.10%)  *  ???:_dlfo_process_initial [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   204 ( 0.11%)  >   ???:_dl_find_object_from_map (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   541 ( 0.29%)  < ???:__rtld_mutex_init (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   204 ( 0.11%)  < ???:_dl_call_libc_early_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   190 ( 0.10%)  *  ???:_dl_lookup_direct [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   555 ( 0.29%)  >   ???:check_match (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 2,407 ( 1.28%)  < ???:__rtld_malloc_init_real (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   188 ( 0.10%)  *  ???:lookup_malloc_symbol [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,219 ( 1.18%)  >   ???:_dl_lookup_symbol_x (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   185 ( 0.10%)  < src/push_swap.c:init_stack (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   185 ( 0.10%)  *  ???:insertion_sort [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   184 ( 0.10%)  *  src/instructions.c:push [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   496 ( 0.26%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:pop_stack (4x)
   316 ( 0.17%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:push_stack (4x)
   168 ( 0.09%)  >   ???:write (12x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   183 ( 0.10%)  *  src/sort.c:s_insertion_sort [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 1,164 ( 0.62%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:push (4x)
   805 ( 0.43%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:rotate (1x)
   401 ( 0.21%)  >   src/sort.c:simple_sort (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   140 ( 0.07%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:count_r (4x)
   120 ( 0.06%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:reverse_rotate (1x)
   117 ( 0.06%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:get_min_index (2x)
   100 ( 0.05%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:is_sorted (2x)

    22 ( 0.01%)  < src/sort_utils.c:sort (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   180 ( 0.10%)  *  src/sort_utils.c:is_sorted [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   401 ( 0.21%)  < ???:__run_exit_handlers (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   175 ( 0.09%)  *  ???:_IO_cleanup [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   195 ( 0.10%)  >   ???:_IO_flush_all (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    17 ( 0.01%)  >   ???:__libc_cleanup_push_defer (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    14 ( 0.01%)  >   ???:__libc_cleanup_pop_restore (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   175 ( 0.09%)  < src/push_swap.c:init_stack (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   175 ( 0.09%)  *  ???:index_of [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

 1,407 ( 0.75%)  < src/push_swap.c:main (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   166 ( 0.09%)  *  src/push_swap.c:init_stack [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   881 ( 0.47%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:push_stack (5x)
   185 ( 0.10%)  >   ???:insertion_sort (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   175 ( 0.09%)  >   ???:index_of (5x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   195 ( 0.10%)  < ???:_IO_cleanup (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   164 ( 0.09%)  *  ???:_IO_flush_all [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    17 ( 0.01%)  >   ???:__libc_cleanup_push_defer (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    14 ( 0.01%)  >   ???:__libc_cleanup_pop_restore (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   692 ( 0.37%)  < src/parse.c:arg_parse (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   679 ( 0.36%)  < src/instructions.c:rotate (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   656 ( 0.35%)  < src/stack_utils.c:pop_stack (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   648 ( 0.34%)  < ???:free_2d (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   164 ( 0.09%)  *  ???:_dl_runtime_resolve_xsave [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,511 ( 1.33%)  >   ???:_dl_fixup (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   256 ( 0.14%)  < ???:_int_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   159 ( 0.08%)  *  ???:sysmalloc [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    97 ( 0.05%)  >   ???:__glibc_morecore (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   156 ( 0.08%)  *  src/sort_utils.c:get_min_index [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   155 ( 0.08%)  *  src/sort_utils.c:count_r [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]

   150 ( 0.08%)  *  src/instructions.c:rotate [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   679 ( 0.36%)  >   ???:_dl_runtime_resolve_xsave (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    84 ( 0.04%)  >   ???:write (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 4,430 ( 2.35%)  < ???:_dl_map_object_deps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 3,061 ( 1.63%)  < ???:_dl_catch_error (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   135 ( 0.07%)  *  ???:_dl_catch_exception [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,294 ( 2.28%)  >   ???:openaux (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,993 ( 1.59%)  >   ???:map_doit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    69 ( 0.04%)  >   ???:__sigsetjmp (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    66 ( 0.04%)  < ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    33 ( 0.02%)  < ???:_dl_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    33 ( 0.02%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   132 ( 0.07%)  *  ???:_dl_setup_hash [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   512 ( 0.27%)  < ???:malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   117 ( 0.06%)  *  ???:tcache_init.part.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   395 ( 0.21%)  >   ???:_int_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    96 ( 0.05%)  < ???:_dl_map_object_from_fd (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    37 ( 0.02%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   115 ( 0.06%)  *  ???:_dl_add_to_namespace_list [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    18 ( 0.01%)  >   ???:rtld_mutex_dummy (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 2,520 ( 1.34%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   113 ( 0.06%)  *  ???:__rtld_malloc_init_real [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 2,407 ( 1.28%)  >   ???:lookup_malloc_symbol (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 5,182 ( 2.75%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   113 ( 0.06%)  *  ???:_dl_init_paths [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 3,482 ( 1.85%)  >   ???:decompose_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 1,497 ( 0.80%)  >   ???:_dl_important_hwcaps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  >   ???:__minimal_malloc (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    28 ( 0.01%)  >   ???:memset (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   237 ( 0.13%)  < ???:_dl_fini (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   112 ( 0.06%)  *  ???:_dl_call_fini [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   104 ( 0.06%)  >   ???:0x00000000000010c0 (1x) [/nix/store/jlcmn1sc1k1ryzk2lzxs3af4m1ghmdy6-valgrind-3.23.0/libexec/valgrind/vgpreload_core-amd64-linux.so]
    13 ( 0.01%)  >   ???:0x0000000000401120 (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
     4 ( 0.00%)  >   ???:0x00000000004029a4 (1x) [???]
     4 ( 0.00%)  >   ???:0x000000000483c29c (1x) [???]

   150 ( 0.08%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   106 ( 0.06%)  *  ???:_dl_allocate_tls_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    25 ( 0.01%)  >   ???:memset (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    13 ( 0.01%)  >   ???:mempcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     6 ( 0.00%)  >   ???:rtld_mutex_dummy (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   470 ( 0.25%)  < ???:_dl_important_hwcaps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   102 ( 0.05%)  *  ???:copy_hwcaps [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   342 ( 0.18%)  >   ???:_dl_hwcaps_split_masked (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    26 ( 0.01%)  >   ???:mempcpy (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   266 ( 0.14%)  < ???:expand_dynamic_string_token (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   112 ( 0.06%)  < ???:_dl_map_object_deps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   100 ( 0.05%)  *  ???:_dl_dst_count [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   278 ( 0.15%)  >   ???:index (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   124 ( 0.07%)  < ???:_dl_relocate_object (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   100 ( 0.05%)  *  ???:_dl_protect_relro [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    24 ( 0.01%)  >   ???:mprotect (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    98 ( 0.05%)  < ???:open_verify.constprop.0 (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    98 ( 0.05%)  *  ???:__open_nocancel [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    69 ( 0.04%)  < ???:_dl_catch_exception (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    33 ( 0.02%)  < ???:_setjmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    90 ( 0.05%)  *  ???:__sigsetjmp [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    12 ( 0.01%)  >   ???:__sigjmp_save (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    89 ( 0.05%)  < ???:_dl_find_object_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    89 ( 0.05%)  *  ???:_dlfo_sort_mappings [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   249 ( 0.13%)  < ???:_dl_new_object (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   126 ( 0.07%)  < ???:_dl_check_map_versions (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    42 ( 0.02%)  < ???:allocate_dtv (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    42 ( 0.02%)  < ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    88 ( 0.05%)  *  ???:__minimal_calloc [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   371 ( 0.20%)  >   ???:__minimal_malloc (8x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    85 ( 0.05%)  < ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    85 ( 0.05%)  *  ???:_dl_determine_tlsoffset [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   926 ( 0.49%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    81 ( 0.04%)  *  ???:init_tls [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   500 ( 0.27%)  >   ???:_dl_allocate_tls_storage (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    99 ( 0.05%)  >   ???:_dl_tls_static_surplus_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    92 ( 0.05%)  >   ???:__tls_init_tp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    85 ( 0.05%)  >   ???:_dl_determine_tlsoffset (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    42 ( 0.02%)  >   ???:__minimal_calloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    27 ( 0.01%)  >   ???:_dl_tls_initial_modid_limit_setup (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    55 ( 0.03%)  < ???:_dl_check_map_versions (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    24 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    79 ( 0.04%)  *  ???:strncmp [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    78 ( 0.04%)  < ???:init_cpu_features.constprop.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    78 ( 0.04%)  *  ???:get_common_indices.constprop.0 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    78 ( 0.04%)  *  src/instructions.c:reverse_rotate [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    42 ( 0.02%)  >   ???:write (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   449 ( 0.24%)  < ???:0x000000000001c840 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    77 ( 0.04%)  *  ???:_dl_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   372 ( 0.20%)  >   ???:call_init (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 1,450 ( 0.77%)  < ???:exit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    76 ( 0.04%)  *  ???:__run_exit_handlers [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   954 ( 0.51%)  >   ???:_dl_fini (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   401 ( 0.21%)  >   ???:_IO_cleanup (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    15 ( 0.01%)  >   ???:__call_tls_dtors (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
     4 ( 0.00%)  >   ???:_Exit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    31 ( 0.02%)  < ???:fillin_rpath.isra.0 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    26 ( 0.01%)  < ???:_dl_relocate_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    19 ( 0.01%)  < ???:_dl_important_hwcaps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    76 ( 0.04%)  *  ???:bcmp [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 4,004 ( 2.13%)  < ???:version_check_doit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    75 ( 0.04%)  *  ???:_dl_check_all_versions [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 3,929 ( 2.09%)  >   ???:_dl_check_map_versions (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   377 ( 0.20%)  < ???:expand_dynamic_string_token (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   145 ( 0.08%)  < ???:decompose_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    72 ( 0.04%)  *  ???:strdup [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   234 ( 0.12%)  >   ???:strlen (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   124 ( 0.07%)  >   ???:__minimal_malloc (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    92 ( 0.05%)  >   ???:memcpy (4x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

17,388 ( 9.24%)  < ???:(below main) (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    71 ( 0.04%)  *  ???:__libc_start_main@@GLIBC_2.34 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
17,207 ( 9.15%)  >   ???:(below main) (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    83 ( 0.04%)  >   ???:__cxa_atexit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    11 ( 0.01%)  >   ???:0x0000000000401150 (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
     9 ( 0.00%)  >   ???:0x0000000004868810 (1x) [???]
     7 ( 0.00%)  >   ???:0x0000000000401000 (1x) [???]

    77 ( 0.04%)  < ???:__glibc_morecore (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    16 ( 0.01%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    67 ( 0.04%)  *  ???:sbrk [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    26 ( 0.01%)  >   ???:brk (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    85 ( 0.05%)  < ???:0x000000000483c030 (1x) [???]
    62 ( 0.03%)  *  ???:__cxa_finalize [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    23 ( 0.01%)  >   ???:__unregister_atfork (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    92 ( 0.05%)  < ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    62 ( 0.03%)  *  ???:__tls_init_tp [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    30 ( 0.02%)  >   ???:__tunable_get_val (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

 3,646 ( 1.94%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    57 ( 0.03%)  *  ???:handle_preload_list [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 3,122 ( 1.66%)  >   ???:do_preload (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   440 ( 0.23%)  >   ???:strcspn (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    27 ( 0.01%)  >   ???:memcpy (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    56 ( 0.03%)  < ???:_int_malloc (7x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    56 ( 0.03%)  *  ???:alloc_perturb [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    56 ( 0.03%)  < ???:_dl_relocate_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    56 ( 0.03%)  *  ???:strnlen [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    56 ( 0.03%)  < ???:_dl_relocate_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    56 ( 0.03%)  *  ???:wcschr [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    55 ( 0.03%)  *  src/instructions.c:swap [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    42 ( 0.02%)  >   ???:write (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   404 ( 0.21%)  < ???:fillin_rpath.isra.0 (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   293 ( 0.16%)  < ???:_dl_map_object (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    54 ( 0.03%)  *  ???:expand_dynamic_string_token [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   377 ( 0.20%)  >   ???:strdup (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   266 ( 0.14%)  >   ???:_dl_dst_count (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    53 ( 0.03%)  < ???:_dl_important_hwcaps (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    53 ( 0.03%)  *  ???:_dl_hwcaps_subdirs_active [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    52 ( 0.03%)  < ???:_dl_relocate_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    52 ( 0.03%)  *  ???:wmemchr [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   414 ( 0.22%)  < ???:_dl_call_libc_early_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    51 ( 0.03%)  *  ???:__libc_early_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   201 ( 0.11%)  >   ???:__lll_elision_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   124 ( 0.07%)  >   ???:__pthread_tunables_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    22 ( 0.01%)  >   ???:__ctype_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    16 ( 0.01%)  >   ???:getrlimit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

 4,294 ( 2.28%)  < ???:_dl_catch_exception (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    50 ( 0.03%)  *  ???:openaux [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 4,244 ( 2.26%)  >   ???:_dl_map_object (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   401 ( 0.21%)  < src/sort.c:s_insertion_sort (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    50 ( 0.03%)  *  src/sort.c:simple_sort [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   108 ( 0.06%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:rotate (1x)
    97 ( 0.05%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:swap (1x)
    58 ( 0.03%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:is_sorted (2x)
    39 ( 0.02%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:get_min_index (1x)
    34 ( 0.02%)  >   src/sort.c:is_rot_sort (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    15 ( 0.01%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:count_r (1x)

   318 ( 0.17%)  < ???:init_cpu_features.constprop.0 (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  *  ???:__GI___tunable_set_val [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   270 ( 0.14%)  >   ???:do_tunable_update_val (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    48 ( 0.03%)  < ???:_dl_map_object_deps (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  *  ???:__libc_scratch_buffer_set_array_size [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   589 ( 0.31%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  *  ???:__rtld_mutex_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   541 ( 0.29%)  >   ???:_dl_lookup_direct (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    48 ( 0.03%)  < ???:_dl_hwcaps_split_masked (6x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    48 ( 0.03%)  *  ???:_dl_hwcaps_contains [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    48 ( 0.03%)  *  src/push_swap.c:main [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 8,911 ( 4.74%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/parse.c:arg_parse (1x)
 3,080 ( 1.64%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:sort (1x)
 2,782 ( 1.48%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:free_stack (1x)
 1,407 ( 0.75%)  >   src/push_swap.c:init_stack (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
   579 ( 0.31%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/parse.c:check_digits (1x)
   247 ( 0.13%)  >   ???:check_duplicates_bf (1x) [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
    93 ( 0.05%)  >   ???:free (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    46 ( 0.02%)  < ???:_dl_fini (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    46 ( 0.02%)  *  ???:pthread_mutex_lock@@GLIBC_2.2.5 [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    75 ( 0.04%)  < ???:__minimal_malloc (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    45 ( 0.02%)  *  ???:__set_vma_name [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    30 ( 0.02%)  >   ???:__tunable_get_val (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    80 ( 0.04%)  < ???:__cxa_atexit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    42 ( 0.02%)  *  ???:__internal_atexit [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    38 ( 0.02%)  >   ???:__new_exitfn (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

   630 ( 0.33%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    42 ( 0.02%)  *  ???:_dl_find_object_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   395 ( 0.21%)  >   ???:_dlfo_process_initial (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    89 ( 0.05%)  >   ???:_dlfo_sort_mappings (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    73 ( 0.04%)  >   ???:_dl_find_object_from_map (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    31 ( 0.02%)  >   ???:__minimal_malloc (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   201 ( 0.11%)  < ???:__libc_early_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    41 ( 0.02%)  *  ???:__lll_elision_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   160 ( 0.09%)  >   ???:0x0000000004868780 (5x) [???]

    99 ( 0.05%)  < ???:init_tls (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    41 ( 0.02%)  *  ???:_dl_tls_static_surplus_init [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    58 ( 0.03%)  >   ???:__tunable_get_val (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

   374 ( 0.20%)  < ???:ptmalloc_init.part.0 (12x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
   160 ( 0.09%)  < ???:__lll_elision_init (5x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    95 ( 0.05%)  < ???:__pthread_tunables_init (3x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    40 ( 0.02%)  *  ???:0x0000000004868780 [???]
   589 ( 0.31%)  >   ???:__tunable_get_val (20x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    39 ( 0.02%)  < ???:pthread_mutex_unlock@@GLIBC_2.2.5 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    39 ( 0.02%)  *  ???:__pthread_mutex_unlock_usercnt [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    26 ( 0.01%)  < ???:_dl_fini (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    13 ( 0.01%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    39 ( 0.02%)  *  ???:_dl_audit_activity_nsid [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

169,622 (90.16%)  < ???:_dl_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    39 ( 0.02%)  *  ???:_dl_sysdep_start [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
106,402 (56.55%)  >   ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
54,573 (29.01%)  >   ???:__GI___tunables_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
 7,633 ( 4.06%)  >   ???:_dl_x86_init_cpu_features (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
   885 ( 0.47%)  >   ???:_dl_sysdep_parse_arguments (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    46 ( 0.02%)  >   ???:_dl_sort_maps_init (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    17 ( 0.01%)  >   ???:strlen (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    16 ( 0.01%)  >   ???:sbrk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    11 ( 0.01%)  >   ???:brk (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    46 ( 0.02%)  < ???:fillin_rpath.isra.0 (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    10 ( 0.01%)  < ???:decompose_rpath (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    38 ( 0.02%)  *  ???:__minimal_free [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    18 ( 0.01%)  >   ???:memset (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    38 ( 0.02%)  < ???:__internal_atexit (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    38 ( 0.02%)  *  ???:__new_exitfn [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    38 ( 0.02%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    38 ( 0.02%)  *  ???:_dl_debug_initialize [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    26 ( 0.01%)  < ???:sbrk (2x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    11 ( 0.01%)  < ???:_dl_sysdep_start (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    37 ( 0.02%)  *  ???:brk [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

17,400 ( 9.25%)  < ???:0x000000000001c840 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
17,207 ( 9.15%)  < ???:__libc_start_main@@GLIBC_2.34 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
    36 ( 0.02%)  *  ???:(below main) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
17,388 ( 9.24%)  >   ???:__libc_start_main@@GLIBC_2.34 (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]
17,147 ( 9.11%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/push_swap.c:main (1x)
    36 ( 0.02%)  >   ???:_setjmp (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/libc.so.6]

    35 ( 0.02%)  < ???:dl_main (1x) [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]
    35 ( 0.02%)  *  ???:_dl_add_to_slotinfo [/nix/store/wn7v2vhyyyi6clcyn0s9ixvl7d4d87ic-glibc-2.40-36/lib/ld-linux-x86-64.so.2]

    35 ( 0.02%)  *  src/sort_utils.c:free_stack [/home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/push_swap]
 2,747 ( 1.46%)  >   /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:pop_stack (6x)

--------------------------------------------------------------------------------
-- Auto-annotated source: src/parse.c
--------------------------------------------------------------------------------
Ir           

-- line 8 ----------------------------------------
  .           /*   Created: 2023/01/05 06:36:45 by asioud            #+#    #+#             */
  .           /*   Updated: 2023/01/22 08:02:59 by asioud           ###   ########.fr       */
  .           /*                                                                            */
  .           /* ************************************************************************** */
  .           
  .           #include "../includes/push_swap.h"
  .           
  .           int	check_digits(int argc, char **argv)
  5 ( 0.00%)  {
  .           	int	i;
  .           	int	j;
  .           	int	count;
  .           
  1 ( 0.00%)  	i = 1;
  1 ( 0.00%)  	count = 0;
 19 ( 0.01%)  	while (i < argc)
  .           	{
  5 ( 0.00%)  		j = 0;
125 ( 0.07%)  		while (argv[i][j])
  .           		{
 80 ( 0.04%)  			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
 60 ( 0.03%)  => ???:ft_isdigit (5x)
  .           				&& argv[i][j] != '-')
  .           				return (-1);
205 ( 0.11%)  			if (ft_isdigit(argv[i][j]) && (argv[i][j + 1] == ' ' || argv[i][j
 60 ( 0.03%)  => ???:ft_isdigit (5x)
  .           					+ 1] == '\0'))
  5 ( 0.00%)  				count += 1;
  5 ( 0.00%)  			j++;
  .           		}
  5 ( 0.00%)  		i++;
  .           	}
  1 ( 0.00%)  	return (count);
  2 ( 0.00%)  }
  .           
  .           void	check_range(char **s_numbers, int *numbers)
 25 ( 0.01%)  {
  .           	int	i;
  .           
  5 ( 0.00%)  	i = 0;
 85 ( 0.05%)  	while (s_numbers[i])
  .           	{
 55 ( 0.03%)  		if (ft_atoll(s_numbers[i]) > INT_MAX \
540 ( 0.29%)  => ???:ft_atoll (5x)
 55 ( 0.03%)  			|| ft_atoll(s_numbers[i]) < INT_MIN \
540 ( 0.29%)  => ???:ft_atoll (5x)
 50 ( 0.03%)  			|| ft_strlen(s_numbers[i]) > 11)
105 ( 0.06%)  => ???:ft_strlen (5x)
  .           		{
  .           			free_2d(s_numbers);
  .           			free(numbers);
  .           			display_error(RED "Error", 1);
  .           		}
  5 ( 0.00%)  		i++;
  .           	}
 20 ( 0.01%)  }
  .           
  .           int	*arg_parse(int argc, char **argv, int count)
  7 ( 0.00%)  {
  .           	char	**s_numbers;
  .           	int		*numbers;
  .           	int		i;
  .           	int		j;
  .           	int		k;
  .           
 11 ( 0.01%)  	numbers = (int *)malloc(sizeof(int) * count);
1,955 ( 1.04%)  => ???:malloc (1x)
692 ( 0.37%)  => ???:_dl_runtime_resolve_xsave (1x)
  2 ( 0.00%)  	if (!numbers)
  .           		return (NULL);
  1 ( 0.00%)  	i = 0;
  1 ( 0.00%)  	j = 0;
 25 ( 0.01%)  	while (++i < argc)
  .           	{
 50 ( 0.03%)  		s_numbers = ft_split(argv[i], ' ');
2,061 ( 1.10%)  => ???:ft_split (5x)
 10 ( 0.01%)  		if (!s_numbers)
  .           			display_error("", 1);
 25 ( 0.01%)  		check_range(s_numbers, numbers);
1,485 ( 0.79%)  => src/parse.c:check_range (5x)
  5 ( 0.00%)  		k = 0;
 85 ( 0.05%)  		while (s_numbers[k])
 90 ( 0.05%)  			numbers[j++] = ft_atoi(s_numbers[k++]);
530 ( 0.28%)  => ???:ft_atoi (5x)
 15 ( 0.01%)  		free_2d(s_numbers);
1,857 ( 0.99%)  => ???:free_2d (5x)
  .           	}
  1 ( 0.00%)  	return (numbers);
  3 ( 0.00%)  }
  .           

--------------------------------------------------------------------------------
-- Auto-annotated source: src/stack_utils.c
--------------------------------------------------------------------------------
Ir          

-- line 8 ----------------------------------------
 .           /*   Created: 2023/01/21 06:36:59 by asioud            #+#    #+#             */
 .           /*   Updated: 2023/01/21 06:45:03 by asioud           ###   ########.fr       */
 .           /*                                                                            */
 .           /* ************************************************************************** */
 .           
 .           #include "../includes/push_swap.h"
 .           
 .           void	push_stack(t_stack *stack, int index, int data)
54 ( 0.03%)  {
 .           	t_node	*tmp;
 .           
36 ( 0.02%)  	tmp = (t_node *)malloc(sizeof(t_node));
900 ( 0.48%)  => ???:malloc (9x)
18 ( 0.01%)  	if (!tmp)
 .           		return ;
27 ( 0.01%)  	tmp->data = data;
27 ( 0.01%)  	tmp->s_index = index;
36 ( 0.02%)  	tmp->next = stack->head;
27 ( 0.01%)  	stack->head = tmp;
54 ( 0.03%)  	stack->size++;
18 ( 0.01%)  }
 .           
 .           int	pop_stack(t_stack *stack)
40 ( 0.02%)  {
 .           	t_node	*top;
 .           	int		data;
 .           
40 ( 0.02%)  	if (!stack->head)
 7 ( 0.00%)  		exit(1);
1,456 ( 0.77%)  => ???:exit (1x)
656 ( 0.35%)  => ???:_dl_runtime_resolve_xsave (1x)
27 ( 0.01%)  	top = stack->head;
27 ( 0.01%)  	data = top->data;
36 ( 0.02%)  	stack->head = top->next;
36 ( 0.02%)  	free(top);
837 ( 0.44%)  => ???:free (9x)
 9 ( 0.00%)  	top = NULL;
45 ( 0.02%)  	stack->size--;
 9 ( 0.00%)  	return (data);
18 ( 0.01%)  }

--------------------------------------------------------------------------------
-- Auto-annotated source: src/instructions.c
--------------------------------------------------------------------------------
Ir          

-- line 8 ----------------------------------------
 .           /*   Created: 2023/01/06 20:43:24 by asioud            #+#    #+#             */
 .           /*   Updated: 2023/01/21 06:40:35 by asioud           ###   ########.fr       */
 .           /*                                                                            */
 .           /* ************************************************************************** */
 .           
 .           #include "../includes/push_swap.h"
 .           
 .           void	swap(t_stack *stack, char x, bool b)
 9 ( 0.00%)  {
 .           	t_node	*tmp;
 .           
 9 ( 0.00%)  	if (stack->head == NULL || stack->head->next == NULL)
 .           		return ;
 3 ( 0.00%)  	tmp = stack->head;
 4 ( 0.00%)  	stack->head = tmp->next;
 5 ( 0.00%)  	tmp->next = stack->head->next;
 4 ( 0.00%)  	stack->head->next = tmp;
 2 ( 0.00%)  	if (b)
 .           	{
 5 ( 0.00%)  		write(1, "s", 1);
14 ( 0.01%)  => ???:write (1x)
 6 ( 0.00%)  		write(1, &x, 1);
14 ( 0.01%)  => ???:write (1x)
 6 ( 0.00%)  		write(1, "\n", 1);
14 ( 0.01%)  => ???:write (1x)
 .           	}
 2 ( 0.00%)  }
 .           
 .           void	push(t_stack *stack1, t_stack *stack2, char x, bool b)
32 ( 0.02%)  {
 .           	int	index;
 .           
16 ( 0.01%)  	if (stack2->head == NULL)
 .           		return ;
16 ( 0.01%)  	index = stack2->head->s_index;
36 ( 0.02%)  	push_stack(stack1, index, pop_stack(stack2));
496 ( 0.26%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:pop_stack (4x)
316 ( 0.17%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:push_stack (4x)
 8 ( 0.00%)  	if (b)
 .           	{
20 ( 0.01%)  		write(1, "p", 1);
56 ( 0.03%)  => ???:write (4x)
24 ( 0.01%)  		write(1, &x, 1);
56 ( 0.03%)  => ???:write (4x)
24 ( 0.01%)  		write(1, "\n", 1);
56 ( 0.03%)  => ???:write (4x)
 .           	}
 8 ( 0.00%)  }
 .           
 .           void	rotate(t_stack *stack, char x, bool b)
18 ( 0.01%)  {
 .           	t_node	*tmp;
 .           	t_node	*current;
 .           
18 ( 0.01%)  	if (stack->head == NULL || stack->head->next == NULL)
 .           		return ;
 6 ( 0.00%)  	tmp = stack->head;
 8 ( 0.00%)  	stack->head = tmp->next;
 6 ( 0.00%)  	current = stack->head;
26 ( 0.01%)  	while (current->next != NULL)
12 ( 0.01%)  		current = current->next;
 6 ( 0.00%)  	current->next = tmp;
 4 ( 0.00%)  	tmp->next = NULL;
 4 ( 0.00%)  	if (b)
 .           	{
14 ( 0.01%)  		write(1, "r\n", 1);
679 ( 0.36%)  => ???:_dl_runtime_resolve_xsave (1x)
28 ( 0.01%)  => ???:write (2x)
12 ( 0.01%)  		write(1, &x, 1);
28 ( 0.01%)  => ???:write (2x)
12 ( 0.01%)  		write(1, "\n", 1);
28 ( 0.01%)  => ???:write (2x)
 .           	}
 4 ( 0.00%)  }
 .           
 .           void	reverse_rotate(t_stack *stack, char x, bool b)
 9 ( 0.00%)  {
 .           	t_node	*current;
 .           	t_node	*tmp;
 .           
11 ( 0.01%)  	if (!stack->head || !stack->head->next || !stack)
 .           		return ;
 3 ( 0.00%)  	current = stack->head;
16 ( 0.01%)  	while (current->next->next != NULL)
 6 ( 0.00%)  		current = current->next;
 3 ( 0.00%)  	tmp = current->next;
 2 ( 0.00%)  	current->next = NULL;
 4 ( 0.00%)  	tmp->next = stack->head;
 3 ( 0.00%)  	stack->head = tmp;
 2 ( 0.00%)  	if (b)
 .           	{
 5 ( 0.00%)  		write(1, "rr", 2);
14 ( 0.01%)  => ???:write (1x)
 6 ( 0.00%)  		write(1, &x, 1);
14 ( 0.01%)  => ???:write (1x)
 6 ( 0.00%)  		write(1, "\n", 1);
14 ( 0.01%)  => ???:write (1x)
 .           	}
 2 ( 0.00%)  }

--------------------------------------------------------------------------------
-- Auto-annotated source: src/sort_utils.c
--------------------------------------------------------------------------------
Ir          

-- line 8 ----------------------------------------
 .           /*   Created: 2023/01/08 11:16:34 by asioud            #+#    #+#             */
 .           /*   Updated: 2023/01/21 07:51:18 by asioud           ###   ########.fr       */
 .           /*                                                                            */
 .           /* ************************************************************************** */
 .           
 .           #include "../includes/push_swap.h"
 .           
 .           int	get_min_index(t_stack *stack)
 9 ( 0.00%)  {
 .           	t_node	*current;
 .           	int		min_index;
 .           
 9 ( 0.00%)  	current = stack->head;
 9 ( 0.00%)  	min_index = current->s_index;
51 ( 0.03%)  	while (current->next)
 .           	{
27 ( 0.01%)  		current = current->next;
36 ( 0.02%)  		if (current->s_index < min_index)
 6 ( 0.00%)  			min_index = current->s_index;
 .           	}
 3 ( 0.00%)  	return (min_index);
 6 ( 0.00%)  }
 .           
 .           int	count_r(t_node *stack, int index)
20 ( 0.01%)  {
 .           	int	counter;
 .           
 5 ( 0.00%)  	counter = 0;
83 ( 0.04%)  	while (stack && stack->s_index != index)
 .           	{
24 ( 0.01%)  		stack = stack->next;
 8 ( 0.00%)  		counter++;
 .           	}
 5 ( 0.00%)  	return (counter);
10 ( 0.01%)  }
 .           
 .           int	is_sorted(t_stack *stack)
15 ( 0.01%)  {
 .           	t_node	*tmp;
 .           
15 ( 0.01%)  	tmp = stack->head;
45 ( 0.02%)  	while (tmp->next)
 .           	{
70 ( 0.04%)  		if (tmp->data > tmp->next->data)
10 ( 0.01%)  			return (0);
15 ( 0.01%)  		tmp = tmp->next;
 .           	}
 .           	return (1);
10 ( 0.01%)  }
 .           
 .           void	free_stack(t_stack *stack)
 4 ( 0.00%)  {
13 ( 0.01%)  	while (stack)
18 ( 0.01%)  		pop_stack(stack);
2,747 ( 1.46%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:pop_stack (6x)
 .           }
 .           
 .           void	sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length)
 7 ( 0.00%)  {
 5 ( 0.00%)  	if (is_sorted(stack_a))
22 ( 0.01%)  => src/sort_utils.c:is_sorted (1x)
 .           	{
 .           		free(numbers);
 .           		free_stack(stack_a);
 .           		display_error("", 1);
 .           	}
 2 ( 0.00%)  	else if (length == 2)
 .           		swap(stack_a, 'a', true);
 2 ( 0.00%)  	else if (length == 3)
 .           		simple_sort(stack_a, length);
 2 ( 0.00%)  	else if (length <= 7)
 6 ( 0.00%)  		s_insertion_sort(stack_a, stack_b, length);
3,030 ( 1.61%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort.c:s_insertion_sort (1x)
 .           	else if (length > 7)
 .           	{
 .           		k_sort1(stack_a, stack_b, length);
 .           		k_sort2(stack_a, stack_b, length);
 .           	}
 .           	else
 .           		display_error("", 1);
 4 ( 0.00%)  }

--------------------------------------------------------------------------------
-- Auto-annotated source: src/sort.c
--------------------------------------------------------------------------------
Ir          

-- line 8 ----------------------------------------
 .           /*   Created: 2023/01/08 04:55:18 by asioud            #+#    #+#             */
 .           /*   Updated: 2023/01/21 07:50:01 by asioud           ###   ########.fr       */
 .           /*                                                                            */
 .           /* ************************************************************************** */
 .           
 .           #include "../includes/push_swap.h"
 .           
 .           int	is_rot_sort(t_stack *stack, int min_s_index)
 4 ( 0.00%)  {
 .           	int	a;
 .           	int	b;
 .           	int	c;
 .           
 .           	(void)min_s_index;
 4 ( 0.00%)  	a = stack->head->data;
 5 ( 0.00%)  	b = stack->head->next->data;
 6 ( 0.00%)  	c = stack->head->next->next->data;
 6 ( 0.00%)  	if (a < b && b < c)
 .           		return (1);
 3 ( 0.00%)  	if (b < c && a > c)
 .           		return (1);
 3 ( 0.00%)  	if (c < a && a < b)
 .           		return (1);
 1 ( 0.00%)  	return (0);
 2 ( 0.00%)  }
 .           
 .           void	simple_sort(t_stack *stack, int length)
 5 ( 0.00%)  {
 .           	int		min_s_index;
 .           	int		r;
 .           
 5 ( 0.00%)  	if (is_sorted(stack))
36 ( 0.02%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:is_sorted (1x)
 .           		return ;
 4 ( 0.00%)  	min_s_index = get_min_index(stack);
39 ( 0.02%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:get_min_index (1x)
 7 ( 0.00%)  	r = count_r(stack->head, min_s_index);
15 ( 0.01%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:count_r (1x)
 7 ( 0.00%)  	if (is_rot_sort(stack, min_s_index))
34 ( 0.02%)  => src/sort.c:is_rot_sort (1x)
 .           	{
 .           		if (r < length - r)
 .           			rotate(stack, 'a', true);
 .           		else
 .           			reverse_rotate(stack, 'a', true);
 .           	}
 .           	else
 .           	{
 5 ( 0.00%)  		swap(stack, 'a', true);
97 ( 0.05%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:swap (1x)
 5 ( 0.00%)  		if (is_sorted(stack))
22 ( 0.01%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:is_sorted (1x)
 .           			return ;
 4 ( 0.00%)  		if (r < length - r)
 6 ( 0.00%)  			rotate(stack, 'a', true);
108 ( 0.06%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:rotate (1x)
 .           		else
 .           			reverse_rotate(stack, 'a', true);
 .           	}
 2 ( 0.00%)  }
 .           
 .           void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length)
 8 ( 0.00%)  {
 .           	int	min_index;
 .           	int	iter;
 .           	int	n;
 .           
 1 ( 0.00%)  	iter = 0;
 2 ( 0.00%)  	n = length;
22 ( 0.01%)  	while (iter++ < n - 3)
 .           	{
 8 ( 0.00%)  		min_index = get_min_index(stack_a);
117 ( 0.06%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:get_min_index (2x)
28 ( 0.01%)  		if (count_r(stack_a->head, min_index) <= n - min_index - \
70 ( 0.04%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:count_r (2x)
12 ( 0.01%)  			count_r(stack_a->head, min_index))
70 ( 0.04%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:count_r (2x)
12 ( 0.01%)  			while (stack_a->head->s_index != min_index)
 5 ( 0.00%)  				rotate(stack_a, 'a', true);
805 ( 0.43%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:rotate (1x)
 .           		else
10 ( 0.01%)  			while (stack_a->head->s_index != min_index)
 5 ( 0.00%)  				reverse_rotate(stack_a, 'a', true);
120 ( 0.06%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:reverse_rotate (1x)
10 ( 0.01%)  		if (is_sorted(stack_a) && stack_b->size == 0)
100 ( 0.05%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:is_sorted (2x)
 .           			return ;
12 ( 0.01%)  		push(stack_b, stack_a, 'b', true);
582 ( 0.31%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:push (2x)
 2 ( 0.00%)  		length--;
 .           	}
 5 ( 0.00%)  	simple_sort(stack_a, length);
401 ( 0.21%)  => src/sort.c:simple_sort (1x)
 1 ( 0.00%)  	iter = 0;
23 ( 0.01%)  	while (iter++ < n - 3)
12 ( 0.01%)  		push(stack_a, stack_b, 'a', true);
582 ( 0.31%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/instructions.c:push (2x)
 5 ( 0.00%)  }
 .           
 .           void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length)
 .           {
 .           	int	i;
 .           	int	range;
 .           
 .           	i = 0;
 .           	range = ft_sqrt(length) * 14 / 10;
-- line 97 ----------------------------------------

--------------------------------------------------------------------------------
-- Auto-annotated source: src/push_swap.c
--------------------------------------------------------------------------------
Ir          

-- line 8 ----------------------------------------
 .           /*   Created: 2023/01/05 05:56:04 by asioud            #+#    #+#             */
 .           /*   Updated: 2023/01/22 08:09:33 by asioud           ###   ########.fr       */
 .           /*                                                                            */
 .           /* ************************************************************************** */
 .           
 .           #include "../includes/push_swap.h"
 .           
 .           int	main(int argc, char **argv)
 5 ( 0.00%)  {
 .           	t_stack	stack_a;
 .           	t_stack	stack_b;
 .           	int		count;
 .           	int		*numbers;
 .           
 .           
 2 ( 0.00%)  	if (argc == 1)
 .           		display_error("", 1);
 .           	// checks
 6 ( 0.00%)  	count = check_digits(argc, argv);
579 ( 0.31%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/parse.c:check_digits (1x)
 7 ( 0.00%)  	numbers = arg_parse(argc, argv, count);
8,911 ( 4.74%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/parse.c:arg_parse (1x)
 9 ( 0.00%)  	if (count <= 1 || check_duplicates_bf(numbers, count))
247 ( 0.13%)  => ???:check_duplicates_bf (1x)
 .           	{
 .           		free(numbers);
 .           		if (count == 1)
 .           			display_error("", 1);
 .           		display_error(RED"Error", 1);
 .           	}
 6 ( 0.00%)  	init_stack(&stack_a, &stack_b, numbers, count);
1,407 ( 0.75%)  => src/push_swap.c:init_stack (1x)
 6 ( 0.00%)  	sort(&stack_a, &stack_b, numbers, count);
3,080 ( 1.64%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:sort (1x)
 4 ( 0.00%)  	free(numbers);
93 ( 0.05%)  => ???:free (1x)
 3 ( 0.00%)  	free_stack(&stack_a);
2,782 ( 1.48%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/sort_utils.c:free_stack (1x)
 .           	return (0);
 .           }
 .           
 .           void	init_stack(t_stack *stack_a, t_stack *stack_b, int *nb, int c)
 7 ( 0.00%)  {
 .           	int		i;
 .           	t_node	*tmp;
 .           
 2 ( 0.00%)  	stack_b->head = NULL;
 2 ( 0.00%)  	stack_a->head = NULL;
 2 ( 0.00%)  	stack_b->size = 0;
 2 ( 0.00%)  	stack_a->size = 0;
 3 ( 0.00%)  	i = c - 1;
13 ( 0.01%)  	while (i >= 0)
 .           	{
50 ( 0.03%)  		push_stack(stack_a, 0, nb[i]);
881 ( 0.47%)  => /home/mateo/Nextcloud/workspace/42/exercises/push_swap/ksort-push_swap/src/stack_utils.c:push_stack (5x)
 5 ( 0.00%)  		i--;
 .           	}
 5 ( 0.00%)  	insertion_sort(nb, c);
185 ( 0.10%)  => ???:insertion_sort (1x)
 3 ( 0.00%)  	tmp = stack_a->head;
13 ( 0.01%)  	while (tmp)
 .           	{
40 ( 0.02%)  		tmp->s_index = index_of(tmp->data, nb);
175 ( 0.09%)  => ???:index_of (5x)
15 ( 0.01%)  		tmp = tmp->next;
 .           	}
 4 ( 0.00%)  }

--------------------------------------------------------------------------------
Ir             
--------------------------------------------------------------------------------
3,183 ( 1.69%)  events annotated

