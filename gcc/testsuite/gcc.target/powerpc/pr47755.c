/* { dg-do compile { target { powerpc*-*-* } } } */
/* { dg-skip-if "" { powerpc*-*-darwin* } { "*" } { "" } } */
/* { dg-require-effective-target powerpc_vsx_ok } */
/* { dg-skip-if "do not override -mcpu" { powerpc*-*-* } { "-mcpu=*" } { "-mcpu=power7" } } */
/* { dg-options "-O3 -mcpu=power7" } */
/* { dg-final { scan-assembler "xxlxor" } } */
/* { dg-final { scan-assembler-not "lxvd2x" } } */
/* { dg-final { scan-assembler-not "lxvw4x" } } */
/* { dg-final { scan-assembler-not "lvx" } } */

/* PR 47755: Compiler loads vector constant of 0 from TOC instead of using
   xxlxor.  */
void
func (vector long long *p)
{
  *p = (vector long long) { 0LL, 0LL };
}
