#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 switch(6)
 {
 case 6:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int64_t VAR4;
 VAR4 = 5LL;
 VAR3 = &VAR4;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(*VAR3);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR3;
}
#endif
