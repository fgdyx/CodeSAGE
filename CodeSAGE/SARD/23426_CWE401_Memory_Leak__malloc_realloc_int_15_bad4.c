#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 int * VAR2 = (int *)malloc(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 /* FLAW: If realloc() fails, the initial memory block will not be freed() */
 VAR2 = (int *)realloc(VAR2, (130000)*sizeof(int));
 if (VAR2 != NULL)
 {
 VAR2[0] = 10;
 FUN2(VAR2[0]);
 free(VAR2);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
