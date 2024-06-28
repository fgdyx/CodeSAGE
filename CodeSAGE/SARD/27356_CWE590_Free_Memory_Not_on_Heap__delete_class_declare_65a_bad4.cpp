#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 TwoIntsClass VAR6;
 VAR6.VAR7 = 1;
 VAR6.VAR8 = 1;
 VAR3 = &VAR6;
 }
 FUN3(VAR3);
}
#endif
