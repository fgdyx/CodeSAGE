#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR3 * VAR4 = new(VAR2) VAR3;
 VAR4->VAR5 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR4->VAR6 = 10;
 FUN2(VAR4->VAR5);
 free(VAR2);
 }
}
void FUN3()
{
 char * VAR2;
 char * VAR7 = (char *)malloc(sizeof(VAR8));
 /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
 char * VAR9 = (char *)malloc(sizeof(VAR3));
 VAR2 = VAR7;
 FUN1(VAR2);
}
#endif
