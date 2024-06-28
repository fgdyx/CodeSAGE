#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 int * VAR3 = (int *)malloc(100*sizeof(int));
 VAR3[0] = 5;
 FUN2(VAR3[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR3 = (int *)realloc(VAR3, (130000)*sizeof(int));
 if (VAR3 != NULL)
 {
 VAR3[0] = 10;
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
 }
}
#endif
