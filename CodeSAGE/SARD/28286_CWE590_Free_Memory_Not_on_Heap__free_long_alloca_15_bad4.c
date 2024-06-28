#ifndef VAR1
void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 long * VAR3 = (long *)FUN2(100*sizeof(long));
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 break;
 default:
 FUN3("");
 break;
 }
 FUN4(VAR2[0]);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 free(VAR2);
}
#endif
