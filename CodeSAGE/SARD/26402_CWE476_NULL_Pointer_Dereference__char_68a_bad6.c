#ifndef VAR1
void FUN1();
void FUN2()
{
 char * VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 VAR3 = VAR2;
 FUN1();
}
#endif
