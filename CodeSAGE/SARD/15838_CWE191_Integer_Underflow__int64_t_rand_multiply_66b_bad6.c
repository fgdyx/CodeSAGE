#ifndef VAR1
void FUN1(int64_t VAR2[])
{
 int64_t VAR3 = VAR2[2];
 if(VAR3 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < LLONG_MIN, this will underflow */
 int64_t VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
#endif
