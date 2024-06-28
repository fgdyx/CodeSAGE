#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR3 = -5;
 FUN1(&VAR3);
}
#endif
