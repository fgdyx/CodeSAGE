#ifndef VAR1
static void FUN1()
{
 while(1)
 {
 {
 struct VAR2 * VAR3 = (struct VAR2 *)malloc(100*sizeof(struct VAR2));
 struct VAR2 * VAR4;
 VAR3[0].VAR5 = 0;
 VAR3[0].VAR6 = 0;
 FUN2((VAR7 *)&VAR3[0]);
 VAR4 = (struct VAR2 *)realloc(VAR3, (130000)*sizeof(struct VAR2));
 if (VAR4 != NULL)
 {
 VAR3 = VAR4;
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN2((VAR7 *)&VAR3[0]);
 }
 free(VAR3);
 }
 break;
 }
}
void FUN3()
{
 FUN1();
}
#endif
