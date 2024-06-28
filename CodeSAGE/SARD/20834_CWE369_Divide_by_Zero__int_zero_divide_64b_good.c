#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 FUN2(100 / VAR4);
}
void FUN3(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 if( VAR4 != 0 )
 {
 FUN2(100 / VAR4);
 }
 else
 {
 FUN4("");
 }
}
#endif
