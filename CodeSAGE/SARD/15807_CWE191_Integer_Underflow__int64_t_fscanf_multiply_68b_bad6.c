#ifndef VAR1
void FUN1()
{
 int64_t VAR2 = VAR3;
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
 int64_t VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
#endif
