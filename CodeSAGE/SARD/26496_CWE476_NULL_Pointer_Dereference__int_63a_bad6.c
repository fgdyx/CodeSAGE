#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 FUN1(&VAR3);
}
#endif
