#ifndef VAR1
void FUN1(short * VAR2);
void FUN2()
{
 short VAR3;
 VAR3 = -1;
 /* FLAW: Use a number larger than CHAR_MAX */
 VAR3 = VAR4 + 1;
 FUN1(&VAR3);
}
#endif
