
-- SELECT * FROM * WHERE * GROUP BY * HAVING (GROUP BY의 WHERE)
-- ORDER BY [ASC, DESC] / LIMIT n
-- COUNT(*) / COUNT( DISTINCT COLUMN ) 중복제거
-- SET @VAR = 1; 변수선언
-- YEAR(), MOUNTH(), HOUR(), MINUTE(), SECOND(), NOW(), 
-- CASE WHEN * THEN * ... ELSE * END
-- IFNULL(COLUMN, VAR) // IF(조건, TRUE VAR, FALSE VAR) // VAR IS NULL // VAR IS NOT NULL

create table "animal_ins" (
"ANIMAL_ID" VARCHAR(N) not null,
"ANIMAL_TYPE" VARCHAR(N) not null,
"DATETIME" VARCHAR(N) not null,
"INTAKE_CONDITION" VARCHAR(N) not null,
"NAME" VARCHAR(N) null,
"SEX_UPON_INTAKE" VARCHAR(N) not null,
)

-- SELECT
-- 1. 모든 동물의 정보를 ANIMAL_ID순으로 조회
SELECT * from animal_ins order by animal_id;

-- 2. 모든 동물의 이름과 보호 시작일을 ANIMAL_ID 역순으로 조회
SELECT name, datetime from animal_ins order by animal_id desc;

-- 3. Sick인 동물의 아이디와 이름을 아이디 순으로 조회
SELECT animal_id, name from animal_ins where intake_condition = "Sick" order by animal_id;

-- 4. Aged가 아닌 동물의 아이디와 이름을 아이디 순으로 조회
SELECT animal_id, name from animal_ins where intake_condition != "Aged" order by animal_id;

-- 5. 모든 동물의 아이디와 이름을 ANIMAL_ID순으로 조회
SELECT animal_id, name from animal_ins order by animal_id;

-- 6. 모든 동물의 아이디와 이름, 보호 시작일을 이름 순,
--      이름이 같은 동물 중에서는 보호를 나중에 시작한 동물 순으로 조회
SELECT animal_id, name, datetime from animal_ins order by name, datetime desc;

-- 7. 가장 먼저 들어온 동물의 이름을 조회
SELECT name from animal_ins order by datetime limit 1;


-- SUM, MAX, MIN
-- 1. 가장 최근에 들어온 동물은 언제 들어왔는지 조회
SELECT datetime from animal_ins order by datetime desc limit 1;

-- 2. 가장 먼저 들어온 동물은 언제 들어왔는지 조회
SELECT datetime from animal_ins order by datetime limit 1;

-- 3. 동물 보호소에 동물이 몇 마리 들어왔는지 조회
SELECT count(*) from animal_ins;

-- 4. 동물의 이름은 몇 개인지 조회 이때 이름이 NULL인 경우는 집계하지 않음
SELECT count(distinct name) from animal_ins;

create table "animal_outs" (
"ANIMAL_ID" VARCHAR(N) not null,
"ANIMAL_TYPE" VARCHAR(N) not null,
"DATETIME" VARCHAR(N) not null,
"NAME" VARCHAR(N) null,
"SEX_UPON_INTAKE" VARCHAR(N) not null,
)

-- GROUP BY
-- 1. 들어온 동물 중 고양이와 개가 각각 몇 마리인지 조회 이때 고양이가 개보다 먼저 조회
SELECT animal_type, count(*) AS "count" FROM animal_ins
    WHERE animal_type IN ("Cat", "Dog") group by animal_type
        ORDER BY CASE 
            WHEN animal_type = "Cat" THEN 1 
            WHEN animal_type = "Dog" THEN 2
        END;
    
-- 2. 동물 이름 중 두 번 이상 쓰인 이름과 해당 이름이 쓰인 횟수를 조회
--      이때 결과는 이름이 없는 동물은 집계에서 제외하며 이름 순
SELECT name, count(name) from animal_ins group by name having count(name) > 1 order by name;



-- 3. 9시부터 19시까지, 각 시간대별로 입양이 몇 건이나 발생했는지 조회 이때 결과는 시간대 순
SELECT hour(datetime), count(*) from animal_outs 
    where hour(datetime) between 9 and 19 
        group by hour(datetime) order by hour(datetime)
        
--  4. 0시부터 23시까지, 각 시간대별로 입양이 몇 건이나 발생했는지 조회 이때 결과는 시간대 순
set @hour = -1;
select
    (@hour := @hour +1) as HOUR,
    (select count(*) from animal_outs where hour(`datetime`) = @hour) as `COUNT`
        from animal_outs 
            where @hour < 23
            
-- IS NULL
-- 1. 이름이 없는 채로 들어온 동물의 ID를 조회 단, ID는 오름차순 정렬
SELECT animal_id from animal_ins where name is null order by animal_id;

-- 2. 이름이 있는 동물의 ID를 조회 단, ID는 오름차순 정렬
SELECT animal_id from animal_ins where name is not null order by animal_id;

-- 3. 동물의 생물 종, 이름, 성별 및 중성화 여부를 아이디 순으로 조회
--      이때 이름이 없는 동물의 이름은 No name으로 표시
SELECT animal_type, ifnull(name, "No name"), SEX_UPON_INTAKE
    from animal_ins order by animal_id;

-- String, Date
