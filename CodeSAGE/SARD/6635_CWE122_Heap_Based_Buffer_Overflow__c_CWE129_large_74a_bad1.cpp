#ifndef VAR1
void FUN1(VAR2<int, int> VAR3);
void FUN2()
{
 int VAR4;
 VAR2<int, int> VAR3;
 VAR4 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR4 = 10;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
