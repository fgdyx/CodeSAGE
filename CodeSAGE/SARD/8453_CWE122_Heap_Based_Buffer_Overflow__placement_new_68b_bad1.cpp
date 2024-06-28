#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR4 * VAR5 = new(VAR2) VAR4;
 VAR5->VAR6 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR5->VAR7 = 10;
 FUN2(VAR5->VAR6);
 free(VAR2);
 }
}
#endif
