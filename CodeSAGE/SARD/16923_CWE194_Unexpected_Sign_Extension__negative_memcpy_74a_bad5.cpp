#ifndef VAR1
void FUN1(VAR2<int, short> VAR3);
void FUN2()
{
 short VAR4;
 VAR2<int, short> VAR3;
 VAR4 = 0;
 /* FLAW: Use a negative number */
 VAR4 = -1;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
