train_mass = 22680
train_acceleration = 10
train_distance = 100
bomb_mass = 1

def f_to_c(f_temp):#f to c
  c_temp = (f_temp - 32)*5/9
  return c_temp

f100 = f_to_c(100)

def c_to_f(c_temp):#c to f
    f_temp = c_temp * (9/5)+32
    return f_temp

c0 = c_to_f(0)

def get_force(mass,accel):#calc force
    return mass*accel

train_force = get_force(train_mass,train_acceleration)

print("the ge train supplies "+str(train_force)+" Newtons of force." )

def get_energy(mass,c=3*10**8):#calc energy
    return mass*c**2

bomb_energy = get_energy(bomb_mass)

print("A 1kg bomb supplies "+str(bomb_energy)+"joules")

def get_work(mass,accel,distance):
    return get_force(mass,accel)*distance

train_work = get_work(train_mass,train_acceleration,train_distance)

print("the ge train does "+str(train_work)+" Joules of work over "+str(train_distance)+" meters.")
