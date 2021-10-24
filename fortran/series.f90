program series
 implicit none
 integer n,i,j,sum

 write(*,*)"Enter the value of n"
 read(*,*) n

sum = 0
do i = 1, n
 do j = 1, i
  sum = sum + j
 end do
end do

write(*,*)"The sum of the series=",sum
end program series
