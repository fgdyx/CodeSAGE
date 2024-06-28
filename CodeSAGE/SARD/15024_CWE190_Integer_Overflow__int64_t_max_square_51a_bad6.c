#ifndef VAR1
void FUN1(int64_t VAR2);
void FUN2()
{
 int64_t VAR2;
 VAR2 = 0LL;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR2 = VAR3;
 FUN1(VAR2);
}
#endif
