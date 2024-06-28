#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 FUN1(VAR2);
}
#endif
