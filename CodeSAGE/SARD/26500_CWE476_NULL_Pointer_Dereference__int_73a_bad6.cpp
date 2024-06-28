#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR4 = NULL;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
