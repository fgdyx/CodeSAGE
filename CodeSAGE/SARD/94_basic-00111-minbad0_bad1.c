int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 10;
 VAR2 = 0;
 while(++VAR2)
 {
 /* BAD */
 VAR3[10] = '';
 if (VAR2 >= VAR1) break;
 }
 return 0;
}
