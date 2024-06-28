#ifndef VAR1
void FUN1(short VAR2[]);
void FUN2()
{
 short VAR3;
 short VAR2[5];
 VAR3 = 0;
 /* FLAW: Use a negative number */
 VAR3 = -1;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
