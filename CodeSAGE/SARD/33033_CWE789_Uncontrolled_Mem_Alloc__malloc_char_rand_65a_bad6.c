#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR5;
 VAR2 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = rand();
 FUN3(VAR2);
}
#endif
