#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 /* FLAW: data is allocated on the stack and deallocated in the BadSink */
 static int VAR3;
 VAR3 = 5;
 VAR2 = &VAR3;
 }
 break;
 default:
 FUN2("");
 break;
 }
 FUN3(*VAR2);
 /* POTENTIAL FLAW: Possibly deallocating memory allocated on the stack */
 delete VAR2;
}
#endif
