#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 /* FLAW: Check for NULL, but still dereference the pointer */
 int *VAR3 = NULL;
 if (VAR3 == NULL)
 {
 FUN2(*VAR3);
 }
 }
 }
}
#endif
