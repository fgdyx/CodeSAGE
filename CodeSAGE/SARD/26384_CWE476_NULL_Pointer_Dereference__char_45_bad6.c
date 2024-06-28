#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR2[0]);
}
void FUN3()
{
 char * VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 VAR3 = VAR2;
 FUN1();
}
#endif
