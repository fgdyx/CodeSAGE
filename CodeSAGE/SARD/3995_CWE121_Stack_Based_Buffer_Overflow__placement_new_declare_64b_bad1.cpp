#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR5 * VAR6 = new(VAR4) VAR5;
 VAR6->VAR7 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR6->VAR8 = 10;
 FUN2(VAR6->VAR7);
 }
}
#endif
