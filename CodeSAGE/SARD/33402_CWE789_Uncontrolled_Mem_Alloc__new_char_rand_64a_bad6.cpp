#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = rand();
 FUN1(&VAR3);
}
#endif
