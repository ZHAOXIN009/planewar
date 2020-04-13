#include "heroplane.h"
#include "config.h"
HeroPlane::HeroPlane()
{
    //加载飞机图片资源
    m_plane.load(HERO_PATH);

    //初始化坐标
    m_X=GAME_WIDTH*0.5-m_plane.width()*0.5;
    m_Y=GAME_HEIGHT-m_plane.height()-20;

    //矩形边框 检测碰撞用
    m_Rect.setWidth(m_plane.width());
    m_Rect.setHeight(m_plane.height());
    m_Rect.moveTo(m_X,m_Y);

    //初始化间隔记录
    m_recorder=0;
}

void HeroPlane::shoot()
{
    //累加时间间隔记录的变量
    m_recorder++;

    if(m_recorder<BULLET_INTERVAL)return;

    m_recorder=0;

    //发射子弹
    for(int i=0; i<BULLET_NUM;++i){
        //如果是空闲状态的子弹,发射子弹
        if(m_bullets[i].m_Free){
            m_bullets[i].m_Free=false;
            m_bullets[i].m_X=m_X+m_Rect.width()*0.5-10;//减10是以为子弹的宽度
            m_bullets[i].m_Y=m_Y-25;
            break;
        }
    }
}

void HeroPlane::setPosition(int x, int y)
{
    m_X=x;
    m_Y=y;
    m_Rect.moveTo(m_X,m_Y);
}
