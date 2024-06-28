#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR3 = (VAR2 *)realloc(VAR3, (130000)*sizeof(VAR2));
 if (VAR3 != NULL)
 {
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN3(&VAR3[0]);
 free(VAR3);
 }
 }
 }
 else
 {
 {
 VAR2 * VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR2 * VAR6;
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 VAR6 = (VAR2 *)realloc(VAR3, (130000)*sizeof(VAR2));
 if (VAR6 != NULL)
 {
 VAR3 = VAR6;
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN3(&VAR3[0]);
 }
 free(VAR3);
 }
 }
}
#endif
