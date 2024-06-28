#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR3 * VAR4 = new(VAR2) VAR3;
 VAR4->VAR5 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR4->VAR6 = 10;
 FUN2(VAR4->VAR5);
 }
}
#endif
