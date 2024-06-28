#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 int64_t VAR4;
 VAR4 = 0LL;
 /* POTENTIAL FLAW: Use the maximum size of the data type */
 VAR4 = VAR5;
 FUN1(&VAR4);
}
#endif
