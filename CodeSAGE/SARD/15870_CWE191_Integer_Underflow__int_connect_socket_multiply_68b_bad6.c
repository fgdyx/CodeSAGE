#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
#endif
