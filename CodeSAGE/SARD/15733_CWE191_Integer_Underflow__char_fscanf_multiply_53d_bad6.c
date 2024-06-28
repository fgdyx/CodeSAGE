#ifndef VAR1
void FUN1(char VAR2)
{
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < CHAR_MIN, this will underflow */
 char VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
#endif
