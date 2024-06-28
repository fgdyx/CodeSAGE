#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char * VAR5 = (char *)malloc(sizeof(VAR6));
 char * VAR7 = (char *)malloc(sizeof(VAR8));
 {
 char * VAR2 = *VAR3;
 /* POTENTIAL FLAW: Initialize data to a buffer small than the sizeof(TwoIntsClass) */
 VAR2 = VAR5;
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: data may not be large enough to hold a TwoIntsClass */
 VAR8 * VAR9 = new(VAR2) VAR8;
 VAR9->VAR10 = 5;
 classTwo->intTwo = 10; /* POTENTIAL FLAW: If sizeof(data) < sizeof(TwoIntsClass) then this line will be a buffer overflow */
 VAR9->VAR11 = 10;
 FUN2(VAR9->VAR10);
 free(VAR2);
 }
 }
}
#endif
