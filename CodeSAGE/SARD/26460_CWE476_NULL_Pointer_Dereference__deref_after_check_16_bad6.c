#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 /* FLAW: Check for NULL, but still dereference the pointer */
 int *VAR2 = NULL;
 if (VAR2 == NULL)
 {
 FUN2(*VAR2);
 }
 }
 break;
 }
}
#endif
