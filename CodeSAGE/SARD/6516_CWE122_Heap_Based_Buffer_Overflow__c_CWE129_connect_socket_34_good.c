#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR7);
 }
 }
}
static void FUN4()
{
 int VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE129_connect_socket_34_unionType VAR3;
 VAR2 = -1;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 char VAR15[VAR16];
 do
 {
#ifdef VAR8
 if (FUN5(FUN6(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN7(VAR24);
 VAR12.VAR25 = FUN8(VAR26);
 if (connect(VAR13, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR13, VAR15, VAR16 - 1, 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR15[VAR11] = '';
 VAR2 = FUN9(VAR15);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN10(VAR13);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int * VAR7 = (int *)malloc(10 * sizeof(int));
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR7);
 }
 }
}
void FUN12()
{
 FUN1();
 FUN4();
}
#endif
