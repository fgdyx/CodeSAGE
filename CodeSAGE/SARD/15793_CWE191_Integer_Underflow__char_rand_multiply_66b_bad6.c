#ifndef VAR1
void FUN1(char VAR2[])
{
 char VAR3 = VAR2[2];
 if(VAR3 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
 char VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
#endif
