#ifndef VAR1
int VAR2 = 0;
void FUN1(size_t VAR3);
void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = rand();
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
