#ifndef VAR1
static int VAR2 = 0;
static void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR4->VAR5);
 }
}
void FUN3()
{
 VAR3 * VAR4;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR4 = NULL;
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
